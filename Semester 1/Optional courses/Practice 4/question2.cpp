#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

double convert_Binary(int x)
{
    double count = 0, output = 0;
    while (x > 0)
    {
        output += (x % 2) * pow(10, count);
        x /= 2;
        count++;
    }
    
    return output;
}

int main()
{
    int x;
    cin >> x;
    cout << "Binary: " << convert_Binary(x) << endl;

    return 0;
}