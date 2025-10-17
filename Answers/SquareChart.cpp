#include<iostream>
#include<cmath>

#define unsS unsigned short // define unsigned short as unsS for easier typing

using namespace std;

int main(int argc, char const *argv[]) {
    unsS input;
    cin >> input;

    unsS half = input / 2, lowerBest[3] = {0}, higherBest[3] = {0};
    unsS sqrtn = input/4 < sqrt(input) ? input/4 : sqrt(input); // cout << "Sqrt: " << sqrtn << endl;

    if (sqrtn * sqrtn == input) // perfect square
        cout << sqrtn << " * " << sqrtn << " = " << input << endl;
    else if (input % sqrtn == 0) // if it's divisible by themselves but divided by 4 or their square root
        cout << sqrtn << " * " << input / sqrtn << " = " << input << endl;
    else
    {
        if ((int)sqrt(input) * (int)sqrt(input) == input) // confirm again if it's a perfect square
            cout << sqrt(input) << " * " << sqrt(input) << " = " << input << endl;
        else
        {
            for(unsS re = sqrtn/2; re <= sqrtn; re++) {
                if (input - (re * (input / re)) > lowerBest[2]) { // check if the remainder is larger than the previous best
                    lowerBest[0] = re; lowerBest[1] = input / re; // store the best width and height
                    lowerBest[2] = input - lowerBest[0] * lowerBest[1]; // store the best remainder
                    // cout << "LProgress: " << \
                    //     lowerBest[0] << " (" << re << ") " << \
                    //     "*" << lowerBest[1] << " (" << input / re << ") " << \
                    //     " = " << lowerBest[0] * lowerBest[1] << "..." << lowerBest[2] << endl;
                }
            }

            for(unsS re = sqrtn/2*3; re >= sqrtn; re--) { 
                if (input - (re * (input / re)) > higherBest[2]) { // check if the remainder is larger than the previous best
                    higherBest[0] = re; higherBest[1] = input / re; // store the best width and height
                    higherBest[2] = input - higherBest[0] * higherBest[1]; // store the best remainder
                    // cout << "HProgress: " << \
                    //     higherBest[0] << " (" << re << ") " << \
                    //     "*" << higherBest[1] << " (" << input / re << ") " << \
                    //     " = " << higherBest[0] * higherBest[1] << "..." << higherBest[2] << endl;
                }
            }

            if (lowerBest[2] > higherBest[2]) // compare the two bests and print the better one
                cout << "    = " << lowerBest[0] << " * " << lowerBest[1] << " (=" << lowerBest[0] * lowerBest[1] << ") + " << lowerBest[2] << endl;
            else
                cout << "    = " << higherBest[0] << " * " << higherBest[1] << " (=" << higherBest[0] * higherBest[1] << ") + " << higherBest[2] << endl;
        }
    }
    return 0;
}
