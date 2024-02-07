/*Saya Raya Cahya Nurani NIM 2205714 mengerjakan
soal Latihan Praktikum dalam mata kuliah Desain Pemograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin*/

//library
#include <bits/stdc++.h>
#include <iomanip>
#include "Data.cpp"

using namespace std;

int main() {

    //objek temp, kelas java
    Data temp;  

    //deklar musuh
    int choice;
    int i, n = 0;
    string id;
    string nama;
    string bidang;
    string partai;

    //Membuat objek llist dari kelas list yang menyimpan objek-objek dari kelas Data
    list<Data> llist;

    //Meminta input berupa jumlah data yang akan dimasukkan
    cin >> n;
    //Loop untuk memasukkan data sebanyak n kali
    for(i = 0; i < n; i++){
        
        // Data temp;

        cin >> id >> nama >> bidang >> partai;
        //Membaca input ID, nama, bidang, dan partai dari pengguna.

        temp.set_id(id);
        temp.set_nama(nama);
        temp.set_bidang(bidang);
        temp.set_partai(partai);

        llist.push_back(temp);

        /*Mengatur nilai atribut objek temp sesuai dengan input dan kemudian menambahkan temp ke dalam list llist*/
    }

    i = 0;
    cout  << "ID" << " | " << "Nama" << " | " << "Bidang" << " | " << "Partai" << '\n';
    for(list<Data>::iterator it = llist.begin(); it != llist.end(); it++){
        cout << it->get_id() << " | " << it->get_nama() << " | " << it->get_bidang() << " | " << it->get_partai() << '\n';
        i++;
    }

    /*Memulai loop do-while untuk menampilkan menu dan mengelola pilihan pengguna*/
    do {
        cout << "Menu: \n";
        cout << "1. Tambah Data\n";
        cout << "2. Hapus Data\n";
        cout << "3. Ubah Data\n";
        cout << "4. Tampilkan Data\n";
        cout << "5. Keluar\n";
        cout << "Pilih: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Masukkan ID Nama Bidang Partai: ";
                cin >> id >> nama >> bidang >> partai;

                
                temp.set_id(id);
                temp.set_nama(nama);
                temp.set_bidang(bidang);
                temp.set_partai(partai);

                llist.push_back(temp);
                break;

            case 2:
                cout << "Masukkan ID yang akan dihapus: ";
                cin >> id;

                for (auto it = llist.begin(); it != llist.end(); ) {
                    if (it->get_id() == id) {
                        it = llist.erase(it);
                    } else {
                        ++it;
                    }
                }
                break;

            case 3:
                cout << "Masukkan ID yang akan diubah: ";
                cin >> id;

                for (auto it = llist.begin(); it != llist.end(); ++it) {
                    if (it->get_id() == id) {
                        cout << "Masukkan data baru (Nama Bidang Partai): ";
                        cin >> nama >> bidang >> partai;

                        it->set_nama(nama);
                        it->set_bidang(bidang);
                        it->set_partai(partai);
                    }
                }
                break;

            case 4:
                // Pendekatran diri pada allah
                // for (auto it = llist.begin(); it != llist.end(); ++it) {
                //     cout << it->get_id() << " | " << it->get_nama() << " | " << it->get_bidang() << " | " << it->get_partai() << '\n';
                // }
                // break;

                cout << setw(5) << "ID" << setw(10) << "Nama" << setw(10) << "Bidang" << setw(10) << "Partai" << '\n'; // Membuat garis horizontal
                cout << setfill(' '); 
                for (auto it = llist.begin(); it != llist.end(); ++it) {
                    cout << setw(5) << it->get_id() << setw(10) << it->get_nama() << setw(10) << it->get_bidang() << setw(10) << it->get_partai() << '\n';
                }
                break;

            case 5:
                cout << "Keluar 2 program. Terimakasih\n";
                break;

            default:
                cout << "Pilihan tidak valid. Silakan coba lagi.\n";
                break;
        }

    } while (choice != 5);

    return 0;
}