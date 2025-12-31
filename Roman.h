//
// Created by shash on 31/12/2025.
//

#ifndef PROJET_CPP_ROMAN_H
#define PROJET_CPP_ROMAN_H
#include "Livre.h"


class Roman : public Livre{
public:
    enum class Genre
    {
        Null,Litterature, Roman_noir, Roman_policier, Roman_animalier, Roman_amour,
        Roman_moeurs, Roman_gothique, Roman_courtois, Roman_epistolaire, Roman_feuilleton,
        Roman_graphique, Roman_historique, Roman_photo, Roman_picaresque, Roman_memoire,
        Roman_populaire, Roman_aventure, Roman_anticipation, Roman_espionnage, Roman_apprentissage,
        Roman_chevalerie, Roman_autobiographique, Nouveau_roman, Roman_chevaleresque, Conte, Nouvelle
    };

    Roman();
    Roman(string auteur_, string titre_, string editeur_, string ISBN_, Audience audience_,Genre genre);

    Type get_type() override;
    Genre get_genre();string get_genre_string(); void set_genre(Genre genre_);

private:
    Genre genre;
};


#endif //PROJET_CPP_ROMAN_H