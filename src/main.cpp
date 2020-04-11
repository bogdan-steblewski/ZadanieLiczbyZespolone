#include <iostream>
#include "BazaTestu.hh"
#include "stat.hh"
using namespace std;




int main(int argc, char **argv)
{

  if (argc < 2) {
    cout << endl;
    cout << " Brak opcji okreslajacej rodzaj testu." << endl;
    cout << " Dopuszczalne nazwy to:  latwy, trudny." << endl;
    cout << endl;
    return 1;
  }


  BazaTestu   BazaT = { nullptr, 0, 0 };

  if (InicjalizujTest(&BazaT,argv[1]) == false) {
    cerr << " Inicjalizacja testu nie powiodla sie." << endl;
    return 1;
  }


  
  cout << endl;
  cout << " Start testu arytmetyki zespolonej: " << argv[1] << endl;
  cout << endl;

  WyrazenieZesp   WyrZ_PytanieTestowe;
  LZespolona odp;
  statystyka stat={0,0};
  while (PobierzNastpnePytanie(&BazaT,&WyrZ_PytanieTestowe)) {
    cout<<"wyrazenie zespolone "<<WyrZ_PytanieTestowe<<endl;
    for(int i=0; i<3; i++)
    {
      cout<<"Twoja odpowiedz to : "<<endl;
    cin>>odp;
    if(cin.bad())
    {
      cout<<"blad w zapisie "<<endl;
    }
    else
    {
      break;
    }
    cin.clear();
    cin.ignore(1024,'\n');
    }
    if(odp==Oblicz(WyrZ_PytanieTestowe))
    {
      cout<<"poprawne"<<endl;
      stat.poprawne++;
      stat.wszystkie++;
    }
    else
    {
      cout<<"zle poprawne to : "<<Oblicz(WyrZ_PytanieTestowe)<<endl;
        stat.wszystkie++;
    }
    
  }

  
  cout << endl;
  cout << " Koniec testu" << endl;
  cout << endl;

  Wyswietl(stat);

}
