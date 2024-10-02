// Online C++ compiler to run C++ program online
#include <iostream>
#include <stdio.h>

int oil, all_km, oil_to_km, through_fee, oneday_fee, oil_cost, all_money;

int main() {
    printf("請輸入一整天的總里程數 :");
    scanf("%d", &all_km);
    printf("請輸入汽油一公升/加侖多少錢 :");
    scanf("%d", &oil);
    printf("請輸入平均一公升/加侖能行駛多少公里數: ");
    scanf("%d", &oil_to_km);
    printf("請輸入一天的停車費: ");
    scanf("%d", &oneday_fee);
    printf("請輸入一天的通行費 (過路費): ");
    scanf("%d", &through_fee);

    oil_cost = (all_km / oil_to_km) * oil;
    all_money = oil_cost + oneday_fee + through_fee;

    printf("%d", all_money);
    return 0;
}