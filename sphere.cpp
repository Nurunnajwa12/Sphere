#include<iostream>
#include<cmath>
#define PI 3.142
using namespace std;

class Sphere 
{
    private:
    
    double theRadius;

    public:

     Sphere();
     Sphere(double initialRadius);
    
    void setRadius(double r)
    {

        theRadius=r;
        
       
    }
    
    double getRadius()
    {
        return theRadius;
        
    }
    double getDiameter()
    {
        return 2*getRadius();

    }
    double getCircumference()
    {
        return 2*PI*getRadius();
    }
    double getArea()
    {
        return 4*PI*pow(getRadius(),2);
    }
    double getVolume()
    {
        return (4/3)*PI*pow(getRadius(),3);
    }
    void printDetail()

    {
        cout<<"Radius: "<<getRadius()<<endl;
        cout<<"Diameter: "<<getDiameter()<<endl;
        cout<<"Volume: "<<getVolume()<<endl;
        cout<<"Area: "<<getArea()<<endl;
        cout<<"Circumference: "<<getCircumference()<<endl;
    }

    ~Sphere()
    {
        cout<<"The sphere has been destroyed."<<endl;
    }

    friend void changeRadius(Sphere &n)
    {
        double rad;
        cout<<"Enter the value of radius : "<<endl;
        cin >>rad;
        n.setRadius(rad);

        n.printDetail();
    }

};

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