// PROGRAM MENGHITUNG JUMLAH HURUF -'ALFEUS MARTINUS'

#include <iostream>
using namespace std;

int main(){
    string pertama;
    string kedua;

        cout << "Inputkan Kata Pertama Anda \t\t: ";
        getline(cin, pertama);

        cout << "Inputkan Kata Kedua Anda \t\t: ";
        getline(cin, kedua);

    int first = pertama.length();
    int seccond = kedua.length();
        cout << "==================================================== \n";
        cout << "Jumlah Huruf \t\t\t\t: "<< first+seccond << endl;

    cin.get();
    return 0;
}