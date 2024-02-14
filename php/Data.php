<?php

class Data {
    private $id;
    private $nama;
    private $bidang;
    private $partai;
    private $foto;

    public function __construct($id = "", $nama = "", $bidang = "", $partai = "", $foto = "") {
        $this->id = $id;
        $this->nama = $nama;
        $this->bidang = $bidang;
        $this->partai = $partai;
        $this->foto = $foto;
    }

    // Setter

    // set id
    public function set_id($id) {
        $this->id = $id;
    }

    // set nama
    public function set_nama($nama) {
        $this->nama = $nama;
    }

    // set bidang
    public function set_bidang($bidang) {
        $this->bidang = $bidang;
    }

    // set partai
    public function set_partai($partai) {
        $this->partai = $partai;
    }

    // set foto
    public function set_foto($foto) {
        $this->foto = $foto;
    }
    
    // Getter

    // get id
    public function get_id() {
        return $this->id;
    }

    // get nama
    public function get_nama() {
        return $this->nama;
    }

    // get bidang
    public function get_bidang() {
        return $this->bidang;
    }

    // get partai
    public function get_partai() {
        return $this->partai;
    }

    // get foto
    public function get_foto() {
        return $this->foto;
    }

}


?>
