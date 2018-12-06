#include <iostream>
using namespace std;

template <class T> void sort(T a[], int length);
template <class Q> void printArray (Q array[], int length);

int main(){
    int a[7] = {3,2,-1,5,1,0,4};
    sort(a,7);
    printArray(a,7);

    double b[5] = {-0.12,1.34,100,2.5,0.1};
    sort(b,5);
    printArray(b,5);

    char c[8]="egacfbd";
    sort(c,6);
    printArray(c,6);

    return 0;
}


template <class T>
void sort(T a[], int length){
    for (int i = 0; i < length ; i++) {
        for (int j = 0; j < length-i-1; j++) {
            if(a[j]>a[j+1]){
                int temp = a[j+1];
                a[j+1] = a[j];
                a[j]=temp;
            }
        }
    }
}

template <class Q>
void printArray (Q array[], int length){
    for (int i = 0; i < length; i++) cout << array[i] <<" ";
    cout << '\n';
}
