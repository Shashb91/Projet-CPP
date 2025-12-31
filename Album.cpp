//
// Created by shash on 31/12/2025.
//

#include "Album.h"
#include "Livre.h"

Album::Album() : Livre(){dessin = NULL; photo = NULL;}
Album::Album(string auteur_, string titre_, string editeur_, string ISBN_, Audience audience_, bool dessin_,
    bool photo_) : Livre(auteur_, titre_, editeur_, ISBN_, audience_){dessin = dessin_; photo = photo_;}

Livre::Type Album::get_type(){return Type::Album;}

bool Album::get_dessin(){return dessin;}
void Album::set_dessin(bool dessin_){dessin = dessin_;}

bool Album::get_photo(){return photo;}
void Album::set_photo(bool photo_){photo = photo_;}