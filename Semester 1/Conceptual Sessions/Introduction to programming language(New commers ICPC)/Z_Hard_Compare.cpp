#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
 
    if(b * log(a) > d * log(c))
        cout<<"YES"<<endl;
    else
        cout<<"NO\n";

    return 0;
}