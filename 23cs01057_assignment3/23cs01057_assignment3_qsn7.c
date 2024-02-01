#include <stdio.h>

int main(){
    int m, n, k;
    printf("Enter the Marks obtained: ");
    scanf("%d", &m);
    printf("Enter the number of classes attended: ");
    scanf("%d", &n);
    printf("Enter the Total number of classes conducted: ");
    scanf("%d", &k);

    int w = n * k;
    int t = m * w;

    if (t >= 90){
        printf("Grade is EX\n");
    } else if (t >= 80){
        printf("Grade is A\n");
    } else if (t >= 70){
        printf("Grade is B\n");
    } else if (t >= 60){
        printf("Grade is C\n");
    } else if (t >= 50){
        printf("Grade is D\n");
    } else if (t >= 40){
        printf("Grade is P\n");
    } else {
        printf("Grade is F. :(\n");
    }
}