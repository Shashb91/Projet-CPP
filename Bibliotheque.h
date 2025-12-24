//
// Created by shash on 24/12/2025.
//

#ifndef PROJET_CPP_BIBLIOTHEQUE_H
#define PROJET_CPP_BIBLIOTHEQUE_H
#include "Livre.h"
#include <string>
using std::string;
#include <iostream>

class Bibliotheque {
private:
    string nom;
    string adresse;
    static int  code;
    Livre*  liste;
    int nbrLivres;

public:
    Bibliotheque(); Bibliotheque(string Nom, string Adresse);Bibliotheque(string Nom, string Adresse, int NbrLivres);

    void afficheLivres(); void afficheLivres(Type cat);
    void supprimerLivre(int code);
    void ajoutLivre(Livre livre);
    void echangeLivre(Bibliotheque biblio, string ISBN);

    string get_nom() const ;
    void set_nom(const string &nom);
    string get_adresse() const ;
    void set_adresse(const string &adresse);
    Livre* get_liste() const;
    void set_liste(Livre *liste);
};


#endif //PROJET_CPP_BIBLIOTHEQUE_H