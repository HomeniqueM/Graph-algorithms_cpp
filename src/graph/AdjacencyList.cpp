#include "headers/AdjacencyList.hpp"

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

void AdjacencyList::newVertice(int value) {
  root.push_back(Vertice(value));
  this->vertices;
}

/** [addAdjacebcy]
 * receives the value of the vertex that should receive the
 * adjacency and the weight that will have this relation
 */
// Note: that this method may cease to be boolean
bool AdjacencyList::addAdjacebcy(int value, int adjValue, int weight) {
  int position = positionVertice(value);
  bool result = false;
  if (position == -1) {
    cerr << "[" << value << "] Is not a valid vertex" << endl;
  } else {
    root.at(position).addAdjacebcy(adjValue, weight);
    this->edges++;
    result = true;
  }

  return result;
}

/** [addAdjacebcy]
 * receives the value of the vertex that should receive the
 * adjacency and the weight that will have this relation
 */
bool AdjacencyList::addAdjacebcys(int value, int adjValues[], int weight) {
  int position = positionVertice(value);
  bool result = false;
  if (position == -1) {
    cerr << "[" << value << "] Is not a valid vertex" << endl;
  } else {
    int len = sizeof(adjValues) / sizeof(adjValues[0]);

    for (int i = 0; i < len; i++) {
      root.at(position).addAdjacebcy(adjValues[i], weight);
      this->edges++;
    }
    result = true;
  }

  return result;
}

/** [printGraph]
  *
  */
void AdjacencyList::printGraph() {
  for (auto i = root.begin(); i != root.end(); ++i) {
    cout << "V (" << i->value << ")  | R: ";
    i->printAdjacebcy();
    cout << endl;
  }
}
