#include <vector>
#include <armadillo>
#include <iostream>
#include <cstdlib>

using namespace std;
using namespace arma;


class Node {

private:
  float currentValue;
  float health;

public:

  fvec weights;

  //vector<float> weights;
  //vector<Node*> looksAt;
  //vector<float> strength;

  float bias;

  static float randomZeroToOne() {
    float randomNumber = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
    return randomNumber;
  }

  Node() {
    weights = fvec();
    health = 1.0;
  }

  Node(vector<Node*> nodes) {
    for(auto node : nodes)
      startLookingAt(node);
  }

  ~Node() { }

  //TODO
  //  Make dem nodes calculate with a try-catch for null pointers
  //  So we don't waste time looking for dead Nodes
  //
  //  Setja inn atrophy fyrir weights, herna tharf eg ad byrja a lin.alg. held eg
  //
  //  Make a matrix generator for removing individual elements

  void stopLookingAt(int nodeNumber) {
    cout << "Stop looking at node " << nodeNumber << endl;

    //weights.erase(weights.begin() + nodeNumber)
    //looksAt.erase(looksAt.begin() + nodeNumber)
  }

  float randomNumber() {

  }

  void startLookingAt(Node* node) {
    cout << "Start looking at " << node << endl;
    int n = weights.n_elem;
    weights.resize(n + 1);
    weights[n] = randomZeroToOne();
    //looksAt.push_back(node);
  }

  int getValue() {
    health *= 0.9;
    health += currentValue;
    return currentValue;
  }

  bool shouldKill() {
    if(health >= 0.2) return false;
    return true;
  }
};

int main() {
  cout << "This is something" << endl;
  vector<Node*> nodes;
  for(int i = 0; i < 100; i++)
    nodes.push_back(new Node());
  nodes[0]->startLookingAt(nodes[1]);
  return 1;
}
