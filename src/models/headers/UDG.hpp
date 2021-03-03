#ifndef UDG_hpp
#define UDG_hppusing
#include "../../graph/headers/AdjacencyList.hpp"
// Unweighted directed graph
class UDG : public AdjacencyList {

public:
  bool newRelation(int value, int adjValue);
};

#endif