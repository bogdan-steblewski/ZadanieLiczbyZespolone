#include "stat.hh"


void Wyswietl(statystyka stat)
{
    std::cout<<"poprawne "<<stat.poprawne<<std::endl;
    std::cout<<"zle "<<stat.wszystkie-stat.poprawne<<std::endl;
    std::cout<<"poprawne "<<stat.poprawne*100.0/stat.wszystkie<<"%"<<std::endl;
}