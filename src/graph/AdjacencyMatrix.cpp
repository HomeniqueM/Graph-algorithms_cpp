#include <iostream>


typedef int TIPOPESO;


/**
 * numero de vertices e arestas serve para economizar a necessidade de
 * contabilizar futuramente custo 128 bits
 */

/**
 *
 */

typedef struct grafo{
    int vertice;
    int arestas;
    TIPOPESO **adj;

}GRAFO;