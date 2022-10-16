
#include <iostream>
#include "utilities.h"

using namespace std;

int main() {
    cout << "Écrire dans le main vos propres tests" << endl;
    const int t=10;
    int T[t]={1,50,12,12340,2,65,3,23,87,29};
    int minimum(0);
    int maximum(0);
    maxmin(T,t,minimum,maximum);
    cout << minimum << " et " << maximum << endl;
}
