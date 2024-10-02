#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{

char nom[30];
char numero[30];
char email[30];

}Contact;

Contact infocontact[200];
int cont=0;

void ajouterContact(){
    if(cont<200){
    printf("entre le nom:");
    scanf("%s",infocontact[cont].nom);
    printf("entre le numero:");
    scanf("%s",infocontact[cont].numero);
    printf("entre le email:");
    scanf("%s",infocontact[cont].email);
    cont++;
    }
    else{
        printf("est plein");
    }
}

void modifierContact(){
    char nom[30];
    printf("entre le nom du contact pour modifier:");
    scanf("%s",nom);
    for (int i=0;i<cont;i++){
        if(strcmp(infocontact[i].nom,nom)==0){
            printf("entre le nouvelle nom:");
            scanf("%s",infocontact[i].nom);
            printf("entre le nouvelle numero:");
            scanf("%s",infocontact[i].numero);
            printf("entre le nouvelle email:");
            scanf("%s",infocontact[i].email);
        }

            printf("et modifier avec succee");

    }
}


void supprimerContact(){
    int nom[30];
    printf("entre le contact que vous vouler suprimer:");
    scanf("%s",nom);
    for (int i=0;i<cont;i++){
        if(strcmp(infocontact[i].nom,nom)){
            for (int j=i;j<cont-1;j++){
                infocontact[j]=infocontact[j+1];

            }

        }cont--;
        printf("et supprimer  avec succee");
        break;
    printf("n'est pas supprimer");

  }
}


void afficherContacts(){
    if (cont==0){
        printf("il y a aucune contact");
    }
    else {
        for(int i=0;i<cont;i++){
            printf("nom:%s\n",infocontact[i].nom);
            printf("numero:%s\n",infocontact[i].numero);
            printf("email:%s\n",infocontact[i].email);
        }
    }
}


void rechercherContact(){
    char nom[30];
    printf("entre le nom que vous vouler recherche:");
    scanf("%s",nom);
    for (int i=0;i<cont;i++){
        if(strcmp(infocontact[i].nom,nom)==0){
            printf("nom:%s\n",infocontact[i].nom);
            printf("numero:%s\n",infocontact[i].numero);
            printf("email:%s\n",infocontact[i].email);
            }
        }
        printf("aucun resulta");
    }



int main(){
    int choix;
        do {
        printf("1. ajouter un contact\n");
        printf("2. modifier un contact\n");
        printf("3. supprimer un contact\n");
        printf("4. affichier tous les contacts\n");
        printf("5. rechercher un contact\n");
        printf("6. quitte \n");
        printf("entre votre choix :");
        scanf("%d",&choix);
        switch (choix){
        case 1:
            ajouterContact();
            break;
        case 2:
            modifierContact();
            break;
        case 3:
            supprimerContact();
            break;
        case 4:
            afficherContacts();
            break;
        case 5:
            rechercherContact();
            break;
        case 6:
            printf("au revoir\n");
            break;
        default:
            printf("aucune choix\n");
        }
    }while (choix != 6);
    return 0;
}
