#include <stdio.h>

int main(){

    char cracter;

    printf("entrez un cracter: ");

    scanf("%c", &cracter);

    switch (cracter){

        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':

            printf("%c est une voyelle. \n",cracter);
            break;
        default:
            printf("%c nest pas une voyelle. \n",cracter);
            break;




    }



}
