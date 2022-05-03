#include "populacao.h"

populacao::populacao(int TAMPOP, int TAMIND, int MINV, int MAXV, int prob_mutacao){
    for(int i = 0; i < TAMPOP; i++){
        individuos[i] = new individuo(i, TAMIND, MINV, MAXV, prob_mutacao);
    }
}

void populacao::imprimirPopulacao(){
    for(int i = 0; i < 10; i++){
        individuos[i]->imprimirIndividuo();
    }
}

individuo *populacao::getIndividuo(int i){
    return individuos[i];
}

void populacao::setIndividuo(int i, individuo *ind){
    individuos[i] = ind;
}

