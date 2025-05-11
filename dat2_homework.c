#include <stdio.h>

//// 2739(±¸±¸´Ü)

//int main() {
//    int a;
//    scanf_s("%d", &a);
//    for (int b = 1; b < 10; b++)
//    {
//        printf("%d * %d = %d\n", a, b, a * b);
//    }
//
//
//    return 0;
//}

//// 10950(A+B-3)

// ³ªÁß¿¡

//// º° Âï±â - 1

//int main() {
//	int a = 0;
//	scanf_s("%d", &a);
//	for (int i = 1; i <= a; i++) {
//		for (int j = 1; j <= i; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//// º° Âï±â - 2

//int main() {
//	int a = 0;
//	scanf_s("%d", &a);
//    for (int i = 1; i <= a; i++) {
//        for (int j = 0; j < a - i; j++) { 
//            printf(" ");
//        }
//        for (int k = 0; k < i; k++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//	return 0;
//}

//// º° Âï±â - 3

//int main() {
//	int a = 0;
//	scanf_s("%d", &a);
//	for (int i = 1; i <= a; i++) {
//		for (int j = a; j > i; j--) {
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//// º° Âï±â - 4

//int main() {
//	int a;
//	scanf_s("%d", &a);
//	for (int i = 0; i < a; i++) {
//		for (int j = i; j < a - 1; j++) {
//			printf(" ");
//		}
//		for (int k = 0; k <= a - i; k++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//}
