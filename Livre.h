//
// Created by shash on 24/12/2025.
//

#ifndef PROJET_CPP_LIVRE_H
#define PROJET_CPP_LIVRE_H
#include <string>
using std::string;
#include <iostream>
using namespace std;


class Livre {
private:
    static int code;
    string auteur;
    string titre;
    string editeur;
    string ISBN;
    Audience Audience;
    Etat etat;

public:
    enum class Type {
        BD,Recueil,Roman,Theatre,Album
    };

    // Book state
    enum class Etat {
        Libre, Emprunte, Pret
    };

    // Target audience
    enum class Audience {
        Adulte, Adolescent, Jeunesse, Tout_public
    };


    Livre();
    Livre(string auteur, string titre, string editeur, string ISBN, Audience audience);

    Type getType();
    void affiche();

    int get_code() const;
    string get_auteur1() const ; void set_auteur(const string &auteur);
    string get_titre() const; void set_titre(const string &titre);
    string get_editeur() const; void set_editeur(const string &editeur);
    string get_isbn() const; void set_isbn(const string &isbn);
};


#endif //PROJET_CPP_LIVRE_H