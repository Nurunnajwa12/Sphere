#include<iostream>
#include "sph.h"
using namespace std;

int main(){

Sphere s(3.0);
Sphere *spherePtr;//pointer


s.setRadius(6.0);
s.printDetail();

cout<<endl;

changeRadius(s);
cout<<endl;

spherePtr=&s;
spherePtr->printDetail();

    return 0;
}