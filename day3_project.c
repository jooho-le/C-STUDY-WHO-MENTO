//#include <stdio.h>
//#include <string.h>
//
//#define MAX_WORDS 3
//#define WORD_LEN 20      
//
//void showIntro() {
//    printf("단어 맞추기 게임- 총 %d문제\n\n", MAX_WORDS);
//}
//
//int playQuiz(char word[], char hint[]) {
//    char answer[WORD_LEN];
//
//    printf("문제: %s\n", hint);
//    printf("정답 입력: ");
//    scanf_s("%s", answer, (unsigned int)WORD_LEN);
//
//    if (strcmp(answer, word) == 0) {
//        printf("정답\n\n");
//        return 1;
//    }
//    else {
//        printf(" 오답. 정답은 '%s'\n\n", word);
//        return 0;
//    }
//}
//
//void showResult(int score, int total) {
//    printf("게임 종료, 총 점수: %d / %d\n", score, total);
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