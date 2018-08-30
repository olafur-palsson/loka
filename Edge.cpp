#include <vector>

using namespace std;

class Edge {

public:

  Node* connectedTo;
  Edge(Node* connectedNode) {
    this.connectedTo = connectedNode;
    *connectedNode.hookUpWith(this)
  }


}
