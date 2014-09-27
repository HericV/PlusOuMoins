//
//  Fonctions.c
//  PlusOuMoins
//
//  Created by Heric Vignola on 27/09/2014.
//  Copyright (c) 2014 Heric Vignola. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// On laisse le choix entre un mode 1 ou 2 joueurs.
int joueurs(){
    int nombreJoueurs = 0;
    int choixNombreJoueurs = 0;
    while (nombreJoueurs != 1 && nombreJoueurs != 2) {
        printf("Combien de joueurs vont jouer ?\n");
        printf("1. 1 joueur\n");
        printf("2. 2 Joueurs\n");
        printf("Votre réponse -> ");
        scanf("%d", &choixNombreJoueurs);
        
        switch (choixNombreJoueurs) {
            case 1:
                nombreJoueurs = 1;
                printf("\n\n\n");
                break;
            case 2:
                nombreJoueurs = 2;
                printf("\n\n\n");
                break;
            default:
                printf("Réponse non valide\n\n");
                break;
        }
    }
    
    return nombreJoueurs;
}

//choisir le nombre mystere en mode un joueurs;
int nombreUnJoueur(){
    
    
    
    //Selection de la difficulté
    int MAX = 0;
    int difficulte = 0;
    while (difficulte != 1 && difficulte != 2 && difficulte != 3) {
        printf("En quel difficulté voulez-vous jouer?\n");
        printf("1. Facile\n");
        printf("2. Moyen\n");
        printf("3. Difficile\n");
        printf("Votre réponse -> ");
        scanf("%d", &difficulte);
        
        switch (difficulte) {
            case 1:
                MAX = 100;
                printf("\n\n");
                break;
            case 2:
                MAX = 1000;
                printf("\n\n");
                break;
            case 3:
                MAX = 10000;
                printf("\n\n");
                break;
            default:
                printf("Cette reponse n'est pas valide.\n\n");
                break;
        }
        
    }
    
    
    
    // Génération du nombre aléatoire
    int nombreMystere = 0;
    const int MIN = 1;
    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
    
    
    
    return nombreMystere;
}

//choisir le nombre mystere en mode deux joueurs.
int nombreDeuxJoueurs(){
    int nombreMystere = 0;
    printf("Joueur 1 quel nombre choisissez vous?\n");
    printf("nombre mystère ->");
    scanf("%d", &nombreMystere);
    printf("\n\n\n\n\n");
    return nombreMystere;
}

