//#include <stdio.h>
//
//int main() {
//    char school_char, department_char, name_char, mbti_char;
//    int student_id, birth_year;
//    float height, age;
//
//    printf("학교(상징 문자): ");
//    scanf_s(" %c", &school_char);  
//    getchar(); 
//
//    printf("학과(상징 문자): ");
//    scanf_s(" %c", &department_char); 
//    getchar(); 
//
//    printf("학번: ");
//    scanf_s("%d", &student_id);
//    getchar(); 
//
//    printf("이름(상징 문자): ");
//    scanf_s(" %c", &name_char);  
//    getchar(); 
//
//    printf("키(소수점 첫째자리까지): ");
//    scanf_s("%f", &height);
//    getchar(); 
//
//    printf("MBTI(상징 문자): ");
//    scanf_s(" %c", &mbti_char); 
//    getchar(); 
//
//    printf("출생년도를 입력하세요 (YYYY): ");
//    scanf_s("%d", &birth_year);
//    getchar(); 
//
//    int age = 2025 - birth_year;
//
//    printf("\n--- 자기소개서 ---\n");
//    printf("학교: %c\n", school_char);
//    printf("학과: %c\n", department_char);
//    printf("학번: %d\n", student_id);
//    printf("이름: %c\n", name_char);
//    printf("키: %.1f cm\n", height);
//    printf("MBTI: %c\n", mbti_char);
//    printf("나이(만 나이): %.0f세\n", age);
//
//    return 0;
//}