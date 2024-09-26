#include <stdio.h>

int main(){

    float a;
    float b;
    float c;
    float delta;

    printf("la valeur de a :" );
    scanf("%f",&a);
    printf("la valeur de b :" );
    scanf("%f",&b);
    printf("la valeur de c :" );
    scanf("%f",&c);

    delta=pow(b,2)-(4*a*c);

    if(delta==0){
        printf("la resulta est %f", -b/(2*a));
    }
    if(delta>0){
        printf("il existe deux resultat \n solution1=%f\n solution2=%f",(-b-sqrt(delta))/(2*a),(-b+sqrt(delta))/(2*a));

    }
    if(delta<0){
        printf(" aucun solutions");
    }
}
