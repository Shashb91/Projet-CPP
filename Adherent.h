// Header de la classe Adhérent

#ifndef PROJET_CPP_ADHERENT_H
#define PROJET_CPP_ADHERENT_H
#include <string>
using std::string;
#include <iostream>
using namespace std;
#include "Bibliotheque.h"
#include "Livre.h"


class Adherent {
private:
    string nom;
    string prenom;
    string adresse;
    static int numAdherent;
    Bibliotheque bib;
    Livre* liste;
    int maxEmprunt;
    int listeEmprunt;

public:
    Adherent(); Adherent(string nom_, string prenom_, string adresse_, Bibliotheque bib_, int maxEmprunt_);

    void empruntLivre(string ISBN); void retourLivre(string ISBN);
};


#endif //PROJET_CPP_ADHERENT_H