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
        int tamanho;
        vetor cromossomo;
        tipo minV;  
        tipo maxV; 

        void inicializarCromossomo();   
    public:
        individuo(int id, int tamanho, tipo minV, tipo maxV);
        void imprimirIndividuo();   

        int getId();    
        int getTamanho();   
        void setId(int id); 
        void setTamanho(int tamanho);   
};