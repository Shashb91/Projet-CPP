#include "Bibliotheque.h"
#include "Livre.h"

#include <string>
using std::string;
#include <iostream>
using namespace std;


Bibliotheque::Bibliotheque() {
    nom = NULL; adresse = NULL;
    code ++; liste = NULL; nbrLivres = 0;
}
Bibliotheque::Bibliotheque(string Nom, string Adresse) {
    nom = Nom; adresse = Adresse;
    code ++; liste = NULL; nbrLivres = 0;
}

Bibliotheque::Bibliotheque(string Nom, string Adresse, int NbrLivres) {
    nom = Nom; adresse = Adresse;
    code ++; liste = new Livre[NbrLivres]; nbrLivres = NbrLivres;
}



void Bibliotheque::afficheLivres() {
    for (int i = 0; i<nbrLivres; i++) {
        liste[i].affiche();
    }
}

void Bibliotheque::afficheLivres(Type cat) {
    for (int i = 0; i<nbrLivres; i++) {
        if (liste[i].getType() == cat) {
            liste[i].affiche();
        }
    }
}

void Bibliotheque::supprimerLivre(int codeLivre) {
    int ipos = 0;
    for (int i = 0; i < nbrLivres; i++) {
        if (codeLivre == liste[i].get_code()) {ipos = i;}
    }
    for (int i = ipos;i < nbrLivres - 1; i++) {liste[i] = liste[i+1];}
    nbrLivres --;
}

void Bibliotheque::ajoutLivre(Livre livre) {
    Livre* liste_ = new Livre[nbrLivres + 1];
    for (int i = 0; i < nbrLivres; i++) {liste_[i] = liste[i];}
    liste[nbrLivres + 1] = livre;
    nbrLivres ++; liste = liste_;
}

void Bibliotheque::echangeLivre(Bibliotheque biblio, string ISBN) {

}

string Bibliotheque::get_nom() const {
}

void Bibliotheque::set_nom(const string &nom) {
}

string Bibliotheque::get_adresse() const {
}

void Bibliotheque::set_adresse(const string &adresse) {
}

Livre * Bibliotheque::get_liste() const {
}

void Bibliotheque::set_liste(Livre *liste) {
}
