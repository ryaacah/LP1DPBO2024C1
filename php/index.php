<?php

require('Data.php');

// add data 
$Data[0] = new Data("111", "raya", "pendidikan", "cihuyy", "tes1.jpg");
$Data[1] = new Data("222", "cahya", "ekonomi", "apatuh", "tes2.jpg");

echo "ID |  Nama  |  Bidang |  Partai |  Profil |" . "<br/>";

foreach ($Data as $a) {
    echo $a->get_id(). " | " ;
    echo $a->get_nama() . " | ";
    echo $a->get_bidang() . " | ";
    echo $a->get_partai() . " | ";
    echo
    "<img src='" . $a->get_foto() . "'style='width:100px'>" . "<br/>";
    echo "<br>";
}
//edit data 
$Data[0] = new Data("111", "biyoo", "rusuh", "dokja", "tes1.jpg");
echo "Data sesudah dirubah!";
echo "<br>";
foreach ($Data as $a) {
    echo $a->get_id(). " | " ;
    echo $a->get_nama() . " | ";
    echo $a->get_bidang() . " | ";
    echo $a->get_partai() . " | ";
    echo
    "<img src='" . $a->get_foto() . "'style='width:100px'>" . "<br/>";
    echo "<br>";
}
//hapus data
array_splice($Data, 1, 1);

echo "Data sesudah dihapus!";
echo "<br>";
foreach ($Data as $a) {
   echo $a->get_id(). " | " ;
    echo $a->get_nama() . " | ";
    echo $a->get_bidang() . " | ";
    echo $a->get_partai() . " | ";
    echo
    "<img src='" . $a->get_foto() . "'style='width:100px'>" . "<br/>";
    echo "<br>";
}
