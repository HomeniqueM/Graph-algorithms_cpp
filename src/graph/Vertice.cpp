#include "headers/Vertice.hpp"

/**
 * Standard builder
 */
Vertice::Vertice() {
  // Definition
  this->value = NULL;
}

/**
 * Alternative builder
 */
Vertice::Vertice(int value) {
  // Definition
  this->value = value;
}

/**
 * Alternative builder
 */
Vertice::Vertice(int value, Adjacency adjacency) {
  // Definition
  this->value = value;
  this->adjacency.push_back(adjacency);
}

void Vertice::setValue(int value) { this->value = value; }

int Vertice::getValue() { return this->value; }

/**
 * add a new adjacency  to the list
 */
void Vertice::addAdjacebcy(int value) { addAdjacebcy(value, 0); }
/**
 * add a new adjacency and its weight to the list
 */
void Vertice::addAdjacebcy(int value, int weight) {
  adjacency.push_back(Adjacency(value, weight));
}
/**
 */
Adjacency Vertice::removeAdjacency() {

  /**Build the code **/
  return Adjacency();
}

/** [printAdjacebcy]
 * Only shows the values of adjacent vertices
 */
void Vertice::printAdjacebcy() {

  for (auto i = adjacency.begin(); i != adjacency.end(); ++i) {
    cout << i->getValue() << " > ";
  }
  cout << "null";
}
