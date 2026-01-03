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
    string nom, prenom, adresse;
    static int nextNumAdherent;
    int numAdherent, maxEmprunt, tailleListeEmprunt;
    Bibliotheque* bib;
    Livre** liste;


public:
    Adherent(string nom_, string prenom_, string adresse_, Bibliotheque& bib_, int maxEmprunt_);
    ~Adherent();

    void empruntLivre(string ISBN); void retourLivre(string ISBN);
    friend std::ostream& operator<<(std::ostream& os, const Adherent& a);

    int get_numAdherent();
    string get_nom(); void set_nom(string nom_);
    string get_prenom(); void set_prenom(string prenom_);
    string get_adresse(); void set_adresse(string adresse);
    int get_maxEmprunt(); void set_maxEmprunt(int maxEmprunt_);
    Bibliotheque* get_bib(); void set_bib(Bibliotheque& bib_);
    Livre** get_liste(); void set_liste(Livre** liste_);
};


#endif //PROJET_CPP_ADHERENT_H