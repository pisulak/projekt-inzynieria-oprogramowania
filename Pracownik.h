#ifndef PRACOWNIK_H
#define PRACOWNIK_H

#include <string>
#include "IPracownik.h"
#include "Wypozyczenie.h"
#include "Samochod.h"
#include "Rezerwacja.h"

class Pracownik : public IPracownik {
private:
    std::string imie;
    std::string nazwisko;
    int identyfikator;

public:
    Pracownik(const std::string& imie, const std::string& nazwisko, int identyfikator);

    // Implementacja metod interfejsu
    void wystawRozliczenieWypozyczenia(Wypozyczenie wypozyczenie);
    void wystawRozliczenieRezerwacji(Rezerwacja rezerwacja);
    void dodajSamochod(Samochod* samochod, Katalog_samochodowy* katalogSamochodowy);
    void zmienStanPojazdu(Samochod* samochod, bool stan);

    std::string getImie();
    std::string getNazwisko();
    int getIdentyfikator();

    void dodajKlienta(std::vector<Klient*>& listaKlientow, Klient* klient);
};

#endif // PRACOWNIK_H
