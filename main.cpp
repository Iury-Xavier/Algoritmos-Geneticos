#include <iostream>
#include "AG.h"

int main(){
    srand(time(NULL));
               
    populacao *p = new populacao(10, 5, 0, 100, 0.1); //(TAMPOP, TAMIND MINV, MAXV, PROB_MUTACAO);
    p->imprimirPopulacao();
    for (size_t i = 0; i < 10; i++){
        p->getIndividuo(i)->mutacao();
    }
    cout << "\nMutacao:" << endl;
    p->imprimirPopulacao();

    return 0;
}
//TERMINAR O AG