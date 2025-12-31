//
// Created by shash on 31/12/2025.
//

#ifndef PROJET_CPP_RECEUIL_H
#define PROJET_CPP_RECEUIL_H
#include "Livre.h"

class Receuil: public Livre
{
private :
    bool vers, prose;

public :
    Receuil();Receuil(bool vers_, bool prose_);

    Type get_type() override;
    bool get_prose(); void set_prose(bool prose_);
    bool get_vers(); void set_vers(bool vers_);
};


#endif //PROJET_CPP_RECEUIL_H