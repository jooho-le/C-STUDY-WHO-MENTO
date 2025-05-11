//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define MAX_LINE 256
//
//// 1) 학생 성적을 담을 구조체 정의
//typedef struct {
//    char name[50];
//    int C;
//    int J;
//    int P;
//} Student;
//
//int main(void) {
//    int choice;
//    char line[MAX_LINE];
//    Student st;
//
//    while (1) {
//        printf("\n=== 학생 성적 관리 ===\n");
//        printf("1. 성적 추가\n");
//        printf("2. 성적 출력\n");
//        printf("3. 종료\n");
//        printf("선택: ");
//        if (scanf("%d", &choice) != 1) {
//            printf("입력 오류! 다시 선택하세요.\n");
//            while (getchar() != '\n');
//            continue;
//        }
//
//        if (choice == 1) {
//            // --- 성적 추가 ---
//            printf("이름: ");
//            scanf("%49s", st.name);
//            printf("C언어: ");
//            scanf("%d", &st.C);
//            printf("JAVA: ");
//            scanf("%d", &st.J);
//            printf("PYTHON: ");
//            scanf("%d", &st.P);
//
//            FILE* fp = fopen("grades.csv", "a");
//            if (!fp) {
//                perror("파일 열기 실패");
//                continue;
//            }
//            fprintf(fp, "%s,%d,%d,%d\n",
//                st.name, st.C, st.J, st.P);
//            fclose(fp);
//
//            printf("성적이 저장되었습니다.\n");
//
//        }
//        else if (choice == 2) {
//            // --- 성적 출력 ---
//            FILE* fp = fopen("grades.csv", "r");
//            if (!fp) {
//                perror("파일 열기 실패");
//                continue;
//            }
//
//            printf("\n이름\tC언어\tJAVA\tPYTHON\t합계\t평균\n");
//            printf("------------------------------------------------\n");
//            while (fgets(line, sizeof(line), fp)) {
//                // CSV 한 줄을 한 번에 구조체 필드로 파싱
//                if (sscanf(line,
//                    "%49[^,],%d,%d,%d",
//                    st.name, &st.C, &st.J, &st.P) == 4) {
//                    int sum = st.C + st.J + st.P;
//                    double avg = sum / 3.0;
//                    printf("%s\t%d\t%d\t%d\t%d\t%.2f\n",
//                        st.name, st.C, st.J, st.P, sum, avg);
//                }
//            }
//            fclose(fp);
//
//        }
//        else if (choice == 3) {
//            printf("프로그램을 종료합니다.\n");
//            break;
//
//        }
//        else {
//            printf("올바른 선택이 아닙니다. 다시 입력하세요.\n");
//        }
//    }
//
//    return 0;
//}
