// Soal : Buatlah program pembentuk Binary Search Tree dinamis dengan aturan: 
// -	Angka pertama menjadi root. 
// -	Angka lebih kecil ke kiri, lebih besar ke kanan. 
// -	Input berhenti saat memasukkan angka 0. 
// Setelah Tree terbentuk, tampilkan traversal Post-Order (Kiri-Kanan-Akar). Lalu, tambahkan kode untuk mencari dan mencetak Nilai Terbesar di dalam tree tersebut tanpa harus membaca ulang data, beserta menampilkan nilai dari Root. (Clue: Manfaatkan pointer yang ditelusuri terus ke kanan mentok untuk mencari nilai terbesar). 
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* insert(Node* root, int value) {
    if (root == NULL) {
        return createNode(value);
    }
    
    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right = insert(root->right, value);
    }
    
    return root;
}
void inOrder(Node* root) {
    if (root != NULL) {
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
}
int main() {
    Node* root = NULL;
    
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

   cout << "Hasil In-Order Traversal (Sorting Kiri-Root-Kanan): \n";
    inOrder(root);
    cout << "\n";

    return 0;
}