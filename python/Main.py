from Data import Data

llist = [] 
print("Masukkan jumlah yang akan dibuat : ")
n = int(input())
for i in range (n):
    id, nama, bidang, partai = input("Masukkan ID Nama Bidang Partai: ").split()
    temp = Data(id, nama, bidang, partai)
    llist.append(temp)

while True:
        print("\nMenu:")
        print("1. Tambah Data")
        print("2. Edit Data")
        print("3. Hapus Data")
        print("4. Tampilkan Daftar")
        print("5. Keluar\n")

        pilihan = input("Pilih menu: ")

        if pilihan == '1':
            id, nama, bidang, partai = input("Masukkan ID Nama Bidang Partai: ").split()
            temp = Data(id, nama, bidang, partai)
            llist.append(temp)
            print("\nData berhasil di tambahkan!")

        elif pilihan == '2':
            id = input("Masukkan ID yang akan diubah: ")
            for data in llist:
                if data.get_id() == id:
                    nama, bidang, partai = input("Masukkan data baru (Nama Bidang Partai): ").split()
                    data.set_nama(nama)
                    data.set_bidang(bidang)
                    data.set_partai(partai)
 
                print("\nData berhasil di edit!")
        elif pilihan == '3':
            id = input("Masukkan ID yang akan dihapus: ")
            llist = [data for data in llist if data.get_id() != id]
            print("\nData sudah di hapus!")
            
        elif pilihan == '4':
            print("{:<5} {:<10} {:<10} {:<10}".format("ID", "Nama", "Bidang", "Partai"))
            for data in llist:
                print("{:<5} {:<10} {:<10} {:<10}".format(data.get_id(), data.get_nama(), data.get_bidang(), data.get_partai()))

        elif pilihan == '5':
            print("Keluar dari menu, terima kasih!")
            
            break