#include <iostream>
using namespace std;

int main() {
    //Tugas 2 :
    //Menukarkan dua variable dengan bantuan variable sementara
    int a = 25, b = 4, c, x, y;

    c = a; // Variable c diisi dengan variable a yang bernilai 10
    a = b; // Variable a diisi dengan variable b yang bernilai 12
    b = c; // Variable b diisi dengan variable c yang bernilai 10

    cout << "A: " << a << endl << "B: " <<b;

    //Menukarkan dua variable tanpa menggunakan variable sementara
    x = 2;
    y = 5;

    x = x+y; //7
    y = x-y; //2
    x = x-y; //5

    cout << "Menukarkan dua variable tanpa menggunakan variable sementara" <<endl;
    cout << "X: " << x << endl << "Y: " << y << endl;
    return 0;

}
