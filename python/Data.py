""" Saya Raya Cahya Nurani NIM 2205714 mengerjakan
soal Latihan Praktikum dalam mata kuliah Desain Pemograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin """
 
class Data:

    __id = ""
    __nama = ""
    __bidang = ""
    __partai = ""

    def __init__(data, id = "", nama = "", bidang = "", partai = ""):
        data.__id = id
        data.__nama = nama
        data.__bidang = bidang
        data.__partai = partai

    #getter
        
    # get id 
    def get_id(data):
        return data.__id
    
    # get nama
    def get_nama(data):
        return data.__nama
    
    # get bidang
    def get_bidang(data):
        return data.__bidang
    
    # get partai
    def get_partai(data):
        return data.__partai

    # setter

    # set id
    def set_id(data, id):
        data.__id = id

    # set nama
    def set_nama(data, nama):
        data.__nama = nama

    # set bidang
    def set_bidang(data, bidang):
        data.__bidang = bidang

    # set partai
    def set_partai(data, partai):
        data.__partai = partai

    