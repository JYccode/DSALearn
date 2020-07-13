#include "vector.h"
#include <iostream>
using std::cout;

int main(){
    //int a[4] {1,2,3,4};
    Vector<int> v;
    for(int i = 0;i<4;i++){
        v.insert(i);
    }
    for(int i = 0;i<4;i++){
        cout<< v[i];
    }
    





}