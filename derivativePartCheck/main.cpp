#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int number;
    int exponent;
    int newExponent, newNumber, thirdE, thirdN;
    char x = 'x';



    cout << "The variable is x. ENter a number\n";
    cin >> number;
    cout << "enter an exponent\n";
    cin >> exponent;


    newExponent = exponent -1;
    newNumber = exponent *number;



    cout << "the polynomial you entered is " << number << 'x' << "^" << exponent << endl;


    cout << "the first derivative of this polynomial is " << endl;

    cout << newNumber <<  'x' << "^" << newExponent << endl;

    thirdE = newExponent -1;
    thirdN = newExponent * newNumber;



    cout << "the second derivative of this polynomial is " << endl;

    cout << newExponent * newNumber << 'x' << "^" << newExponent -1 << endl;

    cout << "the third derivative of this polynomial is " << endl;

    cout << thirdE * thirdN << 'x' << "^" << thirdE -1;


}

/*sample output
 * The variable is x. ENter a number
5
enter an exponent
3
the polynomial you entered is 5x^3
the first derivative of this polynomial is
15x^2
the second derivative of this polynomial is
30x^1
the third derivative of this polynomial is
30x^0
 */