//
//  main.cpp
//  ZbrojNizaBr
//
//  Created by Dario Caric on 26.09.2021..
//

#include <iostream>


using namespace std;



string leptirFunkcija(string limun) {
    try
    {
        printf("\n Upiši broj:");
        cin >> limun;
        //int strToInt = stoi(limun);
        //printf("strToNum= : %s \n", limun.c_str());

        int suma  = 0;
        for (int i= 1; i<= stoi(limun); i ++) suma = suma +i;
        
        printf("Zbroj brojeva je: %i \n", suma);
    }
    catch(const std::exception& e)
    {
        //std::cerr << e.what() << '\n';
        if (limun != "stop") printf("Upisao si krivi podatak. Rijec se ne moze pretvoriti u broj ili ta rijes nije STOP !\n");
    }
    return limun;
}



int main(int argc, const char * argv[]) {
    

    string limun = "";
    
    while (limun != "stop") {
        limun = leptirFunkcija(limun);
    }

    printf("PROGRAM JE GOTOV \n");



}

