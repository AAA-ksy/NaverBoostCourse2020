#include <stdio.h>
#include <string.h>
int main(void) {
    char str[10];
	int length;
    char *week[] = {"월요일", "화요일", "수요일", "목요일", "금요일", "토요일", "일요일"};
	char *food[] = {"청국장", "된장찌개", "두부김치", "오삼불고기", "소불고기", "미트볼", "김치찌개"};
	int arrNum = sizeof(week) / sizeof(week[0]);
    while(1) {
        printf("요일을 입력하세요: ");
        scanf("%9s\n", str); 
        for(int i = 0; i < arrNum; i++) {
            if (strcmp(str, week[i]) == 0) {
                printf("%s:%s\n", week[i], food[i]);
                return 0;
            }
        }
    }
    return 0;
}