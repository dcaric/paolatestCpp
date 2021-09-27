//
//  main.cpp
//  ZbrojNizaBr
//
//  Created by Dario Caric on 26.09.2021..
//

#include <iostream>


using namespace std;

int main(int argc, const char * argv[]) {
    

    string limun = "";
    
    while (limun != "stop") {


        try
        {
            printf("\n Upiši broj:");
            cin >> limun;
            int strToInt = stoi(limun);
            //printf("strToNum= : %i \n", limun);

            int suma  = 0;
            for (int i= 1; i<= strToInt; i ++) {
                suma = suma +i;
            }
            printf("Zbroj brojeva je: %i \n", suma);
        }
        catch(const std::exception& e)
        {
            //std::cerr << e.what() << '\n';
            if (limun != "stop") printf("Upisao si krivi broj, to nije broj niti rijec STOP !\n");
        }
    
    }

    printf("PROGRAM JE GOTOV");

}