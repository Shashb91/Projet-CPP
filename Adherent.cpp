// Code de la classe Adhérent

#include "Adherent.h"
#include <string>
using std::string;
#include <iostream>
using namespace std;
#include "Bibliotheque.h"
#include "Livre.h"


Adherent::Adherent(){numAdherent++; nom = NULL; prenom = NULL; adresse = NULL; bib = NULL; liste = NULL; maxEmprunt = 0; listeEmprunt = 0;}
Adherent::Adherent(string nom_, string prenom_, string adresse_, Bibliotheque bib_, int maxEmprunt_){
    numAdherent++;
    nom = nom_;
    prenom = prenom_;
    adresse = adresse_;
    bib = bib_;
    maxEmprunt = maxEmprunt_;
    liste = new Livre[maxEmprunt];
    listeEmprunt = 0;
}

void Adherent::empruntLivre(string ISBN){
    if ((listeEmprunt < maxEmprunt){
        for (int i = 0; i < bib.get_; i++){}
    }

}

void Adherent::retourLivre(string ISBN)
{
}
