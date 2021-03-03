#include "headers/Adjacency.hpp"
/**
 * element adjacent to the vertex that is connecting
 * Limitaions:
 *  Element must be integer and weight as well
 *  Weight will also be used in unweighted graphs
 */

Adjacency::Adjacency() {
  value = -1;
  weight = -1;
}
Adjacency::Adjacency(int value, int weight) {
  this->value = value;
  this->weight = weight;
}

void Adjacency::setValue(int value) { this->value = value; }
void Adjacency::setWeight(int weight) { this->weight = weight; }

// returns an integer
int Adjacency::getValue() { return value; }
// returns an integer
int Adjacency::getWeight() { return weight; }
