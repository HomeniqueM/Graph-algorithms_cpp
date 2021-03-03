#ifndef UTG_hpp
#define UTG_hpp
#include "../../graph/headers/AdjacencyList.hpp"
// Unweighted targeted graph

class UTG : private AdjacencyList {

public:
  void newVertice(int value);

  void newAdjacency(int value, int adjValue);
  void printGraph();
};

#endif