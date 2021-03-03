#ifndef WDG_hpp
#define WDG_hpp
#include "../../graph/headers/AdjacencyList.hpp"

//Weighted directed graph
class WDG : public AdjacencyList {
  public:
  void newRelation(int value, int adjValue, int weight);
  void print();
};

#endif