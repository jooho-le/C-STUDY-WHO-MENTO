//#include <stdio.h>
//#include <string.h>
//
//#define MAX_WORDS 3
//#define WORD_LEN 20      
//
//void showIntro() {
//    printf("�ܾ� ���߱� ����- �� %d����\n\n", MAX_WORDS);
//}
//
//int playQuiz(char word[], char hint[]) {
//    char answer[WORD_LEN];
//
//    printf("����: %s\n", hint);
//    printf("���� �Է�: ");
//    scanf_s("%s", answer, (unsigned int)WORD_LEN);
//
//    if (strcmp(answer, word) == 0) {
//        printf("����\n\n");
//        return 1;
//    }
//    else {
//        printf(" ����. ������ '%s'\n\n", word);
//        return 0;
//    }
//}
//
//void showResult(int score, int total) {
//    printf("���� ����, �� ����: %d / %d\n", score, total);
//}
//
//int main() {
//    char words[MAX_WORDS][WORD_LEN] = { "apple", "banana", "grape" };
//    char hints[MAX_WORDS][WORD_LEN] = { "a _ _ l e", "b a _ _ _ a", "g _ _ _ e" };
//    int score = 0;
//
//    showIntro();
//
//    for (int i = 0; i < MAX_WORDS; i++) {
//        score += playQuiz(words[i], hints[i]);
//    }
//
//    showResult(score, MAX_WORDS);
//
//    return 0;
//}