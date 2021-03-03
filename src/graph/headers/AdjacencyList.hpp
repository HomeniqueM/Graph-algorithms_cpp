#ifndef AdjacencyList_hpp
#define AdjacencyList_hpp

#include "Vertice.hpp"
#include <algorithm>
#include <functional>
#include <iostream>
#include <iterator>
#include <ostream>
#include <vector>

using namespace std;

class AdjacencyList {

private:
  int vertices;
  int edges;
  vector<Vertice> root;

  /** [positionVertice]
   * Locate the position of a given vertex from its value
   * if it finds returns the current position in the graph if it does not return
   * -1
   */
  int positionVertice(int value);

public:
  /**
   * Create a new vertex in the graph
   */
  virtual void newVertice(int value);

  /** [addAdjacebcy]
   * receives the value of the vertex that should receive the
   * adjacency and the weight that will have this relation
   */
  // Note: that this method may cease to be boolean
  virtual bool addAdjacebcy(int value, int adjValue, int weight);

  virtual bool addAdjacebcys(int value, int adjValues[], int weight);

  /** Shows all the graphs its vertices (V) and the
   * respective relations (R) of each vertices
   */
  virtual void printGraph();
};
#endif
