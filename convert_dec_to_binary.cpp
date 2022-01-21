#include <cmath>
#include <ctime>
#include <iostream>
#include <iomanip>
#include <functional>

using namespace std;

// Constants
const double MAX_DIGITS = 8;

/**
 * Convert Decimal Mantissa to Binary Mantissa"
 *
 * @param real number in base 10
 *
 * @return binary number with <= MAX_DIGITS 
 */

//------------------------------------------------------------------------------------------------------------------------------------------------------------
void convertBaseTenToBaseTwo (double baseTenNumber) {
    int counter = 1;

    while (baseTenNumber != 0 && counter < MAX_DIGITS) 
    {
        baseTenNumber *= 2;
        cout << (int) baseTenNumber;
        baseTenNumber -= (int) baseTenNumber;
        counter++;
    }
    cout << ceil(baseTenNumber);
}

//------------------------------------------------------------------------------------------------------------------------------------------------------------
int main(int argc, char** argv)
{
    cout << "| Base 10 | Base 2 |" << "\n";
    cout << "| :-------| :------|" << "\n";

    for (int i = 1; i < argc; i++) {
        cout << "| " << setw(8) << left << argv[i] << "| " << "0.";
     
        double number = atof(argv[i]);
        convertBaseTenToBaseTwo (number);
        cout << "|" << "\n";
    }
    return 0;
}
