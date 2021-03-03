#ifndef UUG_hpp
#define UUG_hpp
#include "../../graph/headers/AdjacencyList.hpp"

//Unweighted untargeted graph
class UUG : public AdjacencyList{
    public:
void newRelation(int value,int adjValue);
};


#endif