// 카드 뒤집기 
// 4*4 -> 다차원 배열 선언
// 랜덤하게 섞어주는 것도 설계 
// 사용자가 카드를 뒤집을거 -> 뒤집는거 로직, 그 뒤집은 짝이 맞는지 판단하는 로직 
// if 뒤집은게 다르다=> 다시 뒤집혀야 되고 else => 그냥 냅두면 됨 (이대로 유지되게) 
// 다 뒤집혔는지 (사용자가 다 짝 찾았는지) 

# include <stdio.h>
# include <stdlib.h> // malloc 같은 유틸함수 
# include <time.h> // 랜덤값 생성하기 위한 라이브러리 
# include <stdbool.h> // bool - true or false 같은거 쓸때 쓰는 라이브러리 

// 카드게임 선언 (다차원 배열 4*4) 
# define ROWS 4
# define COLS 4 

// 함수들 선언 
void initBoard(int board[ROWS][COLS]); // board의 1~8까지의 순서쌍 
void shuffleBoard(int board[ROWS][COLS]); // board 내부값 섞는 함수 
void printBoard(int board[ROWS][COLS], bool revealed[ROWS][COLS]); // 뒤집은카드(revealed) , 실제카드값 (board)
void getChoice(int* r, int* c); // 행,열값 입력받아 좌표를 리턴 
bool isFinished(bool revealed[ROWS][COLS]); // 모든카드가 다 뒤집혔는지 검사 , 다 뒤집으면 true 리턴 -> 게임 끝났는지 판단 


int main() {
	int board[ROWS][COLS];
	bool revealed[ROWS][COLS] = { false }; // 카드가 다 안뒤집힌걸로 초기화 , { false } => 모든 값을 다 초기화 
	int r1, c1, r2, c2; // 좌표값 선언해주고 
	int moves = 0; // 뒤집은 횟수고 처음엔 0으로 초기화 

	srand((unsigned)time(NULL)); // 실행시마다 다른 값을 주기위해 난수시드 초기화 

	// 1. 보드를 만들었으니 값들을 넣어줘야 함 
	initBoard(board);

	// 2. 값들 섞어야 함 
	shuffleBoard(board);

	printf("카드 뒤집기 게임입니다\n");
	
	while (!isFinished(revealed)) 
	{
		printBoard(board, revealed);
		
		printf("첫 번째 카드 선택 :");
		getChoice(&r1, &c1); // 첫번째 선택 
		revealed[r1][c1] = true; // true로 초기화한 이유? 뒤집은거니까 
		printBoard(board, revealed);

		printf("두 번째 카드 선택 :");
		getChoice(&r2, &c2); // 두번째 선택 
		revealed[r2][c2] = true; // true로 초기화한 이유? 뒤집은거니까 
		printBoard(board, revealed);

		moves++;

		if (board[r1][c1] == board[r2][c2]) {
			printf("성공");
		}
		else
		{
			printf("다른 카드 뒤집음 다시 뒤집으셈");
			revealed[r1][c1] = revealed[r2][c2] = false;
		}
	}
	printf("모든 카드 짝 맞춤, 시도 횟수 : %d\n", moves);
	return 0;
}

// 1~8 숫자쌍으로 2차원 배열채우기 
void initBoard(int board[ROWS][COLS]) {
	int pair = 1; // 현재 넣을 숫자(1부터 시작해서 8까지 가는데) 기억 
	int count = 0; // 짝수일때마다 pair++ 해줘서 숫자 하나씩 올림 
	for (int i = 0; i < ROWS; i++) {
		for (int ii = 0; ii < COLS; ii++) {
			board[i][ii] = pair;
			count++;
			if (count % 2 == 0) { // 2개 채웠으면 다음 숫자 
				pair++;
			}
		}
	}
}

// 카드값 무작위 좌표들끼리 swap 
// 각 위치 (i,ii) 계속 돌면서 무작위 위치 (i1,ii2) 뽑아서 서로 값을 swap 
void shuffleBoard(int board[ROWS][COLS]) {
	for (int i = 0; i < ROWS; i++) {
		for (int ii = 0; ii < COLS; ii++) {
			int i2 = rand() % ROWS; // rows 가 8(카드값) 나누면 0~7 그중에 하나를 랜덤을 뽑는다 
			int ii2 = rand() % COLS; // cols 가 8 나누면 0~7 그중에 하나를 랜덤을 뽑는다 
			int tmp = board[i][ii];
			board[i][ii] = board[i2][ii2];
			board[i2][ii2] = tmp;
		}
	}
}

// 배열 출력 
void printBoard(int board[ROWS][COLS], bool revealed[ROWS][COLS]) {
	printf("                ");
		for (int ii = 0; ii < COLS; ii++) {
			printf("\n=================\n");

			for (int i = 0; i < ROWS; i++) {
				if (revealed[i][ii])
					printf("%d l", board[i][ii]);
				else
					printf(" * ");
				printf(" ");
			}
			printf("l\n");
		}
		printf("=================\n");
}

// 입력 받기 
void getChoice(int* r, int* c) {
	scanf_s("%d %d", r, c);
}

// 끝내기
bool isFinished(bool revealed[ROWS][COLS]) {
	for (int i = 0; i < ROWS; i++) {
		for (int ii = 0; ii < COLS; ii++) {
			if (!revealed[i][ii])
				return false;
		}
	}
	return true;
}