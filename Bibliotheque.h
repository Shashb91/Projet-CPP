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

public:
    Bibliotheque(); Bibliotheque(string Nom, string Adresse);

    void afficheLivres(); void afficheLivres(Type cat);
    void echangeLivre(Bibliotheque biblio, string ISBN);
    void supprimerLivre(int code);
    void achatLivre(Livre livre);

    string get_nom() const ;
    void set_nom(const string &nom);
    string get_adresse() const ;
    void set_adresse(const string &adresse);
    Livre* get_liste() const;
    void set_liste(Livre *liste);
};


#endif //PROJET_CPP_BIBLIOTHEQUE_H