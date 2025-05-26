#include <stdio.h>
#include <stdlib.h> // malloc ���� ��ƿ�Լ� 
#include <string.h> // ���ڿ� �Լ� 
#include <time.h> // ������ �����ϱ� ���� - �ð��Լ�

#define MAX_LINE 1024 // fgets�� ���� �ִ� ���ڿ� ���� ���� 

// �Լ� ����
void writeDiary(); // �� �б� �ۼ��Ͽ� ���Ͽ� �߰�
void viewDiary(); //  ����� �ϱ� ��ü ȭ�鿡 ��� 

int main(void) {
    int choice = 0; // �ɼǼ���
    char input[32]; // �Է� ����(?)

    while (1) {
        printf("\n=== �ϱ��� ���α׷� ===\n");
        printf("1. �� �ϱ� �ۼ�\n");
        printf("2. �ϱ� �ҷ�����\n");
        printf("3. ����\n");
        printf("����: ");

        // fgets���� �� �� �Է� �ޱ�
        if (!fgets(input, sizeof(input), stdin)) // stdin : �Է��� ���� �� ����ϴ� ��Ʈ������ �⺻������ Ű���� �Է�
            // �ִ� 31�ڱ��� �а� �ι��� ���� 
            break;
        if (sscanf(input, "%d", &choice) != 1) { // 1�� ��ȯ���� ������ ���� 
            printf(">> �߸��� �Է��Դϴ�. ���ڸ� �Է��ϼ���.\n");
            continue;
        }

        if (choice == 1) {
            writeDiary();
        }
        else if (choice == 2) {
            viewDiary();
        }
        else if (choice == 3) {
            printf(">> ���α׷��� �����մϴ�.\n");
            break;
        }
        else {
            printf(">> �ùٸ� ������ �ƴմϴ�.\n");
        }
    }

    return 0;
}

// �� �ϱ� �ۼ� �Լ�
void writeDiary() {
    FILE* fp = fopen("diary.txt", "a"); // append ���� ���� 
    if (!fp) { // ������ ������ 
        perror("���� ���� ����");
        return;
    }

    // ���� ��¥���ð� ���
    time_t t = time(NULL); // ���� �ð� ���� 
    struct tm lt = *localtime(&t); // struct tm�� �����Ͻú��ʸ� ���� 
    fprintf(fp, "\n---- %04d-%02d-%02d %02d:%02d:%02d ----\n", 
        lt.tm_year + 1900, lt.tm_mon + 1, lt.tm_mday,
        lt.tm_hour, lt.tm_min, lt.tm_sec); 

    // �ϱ� ���� �Է�
    printf("�ϱ� ������ �Է��ϼ���. (�����Ϸ��� �� �ٸ� �Է�)\n");
    char line[MAX_LINE];
    while (fgets(line, MAX_LINE, stdin)) {
        if (strcmp(line, "\n") == 0)  // �� ���̸� �Է� ����
            break;
        fprintf(fp, "%s", line);
    }

    fclose(fp);
    printf(">> �ϱⰡ ����Ǿ����ϴ�.\n");
}

// ����� �ϱ� �ҷ����� �Լ�
void viewDiary() {
    FILE* fp = fopen("diary.txt", "r");
    if (!fp) {
        perror("���� ���� ����");
        return;
    }

    printf("\n=== ����� �ϱ� ===\n");
    char line[MAX_LINE];
    while (fgets(line, MAX_LINE, fp)) {
        fputs(line, stdout); // stdout : ��� ��Ʈ�� 
    }
    fclose(fp);
    printf("\n");
}
