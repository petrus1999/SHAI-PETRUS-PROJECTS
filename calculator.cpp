#include <iostream>
using namespace std;

int main()  {

    //declaring variables
    double Area, diameter, radius;
    double pi = 3.14;

    //prompt the user to enter the diameter of a circle
    cout<<"enter the diameter of a circle"<<endl;
    cin >>diameter;


    radius = (diameter / 2);
    Area = pi * radius * radius;



    cout <<"The area of a circle with a diameter of "<<diameter<<" is equal to "<<Area;

    return 0;





}



