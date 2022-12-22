#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int sumDigits(int number)
{
    int count = 0; // store the digit count of the number
    int temp = number;

    // if (number == 0) 
    // {
    //     count = 1;
    // }
    // else
    // {
        while (temp > 0)
            {
                count++;
                temp /= 10;
            }
    // }

    // number = 13579, count = 5, 10^{count-1}
    int divisor = 1;
    for (int i = 0; i < count - 1; i++)
    {
        divisor *= 10;
    }

    int sum = 0;
    while (number > 0)
    {
        int digit = number / divisor;
        sum += digit;
        number %= divisor;
        divisor /= 10;
    }
    return sum;

    // cout << count << endl; // output count to test if its correct
}

int main()
{
    int number = 0;
    cout << "Enter a nonnegative integer: ";
    cin >> number;
    // sumDigits(number); // test for count output
    cout << "The sum of " << number << "'s digits is " << sumDigits(number) << endl;

    return 0;
}