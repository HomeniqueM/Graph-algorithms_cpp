#ifndef Vertice_hpp
#define Vertice_hpp
#include "Adjacency.hpp"
#include <iostream>
#include <vector>

using namespace std;
class Vertice {
private:
  vector<Adjacency> adjacency; // Vector where adjacent values will be stored
public:
  int value;

  /**
   * Standard builder
   */
  Vertice();

  /**
   * Alternative builder
   */
  Vertice(int value);

  /**
   * Alternative builder
   */
  Vertice(int value, Adjacency adjacency);

  void setValue(int value);

  int getValue();
  /**
   * add a new adjacency  to the list
   */
  void addAdjacebcy(int value);
  /**
   * add a new adjacency and its weight to the list
   */
  void addAdjacebcy(int value, int weight);
  /**
   */
  Adjacency removeAdjacency();

  /** [printAdjacebcy]
   * Only shows the values of adjacent vertices
   */
  void printAdjacebcy();
};
#endif Vertice_hpp