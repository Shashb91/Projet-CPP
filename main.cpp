#include <iostream>
#include "Livre.h"
#include "Adherent.h"
#include "Bibliotheque.h"

using namespace std;

int main() {
    Bibliotheque bib1("Bibliotheque Centrale", "10 rue de Paris");
    Bibliotheque bib2("Bibliotheque Universitaire", "5 avenue des Sciences");

    Livre livres[] = {
        Livre("Orwell", "1984", "Gallimard", "9780451524935", Livre::Audience::Adulte),
        Livre("Huxley", "Brave New World", "Pocket", "9780060850524", Livre::Audience::Adulte),
        Livre("Tolkien", "The Hobbit", "HarperCollins", "9780261103344", Livre::Audience::Tout_public),
        Livre("Rowling", "Harry Potter 1", "Bloomsbury", "9780747532699", Livre::Audience::Jeunesse),
        Livre("Rowling", "Harry Potter 2", "Bloomsbury", "9780747538493", Livre::Audience::Jeunesse),

        Livre("Camus", "L'Etranger", "Gallimard", "9782070360024", Livre::Audience::Adulte),
        Livre("Hugo", "Les Miserables", "Folio", "9782070409181", Livre::Audience::Adulte),
        Livre("Zola", "Germinal", "Pocket", "9782266091612", Livre::Audience::Adulte),
        Livre("Moliere", "Le Malade Imaginaire", "Larousse", "9782035871293", Livre::Audience::Adolescent),
        Livre("Shakespeare", "Hamlet", "Penguin", "9780141015866", Livre::Audience::Adolescent),

        Livre("Herge", "Tintin au Tibet", "Casterman", "9782203001016", Livre::Audience::Jeunesse),
        Livre("Goscinny", "Asterix le Gaulois", "Hachette", "9782012101332", Livre::Audience::Tout_public),
        Livre("Uderzo", "Asterix et Cleopatre", "Hachette", "9782012101356", Livre::Audience::Tout_public),
        Livre("Franquin", "Gaston Lagaffe", "Dupuis", "9782800142016", Livre::Audience::Tout_public),
        Livre("Miyazaki", "Nausicaa", "Glenat", "9782723428173", Livre::Audience::Adolescent),

        Livre("Saint-Exupery", "Le Petit Prince", "Gallimard", "9782070612758", Livre::Audience::Jeunesse),
        Livre("Verne", "Vingt mille lieues", "Folio", "9782070360536", Livre::Audience::Adolescent),
        Livre("Asimov", "Foundation", "Spectra", "9780553293357", Livre::Audience::Adulte),
        Livre("Bradbury", "Fahrenheit 451", "Folio", "9782070368228", Livre::Audience::Adulte),
        Livre("Dick", "Ubik", "J'ai Lu", "9782290005544", Livre::Audience::Adulte),

        Livre("King", "It", "Pocket", "9782266286261", Livre::Audience::Adulte),
        Livre("Lovecraft", "Call of Cthulhu", "Folio", "9782070409877", Livre::Audience::Adulte),
        Livre("Dumas", "Les Trois Mousquetaires", "Pocket", "9782266091613", Livre::Audience::Tout_public),
        Livre("Kafka", "Le Proces", "Folio", "9782070360901", Livre::Audience::Adulte),
        Livre("Poe", "Histoires Extraordinaires", "GF", "9782080701400", Livre::Audience::Adolescent),

        Livre("Lewis", "Narnia", "Pocket", "9782266154158", Livre::Audience::Jeunesse),
        Livre("Collodi", "Pinocchio", "Folio", "9782070612864", Livre::Audience::Jeunesse),
        Livre("Perrault", "Contes", "Larousse", "9782035880073", Livre::Audience::Jeunesse),
        Livre("Grimm", "Contes", "Folio", "9782070405206", Livre::Audience::Jeunesse),
        Livre("Andersen", "La Petite Sirene", "Livre de Poche", "9782253006325", Livre::Audience::Jeunesse)
    };


    for (int i = 0; i < 20; i++)
        bib1.ajoutLivre(livres[i]);

    for (int i = 20; i < 30; i++)
        bib2.ajoutLivre(livres[i]);

    cout << "=== Livres Bibliotheque 1 ===" << endl;
    bib1.afficheLivres();

    cout << endl; cout << endl;
    cout << "=== Livres Bibliotheque 2 ===" << endl;
    bib2.afficheLivres();

    cout << endl; cout << endl;
    Adherent a1("Dupont", "Alice", "12 rue Victor Hugo", bib1, 3);
    Adherent a2("Martin", "Bob", "5 avenue Pasteur", bib1, 5);
    Adherent a3("Durand", "Claire", "9 boulevard Voltaire", bib2, 2);

    a1.empruntLivre("9782723428173");
    a1.empruntLivre("9782012101332");
    cout<<endl;
    a2.empruntLivre("9782070409181");
    a2.retourLivre("9782070409877");
    cout<<endl;
    a3.empruntLivre("9782070409877");
    cout<<endl;
    a1.affiche();
    cout<<endl;
    bib1.echangeLivre(bib2, "9780261103344");
    bib1.supprimerLivre(3);
    bib1.afficheLivres();
    return 0;
}