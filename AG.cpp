#include "AG.h"

AG::AG(int tamPop, int tamInd, int indMinV, int indMaxV, int probMutacao){
    this->tamPop = tamPop;
    this->tamInd = tamInd;
    this->indMinV = indMinV;
    this->indMaxV = indMaxV;
    this->probMutacao = probMutacao;

    this->pais = new populacao(tamPop, tamInd, indMinV, indMaxV, probMutacao);
}

void AG::crossover(int posP1, int posP2){
    
};

void AG::executar(){

}