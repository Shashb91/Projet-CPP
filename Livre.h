//
// Created by shash on 24/12/2025.
//

#ifndef PROJET_CPP_LIVRE_H
#define PROJET_CPP_LIVRE_H
#include <string>
using std::string;
#include <iostream>


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
    Livre(); Livre(string auteur, string titre, string editeur, string ISBN, Audience audience);

    Type getType();


};


#endif //PROJET_CPP_LIVRE_H