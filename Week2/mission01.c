#include <stdio.h>

int main(void){
    int stock_watermelon = 5;   //수박 재고량
    int order_watermelon = 3;   //수박 주문량
    int price = 10000;          //수박 가격
    printf("주문건수 : %d개\n", order_watermelon);
    printf("기존 재고량 : %d개\n", stock_watermelon);
    printf("남은 재고량 : %d개\n", stock_watermelon-order_watermelon);
    printf("매출액(부가세포함) : %.2f원\n", order_watermelon*price*1.1);
}