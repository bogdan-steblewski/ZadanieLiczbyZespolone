#ifndef BAZATESTU_HH
#define BAZATESTU_HH


#include "WyrazenieZesp.hh"

struct BazaTestu {
  WyrazenieZesp  *wskTabTestu;   /* Wskaznik na tablice zawierajaca pytania testu */
  unsigned int    IloscPytan;    /* Ilosc wszystkich pytan */
  unsigned int    IndeksPytania; /* Numer pytania, ktore ma byc pobrane jako nastepne */
};

bool InicjalizujTest( BazaTestu  *wskBazaTestu, const char*  sNazwaTestu );
bool PobierzNastpnePytanie( BazaTestu  *wskBazaTestu,  WyrazenieZesp *wskWyr );

#endif
