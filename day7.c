//#include <stdio.h>
//#include <stdlib.h> // malloc 같은 유틸함수 
//#include <time.h> // 랜던값 생성하기 위해 - 시간함수
//#include <stdbool.h> // bool true false같은거 사용 
//
//// 4*4 카드게임이니까 
//#define ROWS 4
//#define COLS 4
//
//// 함수 선언
//void initBoard(int board[ROWS][COLS]); //board의 1~8 숫자쌍 배열 
//void shuffleBoard(int board[ROWS][COLS]); //board 내부 값 스왑 역할 
//void printBoard(int board[ROWS][COLS], bool revealed[ROWS][COLS]); // 두집은카드(revealed), 실제카드값(board)출력
//void getChoice(int* r, int* c); // 행 열값 입력받아 좌표로 리턴 
//bool isFinished(bool revealed[ROWS][COLS]); // 모든카드 뒤집혔는지 검사하고 다 뒤집히면 true리턴
//
//int main() {
//    int board[ROWS][COLS];
//    bool revealed[ROWS][COLS] = { false }; // 카드 뒤집히지 않은걸로 초기화, 중괄호로 전체가 false로 초기화됨 
//    int r1, c1, r2, c2; // 좌표변수 
//    int moves = 0; // 카드 뒤집은 횟수 카운트 
//
//    srand((unsigned)time(NULL)); // 실행시마다 다른 값 주기위해 난수시드 초기화
//
//    // 1) 보드 초기화: 1~8 짝으로 채우기
//    initBoard(board);
//
//    // 2) 2중 루프에서 직접 섞기 (다차원 배열 강조)
//    shuffleBoard(board);
//
//    printf("== 카드 뒤집기 게임 ===\n\n");
//    while (!isFinished(revealed)) { // isfinished가 true이어야 다 뒤집힌거니까 ! 을 붙힘 
//        printBoard(board, revealed);
//
//        // 첫 번째 선택
//        printf("첫 번째 카드 (행 열): ");
//        getChoice(&r1, &c1);
//        revealed[r1][c1] = true; // 화면에 보여주기 위해 true로 바꿔줌 
//        printBoard(board, revealed);
//
//        // 두 번째 선택
//        printf("두 번째 카드 (행 열): ");
//        getChoice(&r2, &c2);
//        revealed[r2][c2] = true;
//        printBoard(board, revealed);
//
//        moves++;
//
//        if (board[r1][c1] == board[r2][c2]) {
//            printf("성공!\n\n");
//        }
//        else {
//            printf("다른 카드입니다. 바로 뒤집어요.\n\n");
//            // 즉시 뒤집기 (getchar 제거)
//            revealed[r1][c1] = revealed[r2][c2] = false;
//        }
//    }
//
//    printf("모든 카드를 맞추셨습니다! 시도 횟수: %d\n", moves);
//    return 0;
//}
//
//// 1~8 숫자 짝으로 2D 배열에 채우기
//void initBoard(int board[ROWS][COLS]) {
//    int pair = 1; // 현재 넣을 숫자(1부터 시작) 기억  
//    int count = 0; // 짝수일때마다 pair++해서 숫자 하니씩 올림 
//    for (int i = 0; i < ROWS; i++) {
//        for (int j = 0; j < COLS; j++) {
//            board[i][j] = pair;
//            count++;
//            if (count % 2 == 0) pair++;  // 2개 채웠으면 다음 숫자
//        }
//    }
//}
//
//// 2중 루프에서 무작위 좌표와 swap
//// 2중 루프로 각 위치 (i,j)순회하며 무작위 위치(i2,j2)뽑아 서로 바꿈 
//void shuffleBoard(int board[ROWS][COLS]) {
//    for (int i = 0; i < ROWS; i++) {
//        for (int j = 0; j < COLS; j++) {
//            int i2 = rand() % ROWS; // rows가 8이니까 0~7중 하나 랜덤으로 뽑음 
//            int j2 = rand() % COLS;
//            int tmp = board[i][j];
//            board[i][j] = board[i2][j2];
//            board[i2][j2] = tmp;
//        }
//    }
//}
//
//// 2D 배열을 화면에 출력
//void printBoard(int board[ROWS][COLS], bool revealed[ROWS][COLS]) {
//    printf("   ");
//    for (int j = 0; j < COLS; j++) printf(" %d  ", j);
//    printf("\n  +-----------------\n");
//
//    for (int i = 0; i < ROWS; i++) {
//        printf("%d |", i);
//        for (int j = 0; j < COLS; j++) {
//            if (revealed[i][j])
//                printf(" %d ", board[i][j]);
//            else
//                printf(" * ");
//            printf(" ");
//        }
//        printf("|\n");
//    }
//    printf("  +-----------------\n");
//}
//
//// 단순 입력: 사용자로부터 두 정수(행,열) 받기
//void getChoice(int* r, int* c) {
//    scanf_s("%d %d", r, c);
//}
//
//// 모든 카드가 뒤집혔는지 검사
//bool isFinished(bool revealed[ROWS][COLS]) {
//    for (int i = 0; i < ROWS; i++)
//        for (int j = 0; j < COLS; j++)
//            if (!revealed[i][j])
//                return false;
//    return true;
//}
