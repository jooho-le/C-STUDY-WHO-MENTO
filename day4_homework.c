//#include <stdio.h>
//
//int main() {
//    int N, M;
//    scanf_s("%d %d", &N, &M);
//
//    int A[100][100];
//    int B[100][100];
//
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < M; j++) {
//            scanf_s("%d", &A[i][j]);
//        }
//    }
//
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < M; j++) {
//            scanf_s("%d", &B[i][j]);
//        }
//    }
//
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < M; j++) {
//            printf("%d", A[i][j] + B[i][j]);
//            if (j < M - 1) printf(" ");
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
///////////////////////////////////////////////////////////////////////////////////////////// 2738(��ĵ���) 

//#include <stdio.h>
//
//int main() {
//    int arr[9][9];
//    int max = 0;
//    int max_row = 0, max_col = 0;
//
//    for (int i = 0; i < 9; i++) {
//        for (int j = 0; j < 9; j++) {
//            scanf("%d", &arr[i][j]);
//            if (arr[i][j] > max) {
//                max = arr[i][j];
//                max_row = i + 1;  
//                max_col = j + 1;  
//            }
//        }
//    }
//
//    printf("%d\n", max);
//    printf("%d %d\n", max_row, max_col);
//
//    return 0;
//}

///////////////////////////////////////////////////////////////////////////////////////////// 2566(�ִ�) 

//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char line[5][16];  // �ִ� 15�� + �� ����
//
//    // 5���� scanf�� �б� (���� ���ڰ� �����Ƿ� %s ��� ����)
//    for (int i = 0; i < 5; i++) {
//        scanf_s("%s", line[i]);
//    }
//
//    // ���η� �� ���ھ� printf�� ���
//    for (int col = 0; col < 15; col++) {
//        for (int row = 0; row < 5; row++) {
//            if (col < (int)strlen(line[row])) {
//                // putchar ��� printf �ᵵ OK
//                printf("%c", line[row][col]);
//            }
//        }
//    }
//    printf("\n");
//
//    return 0;
//}


//#include <stdio.h>
//
//int main() {
//    char grade[3];
//    scanf_s("%2s", grade);  // A+, A0, B-, F �� �ִ� 2���� �б�
//
//    double score;
//    if (grade[0] == 'F') {
//        // F�� ������ 0.0
//        score = 0.0;
//    }
//    else {
//        // �⺻ ����: A=4.0, B=3.0, C=2.0, D=1.0
//        double base = 0.0;
//        switch (grade[0]) {
//        case 'A': base = 4.0; break;
//        case 'B': base = 3.0; break;
//        case 'C': base = 2.0; break;
//        case 'D': base = 1.0; break;
//        }
//        score = base;
//        // ��ȣ�� ���� ��0.3 ���� (��0���̸� ���� ����)
//        if (grade[1] == '+') {
//            score += 0.3;
//        }
//        else if (grade[1] == '-') {
//            score -= 0.3;
//        }
//    }
//
//    // �Ҽ��� ù° �ڸ����� ���
//    printf("%.1f\n", score);
//    return 0;
//}
