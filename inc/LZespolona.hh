#ifndef LZESPOLONA_HH
#define LZESPOLONA_HH
#include <iostream>

struct  LZespolona {
  double   re;    /*! Pole repezentuje czesc rzeczywista. */
  double   im;    /*! Pole repezentuje czesc urojona. */
};

void Wyswietl(LZespolona  Skl1);
void wczytaj(LZespolona  Skl1);

bool operator == (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona  operator - (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona  operator * (LZespolona  Skl1,  LZespolona  Skl2);
/// Z1*S(Z2)/Mod(Z2)
LZespolona  operator / (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona  operator / (LZespolona  Skl1,  double  Skl2);
double modul2(LZespolona Skl1);
LZespolona sprzezenie(LZespolona Skl1);
std::ostream &operator <<(std::ostream &Strm,LZespolona Skl1);
std::istream &operator >>(std::istream &Strm,LZespolona &Skl1);

#endif
