#include <iostream>

using namespace std;

int main(){
    double dogYears;
    double humanYears;
    double firstYear = 21;
    double laterYear;

    cout << "Enter the dog age (must be older than 2): " << endl;
    cin >> dogYears;

    if (dogYears > 2) {
        laterYear = (dogYears - 2) * 4;
        humanYears = firstYear + laterYear;
        cout << "Your dog is " << humanYears << " years old in human years." << endl;
    } else {
        cout << "Invalid input. Dog age must be older than 2." << endl;
    }

    return 0;
}