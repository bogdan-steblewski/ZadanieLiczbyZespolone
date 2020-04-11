#include "LZespolona.hh"

LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = Skl1.re + Skl2.re;
  Wynik.im = Skl1.im + Skl2.im;
  return Wynik;
}


LZespolona  operator - (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = Skl1.re - Skl2.re;
  Wynik.im = Skl1.im - Skl2.im;
  return Wynik;
}



LZespolona  operator * (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = Skl1.re *Skl2.re-Skl1.im *Skl2.im;
  Wynik.im = Skl1.re *Skl2.im+Skl1.im *Skl2.re;
  return Wynik;
}


LZespolona  operator / (LZespolona  Skl1,  double  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = Skl1.re / Skl2;
  Wynik.im = Skl1.im / Skl2;
  return Wynik;
}

double modul2(LZespolona Skl1)
{
  return Skl1.im*Skl1.im+Skl1.re*Skl1.re;
}

LZespolona sprzezenie(LZespolona Skl1)
{
  Skl1.im=-Skl1.im;
  return Skl1;
}

LZespolona  operator / (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik=Skl1*sprzezenie(Skl2)/modul2(Skl2);
  return Wynik;
}

bool operator == (LZespolona  Skl1,  LZespolona  Skl2)
{
  if(Skl1.im==Skl2.im && Skl1.re == Skl2.re)
  {
    return true;
  }

  return false;
}
void Wyswietl(LZespolona  Skl1)
{
  std::cout<<"("<<Skl1.re<<std::showpos<<Skl1.im<<std::noshowpos<<"i)"; 
}
std::ostream &operator <<(std::ostream &Strm,LZespolona Skl1)
{

    Strm<<"("<<Skl1.re<<std::showpos<<Skl1.im<<std::noshowpos<<"i)";
    return Strm;
}
void wczytaj(LZespolona  Skl1)
{
  char znak;
  std::cin>>znak;
  if(znak!='(')
  {
    std::cin.setstate(std::ios_base::badbit);
  }
   std::cin>>Skl1.re>>Skl1.im;
     std::cin>>znak;
  if(znak!='i')
  {
     std::cin.setstate(std::ios_base::badbit);
  }
     std::cin>>znak;
  if(znak!=')')
  {
     std::cin.setstate(std::ios_base::badbit);
  }


}
std::istream &operator >>(std::istream &Strm,LZespolona &Skl1)
{
  char znak;
  Strm>>znak;
  if(znak!='(')
  {
    Strm.setstate(std::ios_base::badbit);
  }
  Strm>>Skl1.re>>Skl1.im;
    Strm>>znak;
  if(znak!='i')
  {
    Strm.setstate(std::ios_base::badbit);
  }
    Strm>>znak;
  if(znak!=')')
  {
    Strm.setstate(std::ios_base::badbit);
  }

  return Strm;
}