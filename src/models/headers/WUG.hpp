#ifndef WUG_hpp
#define WUG_hpp
#include "../../graph/headers/AdjacencyList.hpp"
// Weighted untargeted graph
class WUG : public AdjacencyList {
public:
  void newRelation(int value, int adjValue, int weight);
  void print();
};

#endif