import java.util.Scanner;
import java.util.ArrayList;


public class Main {

    public static void main(String[] args) {

        ArrayList<Data> dataList = new ArrayList<>();
        Scanner scanner = new Scanner(System.in);

        System.out.println("Masukkan jumlah yang akan dibuat : ");
        int n = scanner.nextInt();
        scanner.nextLine(); // Consume newline left-over

        for (int i = 0; i < n; i++) {
            System.out.print("Masukkan ID Nama Bidang Partai: ");
            String[] input = scanner.nextLine().split(" ");
            String id = input[0];
            String nama = input[1];
            String bidang = input[2];
            String partai = input[3];
            Data temp = new Data(id, nama, bidang, partai);
            dataList.add(temp);
        }

        while (true) {
            System.out.println("\nMenu:");
            System.out.println("1. Tambah Data");
            System.out.println("2. Edit Data");
            System.out.println("3. Hapus Data");
            System.out.println("4. Tampilkan Daftar");
            System.out.println("5. Keluar\n");

            System.out.print("Pilih menu: ");
            String pilihan = scanner.nextLine();

            switch (pilihan) {
                case "1":
                    System.out.print("Masukkan ID Nama Bidang Partai: ");
                    String[] input = scanner.nextLine().split(" ");
                    String id = input[0];
                    String nama = input[1];
                    String bidang = input[2];
                    String partai = input[3];
                    Data temp = new Data(id, nama, bidang, partai);
                    dataList.add(temp);
                    System.out.println("\nData berhasil ditambahkan!");
                    break;

                case "2":
                    System.out.print("Masukkan ID yang akan diubah: ");
                    String editId = scanner.nextLine();
                    for (Data data : dataList) {
                        if (data.getId().equals(editId)) {
                            System.out.print("Masukkan data baru (Nama Bidang Partai): ");
                            String[] newData = scanner.nextLine().split(" ");
                            data.setNama(newData[0]);
                            data.setBidang(newData[1]);
                            data.setPartai(newData[2]);
                            System.out.println("\nData berhasil diubah!");
                        }
                    }
                    break;

                case "3":
                    System.out.print("Masukkan ID yang akan dihapus: ");
                    String deleteId = scanner.nextLine();
                    dataList.removeIf(data -> data.getId().equals(deleteId));
                    System.out.println("\nData berhasil dihapus!");
                    break;

                case "4":
                    System.out.println("\nID    Nama    Bidang    Partai");

                    int idLength = 2; // Minimum length
                    int namaLength = 4; // Minimum length
                    int bidangLength = 6; // Minimum length
                    int partaiLength = 6; // Minimum length

                    for (Data data : dataList) {
                        idLength = Math.max(idLength, data.getId().length());
                        namaLength = Math.max(namaLength, data.getNama().length());
                        bidangLength = Math.max(bidangLength, data.getBidang().length());
                        partaiLength = Math.max(partaiLength, data.getPartai().length());
                    }

                    for (Data data : dataList) {
                        System.out.printf("%-" + idLength + "s   %-" + namaLength + "s   %-" + bidangLength + "s   %-" + partaiLength + "s%n",
                                data.getId(), data.getNama(), data.getBidang(), data.getPartai());
                    }
                    break;

                case "5":
                    System.out.println("\nKeluar dari menu, terima kasih!");
                    scanner.close();
                    return;

                default:
                    System.out.println("Pilihan tidak valid!");
            }
        }
    }
}
