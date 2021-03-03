#include "headers/UUG.hpp"

// Unweighted untargeted graph
void UUG::newRelation(int value, int adjValue) {
  newVertice(value);
  newVertice(adjValue);
  addAdjacency(value, adjValue, 0);
  addAdjacency(adjValue, value, 0);
}