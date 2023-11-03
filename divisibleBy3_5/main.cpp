/*************************
* 
*
* Fabio Ventura
* Divisible by 3 and 5 (Project Euler)
* Purpose: Program finds the sum of numbers from 0 - 1000  dvisibly by 3 and 5
*
*
**************************/
#include "main.h"

int main(int argc, char** argv)
{
    int sum = 0;
    for(int i = 0; i < 1000; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }
    cout << "The sum is: " << sum << endl;

    return 0;

}

