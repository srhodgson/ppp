// calculate and print a table of squares 
#include "../../std_lib_facilities.h"

int square(int x) // return the square of x
{
    return x * x;
}

int main()
{
    int i = 0;
    while (i < 100){
        cout << i << '\t' << square(i) << '\n';
        ++i;
    }
}


