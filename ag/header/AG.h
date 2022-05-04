#ifndef AG_H
#define AG_H

#include "Populacao.h"
#include <algorithm>

using namespace::std;

class AG{

    public:
        static void setParametros(int tam_ind, int tam_pop, int mut_prob, int cross_p_corte){
            Individuo::setTamanho(tam_ind);
            Individuo::setProbMutacao(mut_prob);
            Populacao::setTamanho(tam_pop);
            AG::cross_p_corte = cross_p_corte;
            AG::setted = true;
        }

        AG();
        void executar(int maxGen);
        void imprimirPopulacao();
        virtual ~AG();

    protected:

    private:
        static int cross_p_corte;
        static bool setted;

        void inicializar();
        void crossover();
        void mutacao();
        void fitness(Populacao* p);
        void calcFitness(Individuo* i);
        int getIndicePai();
        void selecaoGeracional();

        Populacao* p = NULL;
        Populacao* f = NULL;
        
};

#endif // AG_H