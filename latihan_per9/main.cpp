#include <iostream>

using namespace std;

int main()
{
    int x;

    do {
        if (x % 5 == 0) {
        cout << x << endl;
        }
        x++;
    }while (x<50);

    return 0;
}
