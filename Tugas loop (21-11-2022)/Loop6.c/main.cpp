#include <iostream>
#include <vector>

using namespace std;

int main()
{   //Tugas No 6-M Faris Assami / A11.2022.14647-
    vector<int> num ={};
    int min = 0;
    int max = 0;

    int x = 0;
    while(x != -99){
        cin >> x;
        num.push_back(x);
    }
    if(num.size( ) > 0){
        min = num[0];
        max = num[0];

            for(int i = 1; i < num.size( ) - 1; i++){
                if(min > num[i]){
                    min = num[i];
                }
                else if(max < num[i]){
                    max = num[i];
                }
            }
    }
    cout << "Maximum : " << max << endl;
    cout << "minimum : " << min << endl;
    return 0;
}
