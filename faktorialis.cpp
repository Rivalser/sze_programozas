#include <iostream>
using namespace std;

int faktorialis(int n)
{
    if (n == 0)
        return 1;
    return n * faktorialis(n - 1);
}

int main() {
    cout << faktorialis(5);
}
