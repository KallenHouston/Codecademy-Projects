#include <iostream>

using namespace std;

int main() {
    double columbia, brazil, peru, us;

    cout << "Enter number of Columbia pesos: ";
    cin >> columbia;
    cout << "Enter number of Brazil Reais: ";
    cin >> brazil;
    cout << "Enter number of Peru soles: ";
    cin >> peru;

    double columbiaConvert = 0.00032;
    double brazilConvert = 0.27;
    double peruConvert = 0.3;

    us = (columbia * columbiaConvert) + (brazil * brazilConvert) + (peru * peruConvert);

    cout << "$ you have total is: " << us << endl;
}