#include "individuo.h"

individuo::individuo(int id, int tamanho, tipo minV, tipo maxV){
    this->id = id;
    this->tamanho = tamanho;
    this->minV = minV;
    this->maxV = maxV;
    
    this->inicializarCromossomo();
};

int individuo::getId(){
    return this->id;
};
int individuo::getTamanho(){
    return this->tamanho;
};
void individuo::setId(int id){
    this->id = id;
};
void individuo::setTamanho(int tamanho){
    this->tamanho = tamanho;
};

void individuo::imprimirIndividuo(){
    cout << "Individuo " << this->id + 1 << ": {";
    for(int i = 0; i < this->tamanho; i++){
        if(i != this->tamanho - 1){
            cout << this->cromossomo[i] << ", ";
        }else{
            cout << this->cromossomo[i];
        }
    }
    cout << "}" << endl;
};

void individuo::inicializarCromossomo(){
    this->cromossomo.resize(this->tamanho);
    for(int i = 0; i < this->tamanho; i++){
        this->cromossomo[i] = rand() % (this->maxV - this->minV) + this->minV;
    }
};
