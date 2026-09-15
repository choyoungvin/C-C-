#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
    int score;
    char grades;

    printf("결과 점수를 입력하세요(0-100): ");
    scanf("%d", &score);

    switch (score / 10) {
        case 10:
        case 9:
            grades = 'A';
            break;
        case 8:
            grades = 'B';
            break;
        case 7:
            grades = 'C';
            break;
        case 6:
            grades = 'D';
            break;
        default:
            grades = 'F';
            break;
    }
    
    printf("학점은 %c \n", grades);
    return 0;
}