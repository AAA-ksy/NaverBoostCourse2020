#include <stdio.h>

int main(void){
    int goal = 0;
    float profit = 0;

    printf("Input your goal amount : ");
    scanf("%s", &goal);
    profit = goal * 0.012;
    printf("원금 : %d\n이자 : %.2f\n합계 : %.2f\n", goal, profit, goal+profit);
}