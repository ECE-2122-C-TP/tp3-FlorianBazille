//
// Created by Florian on 20/09/2021.
//

#include "mesFonctions.h"
#include <stdio.h>

int Exercice1(void)
{
    int a = 0, b = 0; /* initialisation des valeurs */
    printf("Saisir deux nombres entiers : \n");
    scanf("%d", &a);
    scanf(" %d", &b);
    if(a > b)
    {
        printf("%d\n",a);
    }
    else
    {
        printf("%d\n",b);
    }
    return 0;

}

int Exercice2()
{
    int lon = 0, lar = 0; /* initialisation des valeurs */
    printf("Renseigner la longueur, puis, la largeur :\n");
    scanf("%d",&lon);
    scanf("% d",&lar);
    printf("Le périmètre du rectangle est :");
    printf("%d", lon+lar);
    printf("\nL'aire du rectangle est :%d");
    printf("%d", lon*lar);
    return 0;
}

int Exercice3()
{
    int int1 = 0; /* initialisation des valeurs */
    scanf("%d", &int1);
    if (int1%3 == 0) /* on utilise la division euclidienne pour vérifier que le reste et nul, et donc que l'entier est effectivement multiple de 3*/
    {
        printf("Cet entier est un multiple de trois\n");
    }
    if (int1 >= 10) /* on vérifie que l'entier saisi est supérieur ou égal à 10 */
    {
        printf("Cet entier est superieur ou egale à 10\n");
    }
    return 0;
}

int Exercice4()
{
    int age = 0, statut = 0, tarif = 9; /* initialisation des valeurs */
    printf("Saisir l'age:\n");
    scanf("%d",&age);
    printf(" statut etudiant ? 0 ou 1:\n ");
    scanf("%d",&statut);
    if (age<=12)
    {
        tarif = 4;
    }
    if (age>12 && age<=17 || statut == 1 && age<27) /* si l'âge est compris dans ]12;17] ou s'il s'agit d'un étudiant de moins de 27 ans */
    {
        tarif = 6;
    }
    if (age>=65)
    {
        tarif = 6;
    }
    printf("Le tarif du billet est :\n %d", tarif);
    return 0;
}

char Exercice5()
{
    int choixUtilisateur = 0; /* initialisation des valeurs */
    printf("Indiquer le numero de la boisson souhaitee:\n");
    scanf("%d",&choixUtilisateur);
    if ( (choixUtilisateur != 1) && (choixUtilisateur != 2) && (choixUtilisateur != 3) && (choixUtilisateur != 10) && (choixUtilisateur != 11) )
    /* On vérifie que le numéro choisis est bien attribué */
    {
        printf("le numero indique n'est pas attribue");
    }
    else
    {
        switch (choixUtilisateur) /* le 'switch' permet de sélectionner l'option choisie par l'utilisateur */
        {
            case 1:
            {
                printf("Boisson froide 1");
                break;
            }
            case 2:
            {
                printf("Boisson froide 2");
                break;
            }
            case 3:
            {
                printf("Boisson froide 3");
                break;
            }
            case 10:
            {
                printf("Boisson chaude 1");
                break;
            }
            case 11:
            {
                printf("Boisson chaude 2");
                break;
            }
        }
    }
    return 0;
}

int Exercice6()
{
    float note1 = 0, note2 = 0, note3 = 0; /* initialisation des valeurs */
    printf("Saisir trois notes :\n");
    scanf("%f",&note1);
    while ( (note1 < 0) && (note1 > 20) ) /* tant que la note saisie est comprise dans [0;20] */
    {
        printf("Erreur, saisissez une note valide :");
        scanf("%f",&note1);
    }
    scanf("%f",&note2);
    while ( (note2 < 0) && (note2 > 20) ) /* tant que la note saisie est comprise dans [0;20] */
    {
        printf("Erreur, saisissez une note valide :");
        scanf("%f",&note3);
    }
    scanf("%f",&note3);
    while ( (note3 < 0) && (note3 > 20) ) /* tant que la note saisie est comprise dans [0;20] */
    {
        printf("Erreur, saisissez une note valide :");
        scanf("%f",&note3);
    }
    printf("La moyenne est egale a :\n %f",(note1 + note2 + note3)/3);
    return 0;
}

int Exercice7()
{
    int nombreRenseigne = 0, choix = 1, totalEleves = 0; /* initialisation des valeurs */
    while (choix != 0)
    {
        printf("Renseigner le nombre d'eleves de la classe ouverte :\n", &nombreRenseigne);
        scanf("%i",&nombreRenseigne);
        totalEleves = totalEleves + nombreRenseigne; /* au nombre d'élèves déjà présents, on ajoute celui de la classe déclarée dans la boucle précédente */
        printf("Creer une nouvelle classe ? \n O (non) ou 1 (oui)\n"); /* en créant une nouvelle classe, on entrera la boucle de nouveau */
        scanf("%i",&choix);
    }
    printf("Le nombre total d'eleves est : \n %i",totalEleves);
    return 0;
}
int Exercice8()
{
    int nombreSaisi = 0; /* initialisation des valeurs */
    printf("Saisir un nombre entier :\n");
    scanf("%i",&nombreSaisi);
    while ( nombreSaisi%7 != 0 && nombreSaisi%2 !=0 )
        /* si le reste issue de la division euclidienne entre le nombre saisi et 7 est différent de 0 alors ce nombre n'est pas un multiple de 7
         * si le reste issue de la division euclidienne entre le nombre saisi et 2 est différent de 0 alors ce nombre n'est pas un multiple de 2 */

    {
        printf("Saisir un nombre entier :\n");
        scanf("%i",&nombreSaisi);
    }
    return 0;
}

int Exercice9()
{
    int nombrePierres = 0, pierresUtilisees = 1, compteur = 1; /* initialisation des valeurs */
    printf("Indiquer le nombre de pierres disponibles : \n");
    scanf("%i",&nombrePierres);
    while ( nombrePierres >= pierresUtilisees * pierresUtilisees + pierresUtilisees )
    /* tant que le nombre de pierres disponibles est supérieur au nombre de pierres nécessaire à la création d'une pyramide à compteur-étages */
    {
        pierresUtilisees = pierresUtilisees * pierresUtilisees + pierresUtilisees; /* calcul du nombre de pierres nécessaire à la réalisation de compteur-étages */
        compteur = compteur +1; /* on incrémente le nombre d'étage réalisable */
    }
    printf("Les habitants peuvent construires une pyramide du nombre d'etages suivant : \n %i", compteur);
    return 0;
}
int Exercice10()
{
    float nombresSaisi = 0, compteur = 0, total = 0; /* initialisation des valeurs */
    while ( nombresSaisi >= 0 ) /* tant que le nombre qui sera saisi est positif */
    {
        total = total + nombresSaisi; /* à chaque tour de boucle, on ajoute au total la valeur saisie par l'utilisateur */
        compteur += 1;
        printf("Entrer un nombre entier positif pour continuer, sinon entrer un nombre negatif : \n");
        scanf("%f",&nombresSaisi);
    }
    if (compteur > 0)
    {
        printf("La moyenne des nombres entiers positifs est :\n %f", total/(compteur-1));
    }
    else /* sécurité : si l'utilisateur a directement entré un nombre entier négatif */
    {
        printf("Erreur");
    }
    return 0;
}