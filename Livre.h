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
public:
    enum class Type {
        Null,BD,Recueil,Roman,Theatre,Album
    };

    // Book state
    enum class Etat {
        Libre, Emprunte, Pret
    };

    // Target audience
    enum class Audience {
        Null,Adulte, Adolescent, Jeunesse, Tout_public
    };

private:
    static int code;
    string auteur;
    string titre;
    string editeur;
    string ISBN;
    Audience audience;
    Etat etat;

public:
    Livre();
    Livre(string auteur_, string titre_, string editeur_, string ISBN_, Audience audience_);

    virtual Type getType();
    void affiche();

    int get_code() const;
    string get_auteur1() const ; void set_auteur(const string &auteur);
    string get_titre() const; void set_titre(const string &titre);
    string get_editeur() const; void set_editeur(const string &editeur);
    string get_isbn() const; void set_isbn(const string &isbn);
};


#endif //PROJET_CPP_LIVRE_H