#include <vector>
#include <armadillo>

using namespace std;
using namespace arma;

class Toolbox {

public:
  static fvec erase(fvec columnVector, vector<int> eraseList) {
    //TODO
    //Setja upp matrix med 'eye' sidan joina thetta og skilja eftir thaer radir sem eiga ekki
    //heima i matrix og madur vill taka ut
    //
    //
    //http://arma.sourceforge.net/docs.html#join

    //sidan return = mat_eye_withoutRows (dot) columnVector 
  }

}
