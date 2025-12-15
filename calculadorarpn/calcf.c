#include "calcf.h"
#include <math.h>
int quadrado(int x){
    return x*x;
}

int cubo(int x){
    return x*x*x;
}
int calcularExponencial(int base, int expoente) {
    int teste =(int)pow((double)base,(double)expoente);
    return teste; // Usando pow da biblioteca math.h
}
