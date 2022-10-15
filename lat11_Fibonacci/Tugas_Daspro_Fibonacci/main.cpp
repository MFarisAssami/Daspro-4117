#include <iostream>
using namespace std;

int main()
{
   cout << "Bilangan Fibonacci :" << endl;
   int f1 = 1, f2 = 1, fn;
    cout << endl;

    cout << f1 <<",";
    cout << f2 <<",";
    for(int i = 3;i <= 11; i++)
    {
        fn = f1 + f2;
        cout << fn;
        if(i != 11){
            cout << ",";
        }
        f1 = f2;
        f2 = fn;
    }
return 0;
}

