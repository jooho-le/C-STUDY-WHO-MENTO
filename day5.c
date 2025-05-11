/* day5 - swap, 파일 입출력 */


//# include <stdio.h>

//------------------------------------------------------------------------------------------------------------------------ swap

//#include <stdio.h>
//
//int main(void) {
//	int a = 10, b = 20;
//	int temp;
//
//	printf("Before swap: a = %d, b = %d\n", a, b);
//	temp = a;  // a 값을 temp에 저장 -> temp = 10
//	a = b;     // b 값을 a에 저장 -> a = 20 
//	b = temp;  // temp(원래 a)를 b에 저장 -> b = 10 
//	printf("After swap:  a = %d, b = %d\n", a, b);
//
//	return 0;
//}


//두 변수의 값을 교환하는 함수로 주로 포인터를 사용해 메모리주소를 직접 조작 
//
//선언 : void swap(type *a, type *b)
//
//void swap(int* a, int* b) {
//    int tmp = *a; 
//    *a = *b;
//    *b = tmp;
//} // -> swap 함수에서 a,b 값 바꾸는 알고리즘 짬 
//
//int main() {
//    int x = 5, y = 10;
//    swap(&x, &y);
//    printf("x = %d, y = %d", x, y); 
//        return 0;
//}


//------------------------------------------------------------------------------------------------------------------------ 파일 입출력

// 파일에 어떤 데이터를 저장, 저장된 데이터를 불러오기 

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <locale.h>
//
//int main(void) {
//    // 한글 깨짐 방지
//    setlocale(LC_ALL, "");
//
//    FILE* fp;
//    char buffer[256];
//
//    // 1) 쓰기 모드: 파일이 없으면 생성, 있으면 기존 내용 삭제 후 새로 쓰기
//    fp = fopen("test.txt", "w");
//    if (fp == NULL) {
//        perror("쓰기 모드 열기 실패");
//        return 1;
//    }
//    fprintf(fp, "첫 번째 줄: 쓰기 모드로 작성\n");
//    fprintf(fp, "두 번째 줄: 초기 내용\n");
//    fclose(fp); // 파일을 생성하고 닫지않고 프로그램오류가생기면 데이터손실등의 문제가 생겨 꼭 닫아야함 
//
//    // 2) 추가 모드: 파일 끝에 덧붙이기
//    fp = fopen("test.txt", "a");
//    if (fp == NULL) {
//        perror("추가 모드 열기 실패");
//        return 1;
//    }
//    fputs("세 번째 줄: 추가 모드로 덧붙임\n", fp);
//    fclose(fp);
//
//    // 3) 읽기 모드: 파일을 한 줄씩 읽어 화면에 출력
//    fp = fopen("test.txt", "r");
//    if (fp == NULL) {
//        perror("읽기 모드 열기 실패");
//        return 1;
//    }
//    printf("=== test.txt 내용 ===\n");
//    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
//        fputs(buffer, stdout);
//    }
//    fclose(fp);
//
//    return 0;
//}

//------------------------------------------------------------------------------------------------------------------------ 프로젝트 

// 성적을 입력받거나 출력하는 프로그램 , 입력받은 성적은 C언어, PYTHON, JAVA가 있고 평균점수도 내야함 , 파일을 CSV형식으로 저장 

//------------------------------------------------------------------------------------------------------------------------ 백준

// 11718 (그대로 출력하기) , 11719(그대로 출력하기2)  


