// Unweighted untargeted graph
#include "../../graph/headers/AdjacencyList.hpp"
// Unweighted targeted graph

class UUG : private AdjacencyList {

public:
  void newVertice(int value) {
    //
    AdjacencyList::newVertice(value);
  }

  void newAdjacency(int value, int adjValue) {
    AdjacencyList::addAdjacebcy(value, adjValue, 0);
  }
  void printGraph() {
    //
    AdjacencyList::printGraph();
  }
};