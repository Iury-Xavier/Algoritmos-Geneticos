#include <iostream>
#include <time.h>
#include "AG.h"

using namespace std;

int main()
{
    srand(time(NULL));
    
    AG::setParametros(10,10,20,5); //tam_ind, tam_pop, mut_prob, cross_p_corte

    AG ag;

    ag.executar(10);

    return 0;
}
