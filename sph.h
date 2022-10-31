#include<iostream>
#include<cmath>
#define PI 3.142
using namespace std;

class Sphere 
{
    private:
    
    double theRadius;

    public:

     Sphere(); //default constructor
     Sphere(double initialRadius);
     void setRadius(double r);
     double getRadius();
     double getDiameter();
     double getCircumference();
     double getArea();
     double getVolume();
     void printDetail();
     ~Sphere();
     friend void changeRadius(Sphere&);
    

};// end sp

