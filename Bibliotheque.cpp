// Code de la classe Bibliothèque

#include "Bibliotheque.h"
#include "Livre.h"
#include <string>
using std::string;
#include <iostream>
using namespace std;
#include <iomanip>
int Bibliotheque::nextCodeBib = 0;

Bibliotheque::Bibliotheque() {
    nom = ""; adresse = "";
    codeBib = ++ nextCodeBib; liste = nullptr; nbrLivres = 0;
}
Bibliotheque::Bibliotheque(string Nom, string Adresse) {
    nom = Nom; adresse = Adresse;
    codeBib = ++ nextCodeBib; liste = nullptr; nbrLivres = 0;
}
Bibliotheque::Bibliotheque(string Nom, string Adresse, int NbrLivres) {
    nom = Nom; adresse = Adresse;
    codeBib = ++ nextCodeBib; liste = new Livre[NbrLivres]; nbrLivres = NbrLivres;
}

Bibliotheque :: ~Bibliotheque(){
    delete[] liste;
}


void Bibliotheque::afficheLivres() {
    if (nbrLivres == 0) {
        cout << "La bibliotheque est vide." << endl;
        return;
    }
    size_t maxCode = 4;   // "CODE"
    size_t maxTitre = 5;  // "TITRE"
    size_t maxAuteur = 6; // "AUTEUR"
    size_t maxAudience = 6; // "PUBLIC"
    size_t maxISBN = 4;   // "ISBN"
    size_t maxEtat = 4;   // "ETAT"

    for (int i = 0; i < nbrLivres; i++) {
        maxCode = max(maxCode, to_string(liste[i].get_codeLivre()).length());
        maxTitre = max(maxTitre, liste[i].get_titre().length());
        maxAuteur = max(maxAuteur, liste[i].get_auteur().length());
        maxAudience = max(maxAudience, liste[i].get_audience_string().length());
        maxISBN = max(maxISBN, liste[i].get_isbn().length());
        maxEtat = max(maxEtat, liste[i].get_etat_string().length());
    }

    cout << left
         << setw(maxCode + 2)     << "CODE"
         << setw(maxTitre + 2)    << "TITRE"
         << setw(maxAuteur + 2)   << "AUTEUR"
         << setw(maxAudience + 2) << "PUBLIC"
         << setw(maxISBN + 2)     << "ISBN"
         << setw(maxEtat + 2)     << "ETAT"
         << endl;
    size_t totalWidth = maxCode + maxTitre + maxAuteur + maxAudience + maxISBN + maxEtat + 12; // +2 par colonne
    cout << string(totalWidth, '=') << endl;

    for (int i = 0; i < nbrLivres; i++) {
        cout << left
             << setw(maxCode + 2)     << liste[i].get_codeLivre()
             << setw(maxTitre + 2)    << liste[i].get_titre()
             << setw(maxAuteur + 2)   << liste[i].get_auteur()
             << setw(maxAudience + 2) << liste[i].get_audience_string()
             << setw(maxISBN + 2)     << liste[i].get_isbn()
             << setw(maxEtat + 2)     << liste[i].get_etat_string()
             << endl;
    }
}

void Bibliotheque::afficheLivres(Livre::Type cat) {
    if (nbrLivres == 0) {
        cout << "La bibliotheque est vide." << endl;
        return;
    }
    size_t maxCode = 4;   // "CODE"
    size_t maxTitre = 5;  // "TITRE"
    size_t maxAuteur = 6; // "AUTEUR"
    size_t maxAudience = 6; // "PUBLIC"
    size_t maxISBN = 4;   // "ISBN"
    size_t maxEtat = 4;   // "ETAT"

    for (int i = 0; i < nbrLivres; i++) {
        if (liste[i].get_type() == cat)
        {
            maxCode = max(maxCode, to_string(liste[i].get_codeLivre()).length());
            maxTitre = max(maxTitre, liste[i].get_titre().length());
            maxAuteur = max(maxAuteur, liste[i].get_auteur().length());
            maxAudience = max(maxAudience, liste[i].get_audience_string().length());
            maxISBN = max(maxISBN, liste[i].get_isbn().length());
            maxEtat = max(maxEtat, liste[i].get_etat_string().length());
        }
    }

    cout << left
         << setw(maxCode + 2)     << "CODE"
         << setw(maxTitre + 2)    << "TITRE"
         << setw(maxAuteur + 2)   << "AUTEUR"
         << setw(maxAudience + 2) << "PUBLIC"
         << setw(maxISBN + 2)     << "ISBN"
         << setw(maxEtat + 2)     << "ETAT"
         << endl;
    size_t largeur = maxCode + maxTitre + maxAuteur + maxAudience + maxISBN + maxEtat + 12;
    cout << string(largeur, '=') << endl;

    for (int i = 0; i < nbrLivres; i++) {
        if (liste[i].get_type() == cat)
        {
            cout << left
                 << setw(maxCode + 2)     << liste[i].get_codeLivre()
                 << setw(maxTitre + 2)    << liste[i].get_titre()
                 << setw(maxAuteur + 2)   << liste[i].get_auteur()
                 << setw(maxAudience + 2) << liste[i].get_audience_string()
                 << setw(maxISBN + 2)     << liste[i].get_isbn()
                 << setw(maxEtat + 2)     << liste[i].get_etat_string()
                 << endl;
        }
    }
}

void Bibliotheque::supprimerLivre(int codeLivre, Livre :: Etat etat) {
    try{
        for (int i = 0; i < nbrLivres; i++) {
            if (codeLivre == liste[i].get_codeLivre()){
                liste[i].set_etat(etat);
                if (etat == Livre :: Etat :: Pret){throw 203;}
                if (etat == Livre :: Etat :: Pilon){throw 204;}
                if (etat == Livre :: Etat :: Perdu){throw 205;}
            }
        }
        throw 404;
    }
    catch (int e){
        if (e == 404){cout << e << " : Livre introuvable" << endl;}
        if (e == 203){cout << e << " : Livre prete a une bibliotheque" << endl;}
        if (e == 204){cout << e << " : Livre envoye au pilon" << endl;}
        if (e == 205){cout << e << " : Livre envoye perdu" << endl;}
    }
}

void Bibliotheque::ajoutLivre(Livre livre) {
    Livre* liste_ = new Livre[nbrLivres + 1];
    for (int i = 0; i < nbrLivres; i++) {
        liste_[i] = liste[i];
    }
    liste_[nbrLivres] = livre;
    nbrLivres++;
    delete[] liste;
    liste = liste_;
}

void Bibliotheque::echangeLivre(Bibliotheque& biblio, string ISBN) {
    bool trouve = false;
    Livre livre;
    for (int i = 0; i < biblio.nbrLivres; i++) {
        if (biblio.liste[i].get_isbn() == ISBN) {
            livre = biblio.liste[i];
            trouve = true;
            break;
        }
    }
    if (!trouve) {
        cout << "404 : Livre introuvable" << endl;
        return;
    }
    this->ajoutLivre(livre);
    biblio.supprimerLivre(livre.get_codeLivre(), Livre :: Etat :: Pret);
}


string Bibliotheque::get_nom() {return nom;}
void Bibliotheque::set_nom(string nom_) { nom = nom_;}

string Bibliotheque::get_adresse() {return adresse;}
void Bibliotheque::set_adresse(string adresse_) {adresse = adresse_;}

Livre * Bibliotheque::get_liste() {return liste;}
void Bibliotheque::set_liste(Livre* liste_) {liste = liste_;}

int Bibliotheque :: get_nbrLivres(){return nbrLivres;}
int Bibliotheque :: get_codeBib(){return codeBib;}