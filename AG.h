#include "populacao.h"
class AG{
    private:
        populacao *pais;
        populacao *filhos;
        int tamPop;
        int tamInd;
        int indMinV;
        int indMaxV;
        int probMutacao;
    public:
        AG(int tamPop, int tamInd, int indMinV, int indMaxV, int probMutacao);
        void crossover(int posP1, int posP2);
        void executar();
};