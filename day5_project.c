//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define MAX_LINE 256
//
//int main(void) {
//    int choice;
//    char name[50];
//    int C, J, P;
//    char line[MAX_LINE];
//
//    while (1) {
//        printf("\n=== 학생 성적 관리 ===\n");
//        printf("1. 성적 추가\n");
//        printf("2. 성적 출력\n");
//        if (scanf("%d", &choice) != 1) {
//            printf("입력 오류! 다시 선택하세요.\n");
//            while (getchar() != '\n'); 
//            continue;
//        }
//
//        if (choice == 1) {
//            printf("이름: ");
//            scanf("%s", name);
//            printf("C언어: ");
//            scanf("%d", &C);
//            printf("JAVA: ");
//            scanf("%d", &J);
//            printf("PYTHON: ");
//            scanf("%d", &P);
//
//            FILE* fp = fopen("grades.csv", "a");
//            if (fp == NULL) {
//                perror("파일 열기 실패");
//                continue;
//            }
//            fprintf(fp, "%s,%d,%d,%d\n", name, C, J, P);
//            fclose(fp);
//
//            printf("성적이 저장되었습니다.\n");
//
//        }
//        else if (choice == 2) {
//            FILE* fp = fopen("grades.csv", "r");
//            if (fp == NULL) {
//                perror("파일 열기 실패");
//                continue;
//            }
//
//            printf("\n이름\tC언어\tJAVA\tPYTHON\t합계\t평균\n");
//            printf("------------------------------------------------\n");
//            while (fgets(line, sizeof(line), fp)) {
//                if (sscanf(line, "%[^,],%d,%d,%d", name, &C, &J, &P) == 4) {
//                    int sum = C + J + P;
//                    double avg = sum / 3.0;
//                    printf("%s\t%d\t%d\t%d\t%d\t%.2f\n",
//                        name, C, J, P, sum, avg);
//                }
//            }
//            fclose(fp);
//        }
//    }
//
//    return 0;
//}
