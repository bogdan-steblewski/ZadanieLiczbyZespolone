#include "WyrazenieZesp.hh"

LZespolona Oblicz(WyrazenieZesp WyrZ)
{
    LZespolona wynik;
    switch (WyrZ.Op)
    {
    case Op_Dodaj:
        wynik = WyrZ.Arg1 + WyrZ.Arg2;
        break;

    case Op_Dziel:
        wynik = WyrZ.Arg1 / WyrZ.Arg2;
        break;
    case Op_Mnoz:
        wynik = WyrZ.Arg1 * WyrZ.Arg2;
        break;
    case Op_Odejmij:
        wynik = WyrZ.Arg1 - WyrZ.Arg2;
        break;
    }
    return wynik;
}
void Wyswietl(WyrazenieZesp WyrZ)
{
    std::cout << WyrZ.Arg1;
    switch (WyrZ.Op)
    {
    case Op_Dodaj:
        std::cout << "+";
        break;
    case Op_Dziel:
        std::cout << "/";
        break;
    case Op_Mnoz:
        std::cout << "*";
        break;
    case Op_Odejmij:
        std::cout << "-";
        break;
    }
    std::cout << WyrZ.Arg2;
}
std::ostream &operator<<(std::ostream &Strm, WyrazenieZesp Skl1)
{
    Strm << Skl1.Arg1;
    switch (Skl1.Op)
    {
    case Op_Dodaj:
        Strm << "+";
        break;

    case Op_Dziel:
        Strm << "/";
        break;
    case Op_Mnoz:
        Strm << "*";
        break;
    case Op_Odejmij:
        Strm << "-";
        break;
    }
    Strm << Skl1.Arg2;
    return Strm;
}