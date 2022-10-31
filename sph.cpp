#include<iostream>
#include "sph.h"
using namespace std;

Sphere:: Sphere()
    {
    theRadius=1.0;
    }


 Sphere::Sphere(double initialRadius)
    {
    if (initialRadius>0)
    {
        theRadius = initialRadius;

    }
    else
    {
        theRadius =1.0;
    }
    }

 void Sphere ::  setRadius (double r)

    {
     theRadius=r;
           
    }

double Sphere:: getRadius()

    {
        return theRadius;
        
    }
double Sphere:: getDiameter()

    {
        
        return 2*getRadius();

    }
double Sphere :: getCircumference()

    {
        
        return 2*PI*getRadius();
    
    }

double Sphere :: getArea()
    {
        return 4*PI*pow(getRadius(),2);
    }


double Sphere :: getVolume()
    {
        return (4/3)*PI*pow(getRadius(),3);
    }
    
void Sphere :: printDetail()

    {
        cout<<"Radius: "<<getRadius()<<endl;
        cout<<"Diameter: "<<getDiameter()<<endl;
        cout<<"Volume: "<<getVolume()<<endl;
        cout<<"Area: "<<getArea()<<endl;
        cout<<"Circumference: "<<getCircumference()<<endl;
    }

void changeRadius (Sphere &n)

    {
        double rad;
        cout<<"Enter the value of radius : "<<endl;
        cin >>rad;
        n.setRadius(rad);

        n.printDetail();

    }

Sphere :: ~Sphere()
    {
        cout<<"The sphere has been destroyed."<<endl;
    }

