#include <iostream>
using namespace std;
#include <string>

int main () {

    string firstname;
    int age;

    cout <<"Enter your age" << endl;
    cin >> age;
    cout <<"Enter your name: " << endl;
    cin >> firstname;
    cout <<"Hello " << firstname << "  you are "<<age<<" years old";

    return 0;

}
