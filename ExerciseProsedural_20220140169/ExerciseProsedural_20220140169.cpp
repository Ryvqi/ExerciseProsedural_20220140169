#include <iostream>
using namespace std;

// fungsi untuk mengecek apakah seorang kandidat diterima atau tidak
bool isAccepted(float math, float eng) {
    float avg = (math + eng) / 2.0;

    if (avg < 70.0 && math < 80.0) {
        return false;
    }

    return true;
}

int main() {
    string names[20];
    float nilai_matematika[20], nilai_bahasa_inggris[20];

    // input data kandidat
    for (int i = 0; i < 20; i++) {
        cout << "Masukkan nama kandidat ke-" << i + 1 << ": ";
        getline(cin, names[i]);

        cout << "Masukkan nilai matematika: ";
        cin >> nilai_matematika[i];

        cout << "Masukkan nilai bahasa Inggris: ";
        cin >> nilai_bahasa_inggris[i];

        // membersihkan buffer input
        cin.ignore();
    }

    // menampilkan kandidat yang diterima dan tidak diterima
    cout << "\n\n";
    cout << "Daftar kandidat yang diterima:\n";
    cout << "-----------------------------\n";
    cout << "Nama\t\tStatus\n";
    cout << "----\t\t------\n";

    int acceptedCount = 0;
    for (int i = 0; i < 20; i++) {
        bool accepted = isAccepted(nilai_matematika[i], nilai_bahasa_inggris[i]);

        if (accepted) {
            cout << names[i] << "\t\tDiterima\n";
            acceptedCount++;
        }
        else {
            cout << names[i] << "\t\tTidak diterima\n";
        }
    }

    // menampilkan jumlah kandidat yang diterima dan tidak diterima
    cout << "\n\n";
    cout << "Jumlah kandidat yang diterima: " << acceptedCount << endl;
    cout << "Jumlah kandidat yang tidak diterima: " << 20 - acceptedCount << endl;

    return 0;
}

