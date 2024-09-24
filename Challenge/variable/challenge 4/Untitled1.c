#include <stdio.h>

int main() {
    float c ;

    printf("entre la temperature en c :");
    scanf("%f",&c);
    if(c<0)
        printf("solide");

    if(0<=c<100)
        printf("liquide");

    if(c>=100)
        printf("gaz");

}

