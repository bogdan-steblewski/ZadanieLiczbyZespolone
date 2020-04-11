#ifndef WYRAZENIEZESP_HH
#define WYRAZENIEZESP_HH



#include "LZespolona.hh"

enum Operator { Op_Dodaj, Op_Odejmij, Op_Mnoz, Op_Dziel };

struct WyrazenieZesp {
  LZespolona   Arg1;   // Pierwszy argument wyrazenia arytmetycznego
  Operator     Op;     // Opertor wyrazenia arytmetycznego
  LZespolona   Arg2;   // Drugi argument wyrazenia arytmetycznego
};


void Wyswietl(WyrazenieZesp  WyrZ);
LZespolona Oblicz(WyrazenieZesp  WyrZ);
std::ostream &operator <<(std::ostream &Strm,WyrazenieZesp Skl1);
#endif
