#include "headers/AdjacencyList.hpp"
#include <iomanip>

/** [positionVertice]
 * Locate the position of a given vertex from its value
 * if it finds returns the current position in the graph if it does not return
 * -1
 */
int AdjacencyList::positionVertice(int value) {

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

/** [newVertice]
 * Adds a new vertex to the Graph, but only unique values
 */
void AdjacencyList::newVertice(int value) {
  if (this->root.size() == 0 || positionVertice(value) == -1) {
    this->root.push_back(Vertice(value));
    this->vertices++;
  }
}

/** [addAdjacebcy]
 * receives the value of the vertex that should receive the
 * adjacency and the weight that will have this relation
 */
// Note: that this method may cease to be boolean
bool AdjacencyList::addAdjacency(int value, int adjValue, int weight) {
  int position = this->positionVertice(value);
  bool result = false;
  if (position == -1) {
    cerr << "[" << value << "] Is not a valid vertex" << endl;
  } else {
    this->root.at(position).addAdjacency(adjValue, weight);
    this->edges++;
    result = true;
  }

  return result;
}

/** [addAdjacebcy]
 * receives the value of the vertex that should receive the
 * adjacency and the weight that will have this relation
 */

/** [printGraph]
 *
 */
void AdjacencyList::printGraph() {
  for (auto i = root.begin(); i != root.end(); ++i) {
    cout << "V (" << setw(3) << i->value << ") | R: ";
    i->printAdjacency();
    cout << endl;
  }
}

void AdjacencyList::printGraphWithWeight(){
    for (auto i = root.begin(); i != root.end(); ++i) {
    cout << "V (" << setw(3) << i->value << ") | R: ";
    i->printAdjacencyWithWeight();
    cout << endl;
  }
}
