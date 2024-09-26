int main() {
    int choix;
    double annee, mois, jours, heures, minutes, secondes;


    printf("Entrez le nombre d'annees a convertir : ");
    scanf("%lf", &annee);


    printf("\nMenu de conversion :\n");
    printf("1. Convertir en mois\n");
    printf("2. Convertir en jours\n");
    printf("3. Convertir en heures\n");
    printf("4. Convertir en minutes\n");
    printf("5. Convertir en secondes\n");
    printf("Faites un choix : ");
    scanf("%d", &choix);


    switch (choix) {
        case 1:
            mois = annee * 12;
            printf("%.2lf annee(s) est egale à %.2lf mois\n", annee, mois);
            break;
        case 2:
            jours = annee * jours;
            printf("%.2lf annee(s) est egale à %.2lf jours\n", annee, jours);
            break;
        case 3:
            heures = annee * jours * heures;
            printf("%.2lf annee(s) est egale à %.2lf heures\n", annee, heures);
            break;
        case 4:
            minutes = annee * jours * heures * minutes;
            printf("%.2lf annee(s) est egale à %.2lf minutes\n", annee, minutes);
            break;
        case 5:
            secondes = annee * jours * heures * minutes * secondes;
            printf("%.2lf annee(s) est egale a %.2lf secondes\n", annee, secondes);
            break;
        default:
            printf("Choix invalide. Veuillez selectionner une option entre 1 et 5.\n");
            break;

    }
    }
