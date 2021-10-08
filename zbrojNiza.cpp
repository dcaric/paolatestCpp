//
//  main.cpp
//  ZbrojNizaBr
//
//  Created by Dario Caric on 26.09.2021..
//

#include <iostream>


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


int main(int argc, const char * argv[]) {
    
    printf("\n Upiši riječ za prekinuti program:");
    string stopRijec;
    cin >> stopRijec;
    leptirFunkcija(stopRijec);
  
    printf("PROGRAM JE GOTOV \n");
}