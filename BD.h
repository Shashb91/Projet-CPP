//
// Created by shash on 31/12/2025.
//

#ifndef PROJET_CPP_BD_H
#define PROJET_CPP_BD_H
#include "Livre.h"

class BD : public Livre
{
private:
    string dessinateur;

public:
    BD(); BD(string auteur_, string titre_, string editeur_, string ISBN_, Audience audience_, string dessinateur_);

    Type get_type() override;
    string get_dessinateur(); void set_dessinateur(string dessinateur_);
};


#endif //PROJET_CPP_BD_H