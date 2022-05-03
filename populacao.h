#include "individuo.h"

class populacao{
    private:
        individuo *individuos[100000];
    public:
        populacao(int TAMPOP, int TAMIND, int MINV, int MAXV, int prob_mutacao);
        void imprimirPopulacao();

        individuo *getIndividuo(int i);
        void setIndividuo(int i, individuo *ind);
};