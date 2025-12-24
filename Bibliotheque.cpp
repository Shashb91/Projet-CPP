//
// Created by shash on 24/12/2025.
//

#include "Bibliotheque.h"
#include "Livre.h"
#include <string>
using std::string;
#include <iostream>


Bibliotheque::Bibliotheque() {
    nom = NULL; adresse = NULL;
    code ++; liste = NULL;
}

Bibliotheque::Bibliotheque(string Nom, string Adresse) {
    nom = Nom; adresse = Adresse;
    code ++; liste = NULL;
}



void Bibliotheque::afficheLivres() {
}

void Bibliotheque::afficheLivres(Type cat) {
}

void Bibliotheque::echangeLivre(Bibliotheque biblio, string ISBN) {
}

void Bibliotheque::supprimerLivre(int codeLivre) {
}

void Bibliotheque::achatLivre(Livre livre) {
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
