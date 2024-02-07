/*Saya Raya Cahya Nurani NIM 2205714 mengerjakan
soal Latihan Praktikum dalam mata kuliah Desain Pemograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin*/

//library
#include <iostream>
#include <string>

using namespace std;

// deklarasi kelas baru dengan, Data
class Data{

    /*Deklarasi empat variabel pribadi (private) dari kelas Data, yaitu id, nama, bidang, dan partai*/
    private:
        string id;
        string nama;
        string bidang;
        string partai;

    /*Konstruktor default untuk kelas Data yang menginisialisasi keempat variabel anggota dengan string kosong.*/
    public:
        Data(){
            this->id = "";
            this->nama = "";
            this->bidang = "";
            this->partai = "";
        }
    
        Data(string id, string nama, string bidang, string partai){
            this->id = id;
            this->nama = nama;
            this->bidang = bidang;
            this->partai = partai;
        }
        //Fungsi get_id() yang mengembalikan nilai dari variabel anggota id
        string get_id(){
            return this->id;
        }
        //Fungsi get_nama() yang mengembalikan nilai dari variabel anggota nama.
        string get_nama(){
            return this->nama;
        }
        //Fungsi get_bidang() yang mengembalikan nilai dari variabel anggota bidang
        string get_bidang(){
            return this->bidang;
        }
        //Fungsi get_partai() yang mengembalikan nilai dari variabel anggota partai
        string get_partai(){
            return this->partai;
        }

        //Fungsi set_id() yang mengatur nilai variabel anggota id sesuai dengan argumen yang diberikan
        void set_id(string id){
            this->id = id;
        }
        //Fungsi set_nama() yang mengatur nilai variabel anggota nama sesuai dengan argumen yang diberikan
        void set_nama(string nama){
            this->nama = nama;
        }
        //Fungsi set_bidang() yang mengatur nilai variabel anggota bidang sesuai dengan argumen yang diberikan
        void set_bidang(string bidang){
            this->bidang = bidang;
        }
        //Fungsi set_partai() yang mengatur nilai variabel anggota partai sesuai dengan argumen yang diberikan
        void set_partai(string partai){
            this->partai = partai;
        }
        /*Destruktor kelas Data yang tidak melakukan apa pun karena tidak ada alokasi memori dinamis yang perlu dihapus secara manual*/
        ~Data(){

        }
        
};