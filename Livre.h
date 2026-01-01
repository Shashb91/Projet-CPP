// Header de la classe abstraite Livre

#ifndef PROJET_CPP_LIVRE_H
#define PROJET_CPP_LIVRE_H
#include <string>
using std::string;
#include <iostream>
using namespace std;

class Livre {
public:
    virtual ~Livre() = default;

    enum class Type {
        Null,BD,Recueil,Roman,Theatre,Album
    };

    // Book state
    enum class Etat {
        Libre, Emprunte, Pret, Perdu, Pilon
    };

    // Target audience
    enum class Audience {
        Null,Adulte, Adolescent, Jeunesse, Tout_public
    };

private:
    static int nextCodeLivre;
    int codeLivre;
    string auteur, titre, editeur, ISBN;
    Audience audience;
    Etat etat;

public:
    Livre();
    Livre(string auteur_, string titre_, string editeur_, string ISBN_, Audience audience_);

    virtual Type get_type();
    virtual void affiche();

    int get_codeLivre();
    string get_auteur(); void set_auteur(string auteur_);
    string get_titre(); void set_titre(string titre_);
    string get_editeur(); void set_editeur(string editeur_);
    string get_isbn(); void set_isbn(string isbn_);
    Audience get_audience(); void set_audience(Audience audience_);
    Etat get_etat();void set_etat(Etat etat_);

    string get_audience_string();
    string get_etat_string();
    string get_type_string();
};


#endif //PROJET_CPP_LIVRE_H