#include <iostream>
using namespace std;

int main () {
    int mark;

    cout << "Please enter your marks" << endl;
    cin>> mark;


    if (mark >=80){
        cout << "Distinction";
    }

    else if (mark >=60 & mark <80 ){
        cout << "Credit";

    }

    else if (mark >=50 & mark <60){
        cout << "Pass";

    }


    else if (mark >=40 &mark <50){
        cout << "Supplementary";

    }

    else if (mark >=30 & mark <40){

        cout << "Fail";
    }


    return 0;

















}

