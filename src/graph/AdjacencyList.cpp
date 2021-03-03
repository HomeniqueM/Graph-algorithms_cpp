#include "Vertice.cpp"
#include <algorithm>
#include <cstdlib>
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

public:
  /**
   * Create a new vertex in the graph
   */
  void newVertice(int value) { root.push_back(Vertice(value)); }

  /** [positionVertice]
   * Locate the position of a given vertex from its value
   * if it finds returns the current position in the graph if it does not return
   * -1
   */
  int positionVertice(int value) {

    int result = 0;
    bool isValid = false;

    for (vector<Vertice>::iterator i = root.begin(); i != root.end(); i++) {

      result++;
      if (i->value == value) {
        isValid = true;
        break;
      }
    }
    return isValid ? (result - 1) : -1;
  }

  /** [addAdjacebcy]
   * receives the value of the vertex that should receive the 
   * adjacency and the weight that will have this relation
   */
   // Note: that this method may cease to be boolean
  bool addAdjacebcy(int value, int adjValue, int weight) {
    int position = positionVertice(value);
    bool result = false;
    if (position == -1) {
      cerr << "[" << value << "] Is not a valid vertex" << endl;
    } else {
      root.at(position).addAdjacebcy(adjValue, weight);
      result = true;
    }

    return result;
  }

  /** Shows all the graphs its vertices (V) and the
    * respective relations (R) of each vertices
    */
  void printGraph() {
    for (auto i = root.begin(); i != root.end(); ++i) {
      cout << "V (" << i->value << ")  | R: ";
      i->printAdjacebcy();
      cout << endl;
    }
  }
};