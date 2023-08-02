// Author: Nirupam Pal
// Date: 02/08/2023
// Description: This program is used to solve the equation using Newton-Rapson method

#include<iostream>
#include<math.h>
using namespace std;
#define ERROR 0.001

float y(float x) {
    return (sqrt(x) - 7);
}

float dy(float x) {
    return (1 / (2 * sqrt(x)));
}

int main() {

    cout << "*-----------------------------------------*-----------------------------------------*" << endl;
    cout << "|                                 Author: Nirupam Pal                               |" << endl;
    cout << "|                                   Date: 02/08/2023                                |" << endl;
    cout << "|Description: This program is used to solve the equation using Newton-Raphson method|" << endl;
    cout << "*-----------------------------------------*---------------------------------------- *" << endl;
// Description: This program is used to solve the equation using Newton-Rapson method

    cout.setf(ios::fixed); // set fixed floating format
    cout.precision(4); // for fixed format, two decimal places
    float n1, n2 = 0;
    // Loop for taking the initial guess
    for (int j = 0; j >= 0; j++) {
        cout << "Enter the initial guess : ";
        cin >> n1;
        if (y(n1)/dy(n1) == 0 || dy(n1) == 0 || isnan((y(n1) / dy(n1)))) {
            cout << "Invalid guess. Enter the guess again!!\n";
        }
        else {
            break;
        }
    }
    for (int i = 0; i >= 0; i++) {
        n2 = n1 - (y(n1) / dy(n1));
        cout << "Iteration-" << i+1 << " : x = " << n2 << " || Error = " << abs(y(n2) - y(n1)) << endl;
        if (abs(y(n2) - y(n1)) <= ERROR) {
            break;
        }
        else {
            n1 = n2;
        }
    }
    cout << "\nFinal answer : x = " << n2 << endl;
    return 0;
}