#include <iostream>

using std::cout;
using std::endl;

int even = 2;
int  odd = 9;

bool case1_is_Even { (even * even) % 2 == 0 };

bool case2_is_Even { (odd * odd) % 2 == 0 };

bool case3_is_Even { (even * odd) % 2 == 0 };

int main()
{
    cout    <<  "Case 1 : " <<  (case1_is_Even? "even" : "odd") << endl
            <<  "Case 2 : " <<  (case2_is_Even? "even" : "odd") << endl
            <<  "Case 3 : " <<  (case3_is_Even? "even" : "odd") << endl;

    return 0;
}