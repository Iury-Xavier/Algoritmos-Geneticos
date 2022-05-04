#ifndef POPULACAO_H
#define POPULACAO_H
#include "Individuo.h"

class Populacao
{
    public:
        static void setTamanho(int tam){
            if(tam>-1) Populacao::tam = tam;
            else Populacao::tam = 0;
        }

        static int getTamanho(){
            return Populacao::tam;
        }

        Populacao();
        void imprimir();
        Individuo* getIndividuo(int p);
        void setIndividuo(Individuo i, int pos);
        void inicializar();
        virtual ~Populacao();
        vector<Individuo> getIndividuos();

    protected:

    private:
        static int tam;
        vector<Individuo> individuos;
};

#endif // POPULACAO_H
