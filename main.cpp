#include <iostream>
#include "individuo.h"

int main(){
    srand(time(NULL));

    individuo *populacao[10];

    for(int i = 0; i < 10; i++){
        populacao[i] = new individuo(i, 10, 0, 10);
        populacao[i]->imprimirIndividuo();
    }

    return 0;
}
