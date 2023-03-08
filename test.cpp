#include <iostream>     //header
using namespace std;

int main (){
    // input
    double Luas, P, L;                  // deklarasi
    cout <<"masukan panjang nya : ";    // cout == display
    cin >> P;                           // cin == accept
    cout <<"masukan luasnya nya : ";
    cin >> L;
    // proses
    Luas = P*L;                         // compute langsung di hapus
    // output
    cout <<"luasnya adalah :" << Luas;
}