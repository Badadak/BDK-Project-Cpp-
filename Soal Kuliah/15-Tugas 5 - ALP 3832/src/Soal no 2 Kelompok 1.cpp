
/*
    Punya Kelompok 1 
    Salfa dan Lego
*/

#include <iostream>

using namespace std;

double persentase (double status, int n) { //biar mudah mencari persentasenya
    return (status/n) * 100;
}

int main () {

    cout << "\t====== Survey Produk ======\n" << endl;

    // Produk 

    cout << "''''''''''''''''''''''''''" << endl;
    cout << "Nama Produk : Tesla 2.1" << endl;
    cout << "Besar CC    : 400 km/jam" << endl;
    cout << "Warna       : Merah" << endl;
    cout << "''''''''''''''''''''''''''" << endl << endl;

    int data_ke = 0;
    char kualitas, lanjut;

    //Pengolahan data
    
    int bagus = 0, tidak_bagus = 0, no_comment = 0;

    // Mensurvey  

    while (true) {

        cout << "\n----- Bagaimana kualitas produknya -----" << endl;
        cout << "v = bagus" << endl;
        cout << "t = tidak bagus" << endl;
        cout << "n = no comment" << endl;
        
        cout << "\nInput kamu : ";
        cin >> kualitas;

        if (kualitas == 'v' || kualitas == 'V') {
            bagus += 1;
        }
        else if (kualitas == 't' || kualitas == 'T') {
            tidak_bagus += 1;
        }
        else if (kualitas == 'n' || kualitas == 'N') {
            no_comment += 1;
        }
        else {
            cout << "Pesan Error : Input tidak tersedia!\n" << endl;
        }

        data_ke ++;

        cout << "Lanjut kasih nilai ? (y/n) : ";
        cin >> lanjut;

        if (lanjut != 'y') {
            break;
        }

    }

    // Menampilkan data persentase

    cout << "\n\n^^^^^^ Persentase Survey ^^^^^^\n" << endl; 

    cout << "Ada " << bagus << " bagus\t   ---> " << persentase (bagus, data_ke) << "%" << endl;
    cout << "Ada " << tidak_bagus << " tidak bagus  ---> " << persentase (tidak_bagus, data_ke) << "%" << endl;
    cout << "Ada " << no_comment << " no comment   ---> " << persentase (no_comment, data_ke) << "%" << endl;

    cout << endl;

    return 0;

}