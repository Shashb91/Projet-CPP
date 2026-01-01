#include <iostream>
#include "Bibliotheque.h"
#include "Adherent.h"
#include "Album.h"
#include "BD.h"
#include "Receuil.h"
#include "Roman.h"
#include "Theatre.h"

using namespace std;

int main() {
    Bibliotheque bib1("Bibliotheque Centrale", "12 rue Victor Hugo");
    Bibliotheque bib2("Bibliotheque Municipale", "8 avenue Voltaire");

    Livre* l1 = new Roman("Albert Camus", "L'Etranger", "Gallimard", "9782070360024",Livre::Audience::Adulte, Roman::Genre::Roman_moeurs);
    Livre* l2 = new Roman("George Orwell", "1984", "Secker & Warburg", "9780451524935",Livre::Audience::Adulte, Roman::Genre::Roman_anticipation);
    Livre* l3 = new Roman("Victor Hugo", "Les Miserables", "A. Lacroix", "9782253096337",Livre::Audience::Adulte, Roman::Genre::Roman_historique);
    Livre* l4 = new Roman("Jules Verne", "Vingt mille lieues sous les mers", "Hetzel","9782253006329", Livre::Audience::Adolescent,Roman::Genre::Roman_aventure);
    Livre* l5 = new Roman("Mary Shelley", "Frankenstein", "Lackington", "9780143131847",Livre::Audience::Adulte, Roman::Genre::Roman_gothique);

    Livre* l6  = new BD("Herge", "Tintin au Tibet", "Casterman", "9782203001037",Livre::Audience::Jeunesse, "Herge");
    Livre* l7  = new BD("Goscinny", "Asterix le Gaulois", "Hachette", "9782012101333",Livre::Audience::Tout_public, "Uderzo");
    Livre* l8  = new BD("Miyazaki", "Nausicaa", "Glénat", "9782723456732",Livre::Audience::Adolescent, "Hayao Miyazaki");
    Livre* l9  = new BD("Moebius", "Arzach", "Les Humanoides Associes", "9782731601239",Livre::Audience::Adulte, "Moebius");
    Livre* l10 = new BD("Franquin", "Gaston Lagaffe", "Dupuis", "9782800142304",Livre::Audience::Tout_public, "Franquin");

    Livre* l11 = new Album("Antoine de Saint-Exupery", "Le Petit Prince","Reynal & Hitchcock", "9780156013987",Livre::Audience::Jeunesse, true, false);
    Livre* l12 = new Album("Claude Ponti", "Blaise et le chateau d'Anne Hiversere","Ecole des Loisirs", "9782211056761",Livre::Audience::Jeunesse, true, false);
    Livre* l13 = new Album("Shaun Tan", "The Arrival", "Arthur A. Levine","9780439895292", Livre::Audience::Adulte, true, false);
    Livre* l14 = new Album("Leo Lionni", "Petit-Bleu et Petit-Jaune","Ecole des Loisirs", "9782211002348",Livre::Audience::Jeunesse, true, false);
    Livre* l15 = new Album("Tomi Ungerer", "Les Trois Brigands","Ecole des Loisirs", "9782211006179",Livre::Audience::Jeunesse, true, false);

    Livre* l16 = new Receuil("Charles Baudelaire", "Les Fleurs du mal","Poulet-Malassis", "9782070408504",Livre::Audience::Adulte, true, false);
    Livre* l17 = new Receuil("Arthur Rimbaud", "Illuminations","Vanier", "9782070413119",Livre::Audience::Adulte, true, false);
    Livre* l18 = new Receuil("Paul Verlaine", "Romances sans paroles","Lemerre", "9782070413201",Livre::Audience::Adulte, true, false);
    Livre* l19 = new Receuil("Jacques Prevert", "Paroles","Gallimard", "9782070320295",Livre::Audience::Tout_public, true, false);
    Livre* l20 = new Receuil("Emily Dickinson", "Poems","Roberts Brothers", "9780679642781",Livre::Audience::Adulte, true, false);

    Livre* l21 = new Theatre("Moliere", "Le Malade Imaginaire","Barbin", "9782070408269",Livre::Audience::Tout_public, 17);
    Livre* l22 = new Theatre("Racine", "Phedre","Claude Barbin", "9782070416356",Livre::Audience::Adulte, 17);
    Livre* l23 = new Theatre("Shakespeare", "Hamlet","Simon & Schuster", "9780743477123",Livre::Audience::Adulte, 16);
    Livre* l24 = new Theatre("Beckett", "En attendant Godot","Minuit", "9782707300809",Livre::Audience::Adulte, 20);
    Livre* l25 = new Theatre("Ionesco", "La Cantatrice Chauve","Gallimard", "9782070368396",Livre::Audience::Adulte, 20);

    Livre* l26 = new Roman("Emile Zola", "Germinal", "Charpentier", "9782253006190",Livre::Audience::Adulte, Roman::Genre::Roman_moeurs);
    Livre* l27 = new Roman("Alexandre Dumas", "Le Comte de Monte-Cristo", "Penguin","9780140449266", Livre::Audience::Adolescent,Roman::Genre::Roman_aventure);
    Livre* l28 = new Roman("Bram Stoker", "Dracula", "Archibald Constable","9780141439846", Livre::Audience::Adulte,Roman::Genre::Roman_gothique);
    Livre* l29 = new Roman("Lewis Carroll", "Alice au pays des merveilles", "Macmillan","9781503222687", Livre::Audience::Jeunesse,Roman::Genre::Conte);
    Livre* l30 = new Roman("Herman Melville", "Moby Dick", "Harper & Brothers","9781503280786", Livre::Audience::Adulte,Roman::Genre::Roman_aventure);

    Livre* livres[] = {
        l14, l3,  l27, l8,  l19,
        l1,  l22, l11, l30, l6,
        l18, l25, l4,  l16, l9,
        l29, l12, l7,  l21, l2,
        l24, l10, l17, l5,  l28,
        l13, l26, l20, l15, l23
    };

    for (int i = 0; i < 15; i++) bib1.ajoutLivre(livres[i]);
    for (int i = 15; i < 30; i++) bib2.ajoutLivre(livres[i]);

    Adherent a1("Dupont", "Jean", "10 rue A", bib1, 3);
    Adherent a2("Martin", "Claire", "22 rue B", bib2, 2);
    Adherent a3("Durand", "Luc", "5 avenue C", bib1, 4);

    a1.empruntLivre("9782800142304");
    a1.retourLivre("9782800142304");
    a3.empruntLivre("9782800142304");
    a2.empruntLivre("9781503280786");

    cout << "\n===== BIBLIOTHEQUE 1 =====\n";
    bib1.afficheLivres();
    cout << endl; cout << endl;
    cout << "\n===== BIBLIOTHEQUE 2 =====\n";
    bib2.afficheLivres(Livre :: Type :: Theatre);



    return 0;
}
