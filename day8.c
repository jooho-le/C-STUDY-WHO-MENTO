#include <stdio.h>
#include <stdlib.h> // malloc 같은 유틸함수 
#include <string.h> // 문자열 함수 
#include <time.h> // 랜던값 생성하기 위해 - 시간함수

#define MAX_LINE 1024 // fgets로 읽을 최대 문자열 길이 선언 

// 함수 선언
void writeDiary(); // 새 읽기 작성하여 파일에 추가
void viewDiary(); //  저장된 일기 전체 화면에 출력 

int main(void) {
    int choice = 0; // 옵션선텍
    char input[32]; // 입력 갯수(?)

    while (1) {
        printf("\n=== 일기장 프로그램 ===\n");
        printf("1. 새 일기 작성\n");
        printf("2. 일기 불러오기\n");
        printf("3. 종료\n");
        printf("선택: ");

        // fgets으로 한 줄 입력 받기
        if (!fgets(input, sizeof(input), stdin)) // stdin : 입력을 받을 때 사용하는 스트림으로 기본적으로 키보드 입력
            // 최대 31자까지 읽고 널문자 붙임 
            break;
        if (sscanf(input, "%d", &choice) != 1) { // 1을 반환하지 않으면 오류 
            printf(">> 잘못된 입력입니다. 숫자를 입력하세요.\n");
            continue;
        }

        if (choice == 1) {
            writeDiary();
        }
        else if (choice == 2) {
            viewDiary();
        }
        else if (choice == 3) {
            printf(">> 프로그램을 종료합니다.\n");
            break;
        }
        else {
            printf(">> 올바른 선택이 아닙니다.\n");
        }
    }

    return 0;
}

// 새 일기 작성 함수
void writeDiary() {
    FILE* fp = fopen("diary.txt", "a"); // append 모드로 연다 
    if (!fp) { // 파일이 없으면 
        perror("파일 열기 실패");
        return;
    }

    // 현재 날짜·시간 기록
    time_t t = time(NULL); // 현재 시각 구함 
    struct tm lt = *localtime(&t); // struct tm에 연월일시분초를 분해 
    fprintf(fp, "\n---- %04d-%02d-%02d %02d:%02d:%02d ----\n", 
        lt.tm_year + 1900, lt.tm_mon + 1, lt.tm_mday,
        lt.tm_hour, lt.tm_min, lt.tm_sec); 

    // 일기 내용 입력
    printf("일기 내용을 입력하세요. (종료하려면 빈 줄만 입력)\n");
    char line[MAX_LINE];
    while (fgets(line, MAX_LINE, stdin)) {
        if (strcmp(line, "\n") == 0)  // 빈 줄이면 입력 종료
            break;
        fprintf(fp, "%s", line);
    }

    fclose(fp);
    printf(">> 일기가 저장되었습니다.\n");
}

// 저장된 일기 불러오기 함수
void viewDiary() {
    FILE* fp = fopen("diary.txt", "r");
    if (!fp) {
        perror("파일 열기 실패");
        return;
    }

    printf("\n=== 저장된 일기 ===\n");
    char line[MAX_LINE];
    while (fgets(line, MAX_LINE, fp)) {
        fputs(line, stdout); // stdout : 출력 스트림 
    }
    fclose(fp);
    printf("\n");
}
