#include "headers/UDG.hpp"

//  Unweighted directed graph

bool UDG::newRelation(int value, int adjValue) {
  bool result = true;
  newVertice(value);
  newVertice(adjValue);
  addAdjacency(value, adjValue, 0);

  return result;
}