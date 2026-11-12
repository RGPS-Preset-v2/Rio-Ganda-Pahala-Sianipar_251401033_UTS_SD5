// Soal : Buatlah program C++ yang mendeklarasikan array 3 dimensi berukuran [2][3][4]. 
// -	Layer pertama diisi dengan bilangan Ganjil, dimulai dari 1 (1, 3, 5, 7, …). 
// -	Layer kedua diisi dengan bilangan kelipatan 5 (5, 10, 15, 20, ...). 
// -	Yang harus kamu lakukan adalah, hitung nilai maksimal dari elemen layer pertama dan layer keuda pada posisi indeks yang sama,
// lalu tampilkan hasilnya dalam bentuk tabel 2 dimensi bertipe integer (3x4). 


#include <iostream>
#include <iomanip>
using namespace std;

// int main() {
//     system("cls");
//     int m1[2][3][4]
int main() {
    int arr[3][3][4];
    int nilai = 2;

    
    // for (int i = 0; i < 2; i++) {
    //     cout << "Mahasiswa ke-" << i+1 << endl;
    //     for (int j = 0; j < 3; j++) {
    //         for (int k = 0; k < 3; k++) {
    //             cin >> m1[i][j][k];
    //         }
    //     }
    // }
    for(int lapis = 0; lapis < 3; lapis++) {
        for(int baris = 0; baris < 3; baris++) {
            for(int kolom = 0; kolom < 4; kolom++) {
                arr[lapis][baris][kolom] = nilai;
                nilai += 2; // naik 2 terus
            }
        }
    }

    cout << "Program Array 3 Dimensi [3][3][4]" << endl;
    cout << "Mengisi dengan kelipatan 2" << endl;
    for(int lapis = 0; lapis < 3; lapis++) {
        cout << "Lapis Ke-" << lapis + 1 << " [3 x 4]" << endl;
        cout << "|------|------|------|------|" << endl;

    for(int baris = 0; baris < 3; baris++) {
            cout << "|";
            for(int kolom = 0; kolom < 4; kolom++) {
                cout << setw(6) << arr[lapis][baris][kolom] << "|";
            }

            cout << endl;
            cout << "|------|------|------|------|" << endl;
        }
    cout << endl;
    }
    cout << endl;
return 0;
}