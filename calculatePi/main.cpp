#include <iostream>
#include <cmath>
#include "Random.h"
using namespace std;

double calculatePi(int);

int main() {
    cout << "pi=" <<calculatePi(10000)<<endl;
    return 0;
}

double calculatePi(int n){
    int counter=0;
    int all=n;
    while(n--){
        double x = randomDouble(-1,1);
        double y = randomDouble(-1,1);
        bool flag = pow(x,2)+pow(y,2)<=1;
        cout <<"x="<<x<<", y="<<y<<", flag="<<flag<<endl;
        if(flag){
            counter++;
        }
    }
    return double(counter)/all*4;
}