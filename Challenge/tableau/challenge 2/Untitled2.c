
#include <stdio.h>

void main()
{
int t [5];
int i;

   for(i=0;i<5;i++){
    printf("entre la valeur %d: ",i+1);
    scanf("%d",&t[i]);
   }

    printf("Les elements du tableau sont :\n");
    for (int i = 0; i < 5; i++) {
        printf("%d \n", t[i]);
    }



}
