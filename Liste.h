// Header de la liste chainee

#ifndef PROJET_CPP_LISTE_H
#define PROJET_CPP_LISTE_H
#include <iostream>
using namespace std;

template <typename T>
struct Noeud{
    T donnees;
    Noeud <T>* suivant;
};

template <typename T>
class Liste{
private:
    Noeud <T>* entete;
    int compteur;
    Noeud <T>* CreerNoeud(T& valeur); //priver pour ne pas creer des noeuds partout => pblm quand il faut les supprimer !

public:
    Liste();~Liste();

    void inserer(int position, T& valeur);
    void supprimer(int position);
    T& get_Noeud(int position);
    void afficher();
    int taille();
};


#endif //PROJET_CPP_LISTE_H