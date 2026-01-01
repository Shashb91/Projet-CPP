//
// Created by shash on 31/12/2025.
//

#ifndef PROJET_CPP_THEATRE_H
#define PROJET_CPP_THEATRE_H
#include "Livre.h"


class Theatre : public Livre
{
private:
    int siecle;

public:
    Theatre();
    Theatre(string auteur_, string titre_, string editeur_, string ISBN_, Audience audience_, int siecle_);

    Type get_type() override;
    int get_siecle(); void set_siecle(int siecle_);
};


#endif //PROJET_CPP_THEATRE_H