#include<stdio.h>

void main(){

int longueur,largeur,lair,perimetre;


printf("entre longueur:");
scanf("%d",&longueur);
printf("entre largeur:");
scanf("%d",&largeur);

lair=longueur*largeur;
perimetre=2*(longueur+largeur);

printf("la resulta de lair: %d \n",lair);

printf("la resulta de perimetre: %d",perimetre);



}
