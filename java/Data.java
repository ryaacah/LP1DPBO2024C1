class Data {
    private String id;
    private String nama;
    private String bidang;
    private String partai;

    public Data(String id, String nama, String bidang, String partai) {
        this.id = id;
        this.nama = nama;
        this.bidang = bidang;
        this.partai = partai;
    }

    // Getter methods
    public String getId() {
        return id;
    }

    public String getNama() {
        return nama;
    }

    public String getBidang() {
        return bidang;
    }

    public String getPartai() {
        return partai;
    }

    // Setter methods
    public void setId(String id) {
        this.id = id;
    }

    public void setNama(String nama) {
        this.nama = nama;
    }

    public void setBidang(String bidang) {
        this.bidang = bidang;
    }

    public void setPartai(String partai) {
        this.partai = partai;
    }
}