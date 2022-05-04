#ifndef INDIVIDUO_H
#define INDIVIDUO_H
#include <vector>
#include <random>
#include <iostream>

typedef bool tipo;

using namespace::std;

class Individuo{
    public:
        static void setTamanho(int tam){
            if(tam>-1) Individuo::tam = tam;
            else Individuo::tam = 0;
        }

        static int getTamanho(){
            return Individuo::tam;
        }

        static void setProbMutacao(int mut_prob){
            if(mut_prob>=0 && mut_prob<100) Individuo::mut_prob = mut_prob;
            else Individuo::mut_prob = 0;
        }

        static int getProbMutacao(){
            return Individuo::mut_prob;
        }

        static bool compararIndividuos(Individuo i, Individuo j){
            return i.getFitness() > j.getFitness();
        }

        Individuo();
        void imprimir();
        void mutar();
        void inicializar();
        void setCromossomo(vector<tipo> cromossomo);
        vector<tipo> getCromossomo();
        void setFitness(double fitness);
        double getFitness();
        tipo getGene(int pos);
        virtual ~Individuo();

    protected:

    private:
        static int tam;
        static int mut_prob;
        double fitness;

        vector<tipo> cromossomo;
};

#endif // INDIVIDUO_H
