<?php

require('Data.php');

// add data 
$Data[0] = new Data("111", "raya", "pendidikan", "cihuyy", "tes1.jpg");
$Data[1] = new Data("222", "cahya", "ekonomi", "apatuh", "tes2.jpg");

foreach ($Data as $a) {
    echo
    "<img src='" . $a->get_foto() . "'style='width:100px'>" . "<br/>";
    echo "ID        : " . $a->get_id() . "<br>";
    echo "Nama      : " . $a->get_nama() . "<br>";
    echo "Bidang    : " . $a->get_bidang() . "<br>";
    echo "Partai    : " . $a->get_partai() . "<br>";
    echo "<br>";
}
//edit data 
$Data[0] = new Data("222", "biyoo", "rusuh", "dokja", "tes2.jpg");
echo "Data sesudah dirubah!";
echo "<br>";
foreach ($Data as $a) {
    echo
    "<img src='" . $a->get_foto() . "'style='width:100px'>" . "<br/>";
    echo "ID        : " . $a->get_id() . "<br>";
    echo "Nama      : " . $a->get_nama() . "<br>";
    echo "Bidang    : " . $a->get_bidang() . "<br>";
    echo "Partai    : " . $a->get_partai() . "<br>";
    echo "<br>";
}
//hapus data
array_splice($Data, 1, 1);

echo "Data sesudah dihapus!";
echo "<br>";
foreach ($Data as $a) {
    echo
    "<img src='" . $a->get_foto() . "'style='width:100px'>" . "<br/>";
    echo "ID        : " . $a->get_id() . "<br>";
    echo "Nama      : " . $a->get_nama() . "<br>";
    echo "Bidang    : " . $a->get_bidang() . "<br>";
    echo "Partai    : " . $a->get_partai() . "<br>";
    echo "<br>";
}