#include <iostream>
#include"Overcoat.h"
#include"Flat.h"
using namespace std;

int main()
{
    setlocale(0, "");
    /*
    Overcoat coat1("пальто", 100.0);
    Overcoat coat2("пальто", 150.0);
    Overcoat coat3("куртка", 100.0);

   coat1 == coat3;
   coat3 = coat1;
   cout << endl;
   coat1 == coat3;
   cout << endl;
  
   cout << "coat1 и coat2 имеют одинаковые типы и цены: " << (coat1 > coat2) << "\n";
   cout << "coat1 и coat3 имеют разные типы: " << (coat1 > coat3) << "\n";
   */
    Flat flat1(100, 100000);
    Flat flat2(120, 120000);

    if (flat1 == flat2) {
        cout << "Площадь квартир равна\n";
    }
    else {
        cout << "Площадь квартир не равна\n";
    }

    if (flat1 > flat2) {
        cout << "Цена 1 > 2\n";
    }
    else {
        cout << "Цена 2 > 1\n";
    }

    flat1 = flat2;
    

    
}

