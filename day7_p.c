// ī�� ������ 
// 4*4 -> ������ �迭 ����
// �����ϰ� �����ִ� �͵� ���� 
// ����ڰ� ī�带 �������� -> �����°� ����, �� ������ ¦�� �´��� �Ǵ��ϴ� ���� 
// if �������� �ٸ���=> �ٽ� �������� �ǰ� else => �׳� ���θ� �� (�̴�� �����ǰ�) 
// �� ���������� (����ڰ� �� ¦ ã�Ҵ���) 

# include <stdio.h>
# include <stdlib.h> // malloc ���� ��ƿ�Լ� 
# include <time.h> // ������ �����ϱ� ���� ���̺귯�� 
# include <stdbool.h> // bool - true or false ������ ���� ���� ���̺귯�� 

// ī����� ���� (������ �迭 4*4) 
# define ROWS 4
# define COLS 4 

// �Լ��� ���� 
void initBoard(int board[ROWS][COLS]); // board�� 1~8������ ������ 
void shuffleBoard(int board[ROWS][COLS]); // board ���ΰ� ���� �Լ� 
void printBoard(int board[ROWS][COLS], bool revealed[ROWS][COLS]); // ������ī��(revealed) , ����ī�尪 (board)
void getChoice(int* r, int* c); // ��,���� �Է¹޾� ��ǥ�� ���� 
bool isFinished(bool revealed[ROWS][COLS]); // ���ī�尡 �� ���������� �˻� , �� �������� true ���� -> ���� �������� �Ǵ� 


int main() {
	int board[ROWS][COLS];
	bool revealed[ROWS][COLS] = { false }; // ī�尡 �� �ȵ������ɷ� �ʱ�ȭ , { false } => ��� ���� �� �ʱ�ȭ 
	int r1, c1, r2, c2; // ��ǥ�� �������ְ� 
	int moves = 0; // ������ Ƚ���� ó���� 0���� �ʱ�ȭ 

	srand((unsigned)time(NULL)); // ����ø��� �ٸ� ���� �ֱ����� �����õ� �ʱ�ȭ 

	// 1. ���带 ��������� ������ �־���� �� 
	initBoard(board);

	// 2. ���� ����� �� 
	shuffleBoard(board);

	printf("ī�� ������ �����Դϴ�\n");
	
	while (!isFinished(revealed)) 
	{
		printBoard(board, revealed);
		
		printf("ù ��° ī�� ���� :");
		getChoice(&r1, &c1); // ù��° ���� 
		revealed[r1][c1] = true; // true�� �ʱ�ȭ�� ����? �������Ŵϱ� 
		printBoard(board, revealed);

		printf("�� ��° ī�� ���� :");
		getChoice(&r2, &c2); // �ι�° ���� 
		revealed[r2][c2] = true; // true�� �ʱ�ȭ�� ����? �������Ŵϱ� 
		printBoard(board, revealed);

		moves++;

		if (board[r1][c1] == board[r2][c2]) {
			printf("����");
		}
		else
		{
			printf("�ٸ� ī�� ������ �ٽ� ��������");
			revealed[r1][c1] = revealed[r2][c2] = false;
		}
	}
	printf("��� ī�� ¦ ����, �õ� Ƚ�� : %d\n", moves);
	return 0;
}

// 1~8 ���ڽ����� 2���� �迭ä��� 
void initBoard(int board[ROWS][COLS]) {
	int pair = 1; // ���� ���� ����(1���� �����ؼ� 8���� ���µ�) ��� 
	int count = 0; // ¦���϶����� pair++ ���༭ ���� �ϳ��� �ø� 
	for (int i = 0; i < ROWS; i++) {
		for (int ii = 0; ii < COLS; ii++) {
			board[i][ii] = pair;
			count++;
			if (count % 2 == 0) { // 2�� ä������ ���� ���� 
				pair++;
			}
		}
	}
}

// ī�尪 ������ ��ǥ�鳢�� swap 
// �� ��ġ (i,ii) ��� ���鼭 ������ ��ġ (i1,ii2) �̾Ƽ� ���� ���� swap 
void shuffleBoard(int board[ROWS][COLS]) {
	for (int i = 0; i < ROWS; i++) {
		for (int ii = 0; ii < COLS; ii++) {
			int i2 = rand() % ROWS; // rows �� 8(ī�尪) ������ 0~7 ���߿� �ϳ��� ������ �̴´� 
			int ii2 = rand() % COLS; // cols �� 8 ������ 0~7 ���߿� �ϳ��� ������ �̴´� 
			int tmp = board[i][ii];
			board[i][ii] = board[i2][ii2];
			board[i2][ii2] = tmp;
		}
	}
}

// �迭 ��� 
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

// �Է� �ޱ� 
void getChoice(int* r, int* c) {
	scanf_s("%d %d", r, c);
}

// ������
bool isFinished(bool revealed[ROWS][COLS]) {
	for (int i = 0; i < ROWS; i++) {
		for (int ii = 0; ii < COLS; ii++) {
			if (!revealed[i][ii])
				return false;
		}
	}
	return true;
}