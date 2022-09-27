#include <iostream>

using namespace std;

int main()

{
    int Jurusan;
  cout << "Jurusan Kuliah\n1. Teknik Informatika\n2. Sistem Informasi\n3. DKV" << endl;
  cout << "Masukkan Jurusan anda : ";
  cin >> Jurusan;

    if (Jurusan == 1) {
        cout << "Anda memilih Jurusan Teknik Informatika" << endl;
    }

    else if (Jurusan == 2) {
        cout << "Anda memilih Jurusan Sistem Infomasi" << endl;
    }

    else if (Jurusan == 3) {
        cout << "Anda memilih Jurusan DKV" << endl;
    }



    return 0;
}
