#include <stdio.h>


int dcount(int x);
int powe(int no, int power);



int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    
    if (n == 1){
        printf("Kaprekar\n");
        return 0;
    }

    int square = n * n;
    int nod = dcount(square);
    

    for (int i = 1; i < nod; i++){
        if ((square / powe(10, i)) + (square % powe(10, i)) == n){
            printf("Kaprekar\n");
            return 0;
        }
    }
    printf("Not Kaprekar\n");
}

int dcount(int x){
    int count = 0;
    while (x){
        count++;
        x /= 10;
    }
    return count;
}

int powe(int no, int power){
    int x = 1;
    for (int i = 0; i < power; i++){
        x *= no;
    }
    return x;
}