#include <stdio.h>
#include <string.h>

int main(void){
    char food[7][20] = {"청국장", "비빔밥", "된장찌개", "칼국수", "냉면", "소불고기", "오삼불고기"};
    char day[7][10]={"월요일", "화요일", "수요일", "목요일", "금요일", "토요일", "일요일"};
    char input_day[10] = "0";   //입력받을 값이므로 일단 아무 값으로 초기화

    printf("Input day : ");
    gets(input_day);
    printf("출력문 : %s\n", input_day);
    
    for (int i=0; i<7; ++i){
        if( strcmp(day[i], input_day) == 0) //입력받은 요일과 일치하는 요일 찾기
            {
                printf("%s : %s\n", day[i], food[i]);   //입력받은 요일과 그 요일에 해당하는 음식 출력
            }
    }
}