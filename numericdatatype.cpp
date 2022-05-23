 #include <iostream>
using namespace std;

int main () {

   //declaring variables

    int minutes , hours , extraminutes;

    //prompt the user to enter two numbers
    cout << "enter minutes" << endl;
    cin >> minutes;





    hours = minutes / 60;
    extraminutes = minutes % 60;

    cout << minutes << "minutes is equal to" <<hours<< " hours and " << extraminutes;

    return 0;







}

