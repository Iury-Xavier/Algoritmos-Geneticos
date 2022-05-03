#include "individuo.h"

individuo::individuo(int id, int tamanhoInd, tipo minV, tipo maxV, int prob_mutacao){
    this->id = id;
    this->tamanhoInd = tamanhoInd;
    this->minV = minV;
    this->maxV = maxV;
    
    this->inicializarCromossomo();
};

int individuo::getId(){
    return this->id;
};
int individuo::getTamanho(){
    return this->tamanhoInd;
};
void individuo::setId(int id){
    this->id = id;
};
void individuo::setTamanho(int tamanho){
    this->tamanhoInd = tamanho;
};

void individuo::imprimirIndividuo(){
    cout << "Individuo " << this->id + 1 << ": {";
    for(int i = 0; i < this->tamanhoInd; i++){
        if(i != this->tamanhoInd - 1){
            cout << this->cromossomo[i] << ", ";
        }else{
            cout << this->cromossomo[i];
        }
    }
    cout << "}" << endl;
};

void individuo::inicializarCromossomo(){
    this->cromossomo.resize(this->tamanhoInd);
    for(int i = 0; i < this->tamanhoInd; i++){
        this->cromossomo[i] = rand() % (this->maxV - this->minV) + this->minV;
    }
};

tipo individuo::getCromossomo(int i){
    return this->cromossomo[i];
};

void individuo::setCromossomo(int i, tipo valor){
    this->cromossomo[i] = valor;
};

tipo individuo::getMinV(){
    return this->minV;
};

tipo individuo::getMaxV(){
    return this->maxV;
};

void individuo::setMinV(tipo minV){
    this->minV = minV;
};

void individuo::setMaxV(tipo maxV){
    this->maxV = maxV;
};

int individuo::getProb_mutacao(){
    return this->prob_mutacao;
};

void individuo::setProb_mutacao(int prob_mutacao){
    this->prob_mutacao = prob_mutacao;
};

void individuo::mutacao(){
    for(int i = 0; i < this->tamanhoInd; i++){
        if(rand() % 100 < this->prob_mutacao){
            this->cromossomo[i] = rand() % (this->maxV - this->minV) + this->minV;
        }
    }
};

