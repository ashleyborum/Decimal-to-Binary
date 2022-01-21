#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>

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
    int digits = 1;
    string baseTwoString = "";
    string mantissaDigit = "";

    while (baseTenNumber != 0 && digits < MAX_DIGITS) 
    {
        baseTenNumber *= 2;
        mantissaDigit = to_string((abs((int) baseTenNumber)));
        baseTwoString += mantissaDigit; 
        baseTenNumber -= (int) baseTenNumber;
        digits++;
    }
    cout << baseTwoString;
}

//------------------------------------------------------------------------------------------------------------------------------------------------------------
int main(int argc, char** argv)
{
    cout << "| Base 10 | Base 2    |" << "\n";
    cout << "| :-------| :---------|" << "\n";

    for (int i = 1; i < argc; i++) {
        cout << "| " << setw(8) << left << argv[i] << "| " << "0." << setw(8) << left;
     
        double number = atof(argv[i]);
        convertBaseTenToBaseTwo (number);
        cout << "|" << "\n";
    }
    return 0;
}
