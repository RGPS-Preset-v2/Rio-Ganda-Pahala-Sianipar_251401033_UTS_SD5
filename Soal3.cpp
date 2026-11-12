// Soal : Buatlah program C++ menggunakan struktur Stack berbasis Array untuk mengecek apakah sebuah kata merupakan Palindrom. 
// Alur kerja program: 
// -	User memasukkan sebuah kata (tanpa spasi). 
// -	Masukkan setiap huruf dari kata tersebut ke dalam Stack. 
// -	Keluarkan huruf dari Stack satu per satu untuk membentuk kata yang terbalik. - Bandingkan kata yang terbalik tersebut dengan kata aslinya. Jika sama persis, cetak "Palindrom", jika berbeda cetak "Bukan Palindrom". 
#include <iostream>
using namespace std;

#include <iostream>
#include <string>
using namespace std;

#define MAX 100

class Stack {
private:
    char data[MAX];
    int top;

public:
    Stack() {
        top = -1;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == MAX - 1;
    }

    void push(char x) {
        if (!isFull()) {
            data[++top] = x;
        }
    }

    char pop() {
        if (!isEmpty()) {
            return data[top--];
        }
        return '\0';
    }
};

int main() {
    string kata, kataTerbalik = "";
    Stack s;

    cout << "Masukkan kata : ";
    cin >> kata;

    for (int i = 0; i < kata.length(); i++) {
        s.push(kata[i]);
    }

    while (!s.isEmpty()) {
        kataTerbalik += s.pop();
    }

    cout << "\nKata dibalik : " << kataTerbalik << endl;

    if (kata == kataTerbalik) {
        cout << "Kesimpulan : Kata ini adalah palindrom" << endl;
    } else {
        cout << "Kesimpulan : Bukan palindrom" << endl;
    }

    return 0;
}