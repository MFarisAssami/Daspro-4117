#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    //cout << "Hello World" << endl;
    //printf("Hello!");
/*
//ini bahasa iostream
    int a;
    cout << "Masukkan Angka: ";
    cin >> a;
    cout << "Angka Anda: " << a<< endl;

//ini bahasa stdio
    printf("\nMasukkan Angka Kedua: ");
    scanf("%d", &a);
    printf("Angka Kedua: %d", a);
 */

/*        int a, b, c, hasil;

        int x;
        int y;
        int z;

        a= 3;
        b= 3;
        c= 4;

    //cara 1
    cout << a + b + c << endl;

    //cara 2
    hasil=a + b + c;
    cout << "hasil: " << hasil << endl;
*/

    //cara 3 memakai phi 22/7
    cout << "Luas lingkaran phi:22/7\nr1:10\nr2:10" << endl;
    cout << "Rumus Luas Lingkaran adalah (phi*r*r)/7" << endl;
    float phi, r1, r2, hasil1;
    phi= 22;
    r1= 10;
    r2= 10;
    hasil1= (phi * r1 * r2) / 7;
    cout << "(22*10*10)/7 : " << hasil1 << endl;

    //cara 4 memakai phi 3.14
    cout << "\nLuas Lingkaran phi1:3.14\nr3:9\nr4:9" << endl;
    cout << "Rumus Luas Lingkaran adalah phi1*r3*r4" << endl;
    float phi1, r3, r4, hasil2 ;
    phi1= 3.14;
    r3= 9;
    r4= 9;
    hasil2= (phi1*r3*r4);
    cout << "3.14*9*9 : " << hasil2  << endl;



    return 0;
}
