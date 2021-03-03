#include "headers/WUG.hpp"
#include <cstdio>

void WUG::newRelation(int value, int adjValue, int weight) {
  newVertice(value);
  newVertice(adjValue);
  addAdjacency(value, adjValue, weight);
  addAdjacency(adjValue, value, weight);
}

void WUG::print() { printGraphWithWeight(); }