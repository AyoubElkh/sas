#include <stdio.h>
#include <string.h>


typedef struct{
    int annees;
    int jour;
    int mois;
}Date;


typedef struct {
    char nom[50];
    char prenom[50];
    char telephone[50];
    int age;
    char statut[50];
    char reference[50];
    Date date;

} Reservation;


Reservation contacts[100];
int Count = 11;

void ajouterReservation() {

        printf("Nom: ");
        scanf("%s", contacts[Count].nom);
        printf("Prenom: ");
        scanf("%s", contacts[Count].prenom);
        printf("Telephone: ");
        scanf("%s", contacts[Count].telephone);
        printf("Age: ");
        scanf("%d", &contacts[Count].age);
        printf("Statut (valide, reporte, annule, traite): ");
        scanf("%s", contacts[Count].statut);
        printf("Reference unique: ");
        scanf("%s", contacts[Count].reference);
        printf("Date de reservation (JJ/MM/AAAA): ");
        scanf("%d %d %d",&contacts[Count].date.jour,&contacts[Count].date.mois,&contacts[Count].date.annees);
        Count++;

    }

void ModifierReservation(){
    char reference[50];

    printf("entre le reference unique:");
    scanf("%s",reference);
    for (int i = 0; i < Count; i++){
        if(strcmp(contacts[i].reference,reference)==0){
            printf("entre le nom:");
            scanf("%s",contacts[i].nom);
            printf("entre le prenom:");
            scanf("%s",contacts[i].prenom);
            printf("entre le telephone:");
            scanf("%s",contacts[i].telephone);
            printf("entre l'age:");
            scanf("%d",&contacts[i].age);
            printf("entre le date de reservation:");
            scanf("%d %d %d",&contacts[i].date.jour,&contacts[i].date.mois,&contacts[i].date.annees);
            printf("entre le statut:");
            scanf("%s",contacts[i].statut);
            return;
        }
    }

    printf("la modification n'est reussir!");

}


void supprimerReservation(){
    char reference[50];

            printf("entre le reference unique:");
            scanf("%s",reference);
    for (int i=0; i<Count; i++){
        if(strcmp(contacts[i].reference,reference)==0){
            for(int j=i;j<Count-1;j++){
                contacts[j]=contacts[j+1];

            }
          Count--;
          printf("Contact supprime avec succes.\n");
          break;

        }


        }
}


void afficherReservation(){
    if (Count==0){
        printf("il y a aucune contact");
    }
    else {
        for(int i=0; i<Count; i++){
            printf("Reference: %s\n Nom: %s\n Prenom: %s\n Telephone: %s\n Age: %d\n Status: %s\n Date de reservation: %d/%d/%d\n",
               contacts[i].reference,contacts[i].nom,contacts[i].prenom,contacts[i].telephone,contacts[i].age,
               contacts[i].statut,contacts[i].date.jour,contacts[i].date.mois,contacts[i].date.annees);
        };
    }
}



void rechercheReservation(char references[50]){
    Reservation reference;
    for (int i=0;i<Count;i++){
        if (strcmp(contacts[i].reference,references)==0){
            printf("Reference: %s\n Nom: %s\n Prenom: %s\n Telephone: %s\n Age: %d\n Status: %s\n Date de reservation: %d/%d/%d\n",
               contacts[i].reference,contacts[i].nom,contacts[i].prenom,contacts[i].telephone,contacts[i].age,
               contacts[i].statut,contacts[i].date.jour,contacts[i].date.mois,contacts[i].date.annees);
               break;
        }

    }

    printf("resultat introuvable");


}



int main() {


    strcpy(contacts[0].reference,"opo123");
    strcpy(contacts[0].nom, "ayoub");
    strcpy(contacts[0].prenom, "elkhemsij");
    strcpy(contacts[0].telephone, "0615428574");
    contacts[0].age = 27;
    contacts[0].date.jour = 10;
    contacts[0].date.mois = 10;
    contacts[0].date.annees = 2024;
    strcpy(contacts[0].statut, "valide");

    strcpy(contacts[1].reference,"opo124");
    strcpy(contacts[1].nom, "Imane");
    strcpy(contacts[1].prenom, "Ahmed");
    strcpy(contacts[1].telephone, "0612345678");
    contacts[1].age = 16;
    contacts[1].date.jour = 10;
    contacts[1].date.mois = 12;
    contacts[1].date.annees = 2024;
    strcpy(contacts[1].statut, "valide");

    strcpy(contacts[2].reference,"opo125");
    strcpy(contacts[2].nom, "Imane");
    strcpy(contacts[2].prenom, "Ahmed");
    strcpy(contacts[2].telephone, "077894074");
    contacts[2].age = 27;
    contacts[2].date.jour = 10;
    contacts[2].date.mois = 11;
    contacts[2].date.annees = 2024;
    strcpy(contacts[2].statut, "valide");

    strcpy(contacts[3].reference,"opo126");
    strcpy(contacts[3].nom, "Imane");
    strcpy(contacts[3].prenom, "Ahmed");
    strcpy(contacts[3].telephone, "063026925");
    contacts[3].age = 38;
    contacts[3].date.jour = 9;
    contacts[3].date.mois = 10;
    contacts[3].date.annees = 2024;
    strcpy(contacts[3].statut, "valide");

    strcpy(contacts[4].reference,"opo127");
    strcpy(contacts[4].nom, "Imane");
    strcpy(contacts[4].prenom, "Ahmed");
    strcpy(contacts[4].telephone, "0646975608");
    contacts[4].age = 49;
    contacts[4].date.jour = 1;
    contacts[4].date.mois = 1;
    contacts[4].date.annees = 2025;
    strcpy(contacts[4].statut, "valide");

    strcpy(contacts[5].reference,"opo128");
    strcpy(contacts[5].nom, "Imane");
    strcpy(contacts[5].prenom, "Ahmed");
    strcpy(contacts[5].telephone, "0656933815");
    contacts[5].age = 52;
    contacts[5].date.jour = 9;
    contacts[5].date.mois = 8;
    contacts[5].date.annees = 2024;
    strcpy(contacts[5].statut, "annule");

    strcpy(contacts[6].reference,"opo129");
    strcpy(contacts[6].nom, "Imane");
    strcpy(contacts[6].prenom, "Ahmed");
    strcpy(contacts[6].telephone, "0709297999");
    contacts[6].age = 24;
    contacts[6].date.jour = 7;
    contacts[6].date.mois = 5;
    contacts[6].date.annees = 2024;
    strcpy(contacts[6].statut, "reporte");

    strcpy(contacts[7].reference,"opo130");
    strcpy(contacts[7].nom, "Imane");
    strcpy(contacts[7].prenom, "Ahmed");
    strcpy(contacts[7].telephone, "0699011860");
    contacts[7].age = 62;
    contacts[7].date.jour = 6;
    contacts[7].date.mois = 4;
    contacts[7].date.annees = 2025;
    strcpy(contacts[7].statut, "traite");

    strcpy(contacts[8].reference,"opo131");
    strcpy(contacts[8].nom, "Imane");
    strcpy(contacts[8].prenom, "Ahmed");
    strcpy(contacts[8].telephone, "074058977");
    contacts[8].age = 18;
    contacts[8].date.jour = 2;
    contacts[8].date.mois = 3;
    contacts[8].date.annees = 2024;
    strcpy(contacts[8].statut, "annule");

    strcpy(contacts[8].reference,"opo132");
    strcpy(contacts[8].nom, "Imane");
    strcpy(contacts[8].prenom, "Ahmed");
    strcpy(contacts[8].telephone, "0768195507");
    contacts[8].age = 22;
    contacts[8].date.jour = 6;
    contacts[8].date.mois = 1;
    contacts[8].date.annees = 2024;
    strcpy(contacts[8].statut, "annule");

    strcpy(contacts[9].reference,"opo133");
    strcpy(contacts[9].nom, "Imane");
    strcpy(contacts[9].prenom, "Ahmed");
    strcpy(contacts[9].telephone, "0679944644");
    contacts[9].age = 20;
    contacts[9].date.jour = 17;
    contacts[9].date.mois = 11;
    contacts[9].date.annees = 2024;
    strcpy(contacts[9].statut, "valide");

    strcpy(contacts[10].reference,"opo134");
    strcpy(contacts[10].nom, "Imane");
    strcpy(contacts[10].prenom, "Ahmed");
    strcpy(contacts[10].telephone, "0729752697");
    contacts[10].age = 22;
    contacts[10].date.jour = 1;
    contacts[10].date.mois = 9;
    contacts[10].date.annees = 2024;
    strcpy(contacts[10].statut, "annule");

    int choix;
    char references[50];
    do{

    do {
        printf("Menu:\n");
        printf("1. Ajouter une reservation\n");
        printf("2. Afficher les reservations\n");
        printf("3. Modifier les resetvations\n");
        printf("4. Supprimer les resetvations\n");
        printf("5. Recherche une reservation\n");
        printf("6. Quitter\n");
        printf("Choix: ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                ajouterReservation();
                break;
            case 2:
                afficherReservation();
                break;
            case 3:
                ModifierReservation();
                break;
            case 4:
                supprimerReservation();
                break;
            case 5:
                printf("entre le references:");
                scanf("%s",references);
                rechercheReservation(references);
                break;
            case 6:
                printf("Au revoir!\n");
                break;
            default:
                printf("Choix invalide.\n");
        }
    } while (choix != 6);

}while (choix !=0);
return 0;
}
