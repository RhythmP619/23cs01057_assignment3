#include <stdio.h>

int main(){
    int x1, y1, x2, y2, x3, y3;
    printf("Enter the first point: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the second point: ");
    scanf("%d %d", &x2, &y2);     
    printf("Enter the third point: ");
    scanf("%d %d", &x3, &y3);

    if (x1*(y2 - y3) - y1*(x2- x3) + x2 * y3 - x3 * y2 == 0){
        printf("The given points lie on a line.\n");
    } else {
        printf("The points do not lie on a line.\n");
    }
}   