#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a;
    double b;
    double c;
    double root1;
    double root2;

    cout << "input a: " << endl;
    cin >> a;
    cout << "input b: " << endl;
    cin >> b;
    cout << "input c: "<< endl ;
    cin>> c;

    root1 = (-b + sqrt(b*b - 4*a*c)) / (2*a);
    root2 = (-b - sqrt(b*b - 4*a*c)) / (2*a);

    cout << "root 1 = " << root1 << endl;
    cout << "root 2 = " << root2 << endl;
}