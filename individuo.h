#include <string>
#include <vector>
#include <time.h>
#include <cstdlib>
#include <iostream>

using namespace::std;
using tipo = int;
using vetor = vector<tipo>;

class individuo{
    private:
        int id;
        int tamanhoInd;
        vetor cromossomo;
        tipo minV;  
        tipo maxV; 
        int prob_mutacao;
        
        void inicializarCromossomo();   
    public:
        individuo(int id, int tamanhoInd, tipo minV, tipo maxV, int prob_mutacao);
        void imprimirIndividuo(); 
        void mutacao();  

        int getId(); 
        void setId(int id);   
        int getTamanho();   
        void setTamanho(int tamanho);   
        tipo getCromossomo(int i);
        void setCromossomo(int i, tipo valor);
        tipo getMinV();
        tipo getMaxV();
        void setMinV(tipo minV);
        void setMaxV(tipo maxV);
        int getProb_mutacao();
        void setProb_mutacao(int prob_mutacao);
};