#include<stdio.h>

void main(){

    float age;


    printf("entre tant age :");
    scanf("%f",&age);


    if(age<18)
    printf("vous nete pas eligible pour voter");



    if(age>18)
        printf("vous ete eligible pour voter ");


    if(age<=18)
        printf("vous ete eligible pour voter");


}
