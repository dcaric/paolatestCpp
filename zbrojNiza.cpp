//
//  main.cpp
//  ZbrojNizaBr
//
//  Created by Dario Caric on 26.09.2021..
//

#include <iostream>
#include <string>
#include "include/switch.h"

using namespace std;



void leptirFunkcija(string rijecZaKraj) {
    string unos;
     while (unos != rijecZaKraj)  { 
        try
        {
            printf("\n Upiši broj:");
            cin >> unos;
            int suma  = 0;
            for (int i= 1; i<= stoi(unos); i ++) suma = suma +i;
            printf("Zbroj brojeva je: %i \n", suma);
        }
        catch(const std::exception& e)
        {
            if (unos != rijecZaKraj) printf("Upisao si krivi podatak. Rijec se ne moze pretvoriti u broj ili ta rijes nije %s !\n",rijecZaKraj.c_str());
        }
    }
    
}

int oduzmiDvaBroja(int a, int b) {
    return a - b;
}

int main(int argc, const char * argv[]) {

    //string izborString;
    int izborInt;
    printf("\n Upiši 1 - za sumu niza");
    printf("\n Ili upiši 2 - za oduzeti 2 broja: ");
    //getline(cin, izborString);
    cin >> izborInt;

    switch (izborInt)
    {
    case 1:
        {
            printf("\n Upiši riječ za prekinuti program:");
            string stopRijec;
            getline(cin, stopRijec);
            leptirFunkcija(stopRijec);
        }
        break;
    case 2:
        {
            printf("\n Upiši prvi broj");
            int brojA;
            cin >> brojA;
            printf("\n Upiši drugi broj");
            int brojB;
            cin >> brojB;
            printf("Rezultat je: %i \n", oduzmiDvaBroja(brojA, brojB));
        }
        break;
    default:
        printf("Nisi upisala nista od opcija !");
        break;
    }


/*     SWITCH (izbor)
        CASE ("suma niza")
                printf("\n Upiši riječ za prekinuti program:");
                string stopRijec;
                getline(cin, stopRijec);
                leptirFunkcija(stopRijec);
                BREAK
        CASE ("zbroj")
                printf("\n Upiši prvi broj");
                int brojA;
                cin >> brojA;
                printf("\n Upiši drugi broj");
                int brojB;
                cin >> brojB;
                printf("Rezultat je: %i \n", oduzmiDvaBroja(brojA, brojB));
                BREAK
        DEFAULT
            printf("Nisi upisala nista od opcija !");
    END */

  
    printf("PROGRAM JE GOTOV \n");
}