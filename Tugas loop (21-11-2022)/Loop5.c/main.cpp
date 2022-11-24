#include <iostream>

using namespace std;

int main()
{   ////Tugas No 5s-M Faris Assami / A11.2022.14647-
    cout << "==============================================================" << endl;
    cout << " PROGRAM INI AKAN BERHENTI JIKA ANDA MENGINPUTKAN ANGKA : -99" << endl;
    cout << "==============================================================" << endl;

    int x;
    for(int x = 0; ;x++){
        cout << "masukkan angka : ";
        cin >> x;
        if(x == -99){
            cout << "keluar karena ankga -99";
            break;
        }
    }
    return 0;
}
