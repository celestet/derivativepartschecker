#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int number;
    int exponent;
    int newExponent, newNumber, thirdE, thirdN;
    char x = 'x';



    cout << "The variable is x. Enter a number\n";
    cin >> number;
    cout << "Enter an exponent\n";
    cin >> exponent;


    newExponent = exponent -1;
    newNumber = exponent *number;



    cout << "The polynomial you entered is " << number << 'x' << "^" << exponent << endl;


    cout << "The first derivative of this polynomial is " << endl;

    cout << newNumber <<  'x' << "^" << newExponent << endl;

    thirdE = newExponent -1;
    thirdN = newExponent * newNumber;



    cout << "The second derivative of this polynomial is " << endl;

    cout << newExponent * newNumber << 'x' << "^" << newExponent -1 << endl;

    cout << "The third derivative of this polynomial is " << endl;

    cout << thirdE * thirdN << 'x' << "^" << thirdE -1;


}

/*sample output
 * The variable is x. Enter a number
4
Enter an exponent
3
The polynomial you entered is 4x^3
The first derivative of this polynomial is
12x^2
The second derivative of this polynomial is
24x^1
The third derivative of this polynomial is
24x^0
 */