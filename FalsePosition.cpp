#include <iostream>
#include <math.h>

using namespace std;

double evaluateFunc(double x){
    return x*x - x - 2;
}


int main() {

    double a=1, b=3, E = 0.01, c=0;

    if(evaluateFunc(a) * evaluateFunc(b) < 0)
    {
        while(abs(a-b) > E)
        {
            c = ( a * evaluateFunc(b) - b * evaluateFunc(a) ) / ( evaluateFunc(b) - evaluateFunc(a) );
            if(evaluateFunc(c) == 0)
                break;
            else if(evaluateFunc(a) * evaluateFunc(c) < 0)
            {
                b = c;
            }
            else
                a = c;
        }
    }

    cout << "Root: " << c;

    return 21;
}
