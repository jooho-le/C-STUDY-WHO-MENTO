//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define MAX_LINE 256
//
//// 1) �л� ������ ���� ����ü ����
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
//        printf("\n=== �л� ���� ���� ===\n");
//        printf("1. ���� �߰�\n");
//        printf("2. ���� ���\n");
//        printf("3. ����\n");
//        printf("����: ");
//        if (scanf("%d", &choice) != 1) {
//            printf("�Է� ����! �ٽ� �����ϼ���.\n");
//            while (getchar() != '\n');
//            continue;
//        }
//
//        if (choice == 1) {
//            // --- ���� �߰� ---
//            printf("�̸�: ");
//            scanf("%49s", st.name);
//            printf("C���: ");
//            scanf("%d", &st.C);
//            printf("JAVA: ");
//            scanf("%d", &st.J);
//            printf("PYTHON: ");
//            scanf("%d", &st.P);
//
//            FILE* fp = fopen("grades.csv", "a");
//            if (!fp) {
//                perror("���� ���� ����");
//                continue;
//            }
//            fprintf(fp, "%s,%d,%d,%d\n",
//                st.name, st.C, st.J, st.P);
//            fclose(fp);
//
//            printf("������ ����Ǿ����ϴ�.\n");
//
//        }
//        else if (choice == 2) {
//            // --- ���� ��� ---
//            FILE* fp = fopen("grades.csv", "r");
//            if (!fp) {
//                perror("���� ���� ����");
//                continue;
//            }
//
//            printf("\n�̸�\tC���\tJAVA\tPYTHON\t�հ�\t���\n");
//            printf("------------------------------------------------\n");
//            while (fgets(line, sizeof(line), fp)) {
//                // CSV �� ���� �� ���� ����ü �ʵ�� �Ľ�
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
//            printf("���α׷��� �����մϴ�.\n");
//            break;
//
//        }
//        else {
//            printf("�ùٸ� ������ �ƴմϴ�. �ٽ� �Է��ϼ���.\n");
//        }
//    }
//
//    return 0;
//}
