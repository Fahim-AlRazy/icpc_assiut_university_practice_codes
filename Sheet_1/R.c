#include<stdio.h>
int main(void){
    long long int N;
    scanf("%lld", &N);
    long long int years, months, days;
    years = N / 365;
    months = (N % 365) / 30;
    days = (N % 365) % 30;
    printf("%lld years\n%lld months\n%lld days\n", years, months, days);
    return 0;
}