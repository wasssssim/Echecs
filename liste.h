#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "item.h"

typedef struct 
{
    int nombreElements;
    item *premier;
    item *dernier;
} liste;

int comparaisonTableau(int ** board1, int ** board2, int taille); //Compare deux tableaux
item * creerItem(); // Créer un item
void libererItem(item * noeud); // Libérer un item
void remplireItem(item * noeud, int ** tableau, int taille); // Remplir un item
liste * creerListe(); // Créer une liste
void libererListe(liste * l); // Libérer une liste
int nombreElements(liste * l); // Nombre d'éléments dans la liste
item *dansListe(liste * l, int **tableau, int taille); // Recherche d'un item dans la liste
void retirerItem(liste * l, item * noeud); // Retirer un item de la liste
item * retirerPremier(liste * l); // Retirer le premier item de la liste
item * retirerDernier(liste * l); // Retirer le dernier item de la liste    
void ajouterPremier(liste * l, item * noeud); // Ajouter un item en premier dans la liste
void ajouterDernier(liste * l, item * noeud); // Ajouter un item en dernier dans la liste
void afficherListe(liste * l); // Afficher la liste


#endif
