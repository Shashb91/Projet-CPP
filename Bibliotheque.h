//Header de la classe Bibliothèque

#ifndef PROJET_CPP_BIBLIOTHEQUE_H
#define PROJET_CPP_BIBLIOTHEQUE_H
#include "Livre.h"
#include <string>
using std::string;
#include <iostream>

class Bibliotheque {
private:
    string nom, adresse;
    static int  nextCodeBib;
    int codeBib, nbrLivres;
    Livre*  liste;

public:
    Bibliotheque(); Bibliotheque(string Nom, string Adresse);Bibliotheque(string Nom, string Adresse, int NbrLivres);
    ~Bibliotheque();

    void afficheLivres(); void afficheLivres(Livre :: Type cat);
    void supprimerLivre(int code);
    void ajoutLivre(Livre livre);
    void echangeLivre(Bibliotheque& biblio, string ISBN);

    string get_nom(); void set_nom(string nom_);
    string get_adresse(); void set_adresse(string adresse_);
    Livre* get_liste(); void set_liste(Livre* liste_);
    int get_nbrLivres();
    int get_codeBib();
};


#endif //PROJET_CPP_BIBLIOTHEQUE_H