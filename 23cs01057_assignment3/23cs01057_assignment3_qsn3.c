#include <stdio.h>

int main(){
    printf("Enter the three sides: ");
    int a, b, c; scanf("%d %d %d", &a, &b, &c);
    int sum = a + b + c;
    if ((sum - a > a) && (sum - b > b) && (sum - c > c)){
        printf("Triangle is valid.\n");
    } else {
        printf("Triangle is not valid.\n");
    }
}   