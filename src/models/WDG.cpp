#include "headers/WDG.hpp"

//Weighted directed graph
void WDG::newRelation(int value, int adjValue, int weight) {
  
  newVertice(value);


  newVertice(adjValue);
  addAdjacency(value, adjValue, weight);
}

void WDG::print() { printGraphWithWeight(); }