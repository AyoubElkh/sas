#include <stdio.h>


typedef struct{

    char nom[30];
    char numero[30];
    char email[30];


    }Contact;

    Contact infocontact[200];
    int count=0;

    void ajouterContact(){

    printf("entre le nom:");
    scanf("%s",infocontact[count].nom);
    printf("entre le numero:");
    scanf("%s",infocontact[count].numero);
    printf("entre le email:");
    scanf("%s",&infocontact[count].email);

    count++;

}

    void modifierContact(){

        char nom[30];
        printf("entre le nouveau nom pour modifier:"),
        scanf("%s",nom);
        for (int i = 0; i < count; i++) {
        if (strcmp(infocontact[i].nom, nom) == 0) {
            printf("Entrez le nouveau numéro de téléphone: ");
            scanf("%s", infocontact[i].numero);
            printf("Entrez la nouvelle adresse e-mail: ");
            scanf("%s", infocontact[i].email);
            printf("Contact modifié avec succès.\n");
            return;
        }
        }
    printf("Contact non trouvé.\n");

}
    void supprimerContact(){
    char nom[30];
    printf("entre le nom de contact que vous voule suprime:");
    scanf("%s",nom);

    for (int i=0; i<count; i++){
        if(strcmp(infocontact[i].nom,nom)==0){
            for(int j=i;j<count-1;j++){
                infocontact[j]=infocontact[j+1];

            }
          count--;
          printf("Contact supprimé avec succès.\n");

        }


        }
    }

    void afficherContacts(){

    if (count == 0) {
        printf("aucun contact à afficher.\n");
    } else {
        for (int i = 0; i < count; i++) {
            printf("nom: %s\n", infocontact[i].nom);
            printf("numero: %s\n", infocontact[i].numero);
            printf("email: %s\n", infocontact[i].email);
        }
    }
}

    void rechercherContact(){
    char nom[30];
        printf("Entrez le nom du contact à rechercher: ");
        scanf("%s", nom);
        for (int i=0;i<count;i++){
            if(strcmp(infocontact[i].nom,nom)==0){
                printf("nom:%s\n",infocontact[i].nom);
                printf("numero:%s\n",infocontact[i].numero);
                printf("email:%s\n",infocontact[i].email);
                return;
            }
        }
    printf("contact non trouve.\n");

}




int main(){

int choix;
    do {
        printf("1. Ajouter un contact\n");
        printf("2. Modifier un contact\n");
        printf("3. Supprimer un contact\n");
        printf("4. Afficher tous les contacts\n");
        printf("5. Rechercher un contact\n");
        printf("6. Quitter\n");
        printf("Entrez votre choix: ");
        scanf("%d", &choix);
        switch (choix) {
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
                printf("Au revoir!\n");
                break;
    }
    } while (choix != 6);
    return 0;


}
