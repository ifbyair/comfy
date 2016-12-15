#include <iostream>
#include <vector>
#include <string>
#include "worker.h"

using namespace std;

class Hub {
    vector <Worker *> workers;
public:
    void dump(){ cout << "Hub is here" << endl; }
};

int main(){
    cout << __cplusplus << endl;
}
