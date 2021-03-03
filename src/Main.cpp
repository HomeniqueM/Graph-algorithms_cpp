#include "graph/AdjacencyList.cpp"
#include <iostream>

using namespace std;

int main() {
  AdjacencyList *graph = new AdjacencyList();

  graph->newVertice(5);
  graph->newVertice(2);
  graph->newVertice(3);
  graph->newVertice(6);
  graph->newVertice(7);

  graph->addAdjacebcy(5, 5, 0);
  graph->addAdjacebcy(5, 2, 0);
  graph->addAdjacebcy(5, 3, 0);
  graph->addAdjacebcy(5, 45, 0);

  graph->addAdjacebcy(6, 3, 0);
  graph->printGraph();

  
  return 0;
}