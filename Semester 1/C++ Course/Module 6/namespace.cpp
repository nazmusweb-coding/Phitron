#include <iostream>
#include <string>

namespace mystd
{
    using std::cout;
    using std::cin;
    using std::endl;
    using std::string;
    using std::getline;
}

using namespace mystd;

int main(void)
{
    string message;
    getline(cin, message);

    cout << message << endl;

    return 0;
}