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
//        printf("\n=== �л� ���� ���� ===\n");
//        printf("1. ���� �߰�\n");
//        printf("2. ���� ���\n");
//        if (scanf("%d", &choice) != 1) {
//            printf("�Է� ����! �ٽ� �����ϼ���.\n");
//            while (getchar() != '\n'); 
//            continue;
//        }
//
//        if (choice == 1) {
//            printf("�̸�: ");
//            scanf("%s", name);
//            printf("C���: ");
//            scanf("%d", &C);
//            printf("JAVA: ");
//            scanf("%d", &J);
//            printf("PYTHON: ");
//            scanf("%d", &P);
//
//            FILE* fp = fopen("grades.csv", "a");
//            if (fp == NULL) {
//                perror("���� ���� ����");
//                continue;
//            }
//            fprintf(fp, "%s,%d,%d,%d\n", name, C, J, P);
//            fclose(fp);
//
//            printf("������ ����Ǿ����ϴ�.\n");
//
//        }
//        else if (choice == 2) {
//            FILE* fp = fopen("grades.csv", "r");
//            if (fp == NULL) {
//                perror("���� ���� ����");
//                continue;
//            }
//
//            printf("\n�̸�\tC���\tJAVA\tPYTHON\t�հ�\t���\n");
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
