/*By considering the terms in the Fibonacci sequence whose values do not exceed four million, 
find the sum of the even-valued terms.
Considered max value to 1000, due to restrictions of integer data type*/

#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int first = 0;
    int second = 1;
    int third;

    while ((third = first + second) < 1000)
    {
        if (third % 2 == 0)
            sum += third;
        first = second;
        second = third;
    }
    cout << sum;
    return 0;
}
