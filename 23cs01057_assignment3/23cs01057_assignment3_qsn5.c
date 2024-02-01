#include <stdio.h>

int main(){
    printf("Enter the number of days: ");
    int fine;
    int days; scanf("%d", &days);
    if (days > 30){
        printf("Membership cancelled.\n");
    } else if (days > 10){
        printf("Fine: 5 rupees\n");
    } else if (days > 5){
        printf("Fine: 2 rupees\n");
    } else if (days > 0){
        printf("Fine: 1 rupee\n");
    }
}