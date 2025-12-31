//
// Created by shash on 31/12/2025.
//

#ifndef PROJET_CPP_ALBUM_H
#define PROJET_CPP_ALBUM_H
#include "Livre.h"


class Album : public Livre
{
private:
    bool dessin, photo;

public:
    Album();
    Album(string auteur_, string titre_, string editeur_, string ISBN_, Audience audience_, bool dessin_, bool photo_);

    Type get_type() override;
    bool get_dessin(); bool get_photo();
    void set_dessin(bool dessin_); void set_photo(bool photo_);
};


#endif //PROJET_CPP_ALBUM_H