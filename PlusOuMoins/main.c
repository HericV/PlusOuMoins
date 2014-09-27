//
//  main.c
//  PlusOuMoins
//
//  Created by Heric Vignola on 25/09/2014.
//  Copyright (c) 2014 Heric Vignola. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Fonctions.h"


int main ( int argc, char** argv )
{
    
    
    
    // Om laisse le choix entre un mode 1 ou 2 joueurs.
    int nombreJoueurs = joueurs();
    
    
    
    // On lance la boucle tant que la variable continuerPartie ne passe pas a 0
    int continuerPartie = 1;
    while (continuerPartie != 0) {
        
        continuerPartie = 1;    // on réinitialise la variable continuer partie a chaque nouvelle boucle.
        
        int nombreMystere = 0, nombreEntre = 0, nombreCoups = 0;
        
        //On choisis le nombre mystere en fonction du nombre de joueurs.
        if (nombreJoueurs == 1) {
            nombreMystere = nombreUnJoueur();
        } else {
            nombreMystere = nombreDeuxJoueurs();
        }
        
        
        
        // La boucle du programme. Elle se répète tant que l'utilisateur n'a pas trouvé le nombre mystère
        do
        {
            // On ajoute un coup a chaque passage dans la boucle
            nombreCoups++;
            // On demande le nombre
            printf("Quel est le nombre mystere?\n");
            printf("Nombre mystere -> ");
            scanf("%d", &nombreEntre);
            
            // On compare le nombre entré avec le nombre mystère
            
            if (nombreMystere > nombreEntre)
                printf("C'est plus !\n\n");
            else if (nombreMystere < nombreEntre)
                printf("C'est moins !\n\n");
            else
                printf ("Bravo, vous avez trouve le nombre mystere en %d coups !!!\n\n", nombreCoups);
        } while (nombreEntre != nombreMystere);
        
        
        
        // On demande au joueur s'il veut faire une autre partie
        int reponseJoueurContinuerPartie = 0;
        while (reponseJoueurContinuerPartie != 1 && reponseJoueurContinuerPartie != 2) {
            printf("Voulez vous faire une autre partie?\n");
            printf("1. oui\n");
            printf("2. non\n");
            printf("Votre réponse -> ");
    
            scanf("%d",&reponseJoueurContinuerPartie);
    
            switch (reponseJoueurContinuerPartie) {
                case 1:
                    printf("\n\n");
                    break;
                case 2:
                    continuerPartie = 0;
                    break;
                default:
                    printf("Cette reponse n'est pas valide\n\n");
                    break;
                }
            }
        
    }
    
    
    
}