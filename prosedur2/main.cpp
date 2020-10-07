#include <iostream>//library input output
#include <string>//library string

using namespace std;//meringkas std program c++

void cetak_nama (string nama){ //membuat prosedur cetak nama dengan paramater nama bertipe data string
    cout<<"Nama : "<<nama<<endl; //menghasilkan output Nama yang sudah di inputkan
}
void cetak_nim(int nim){ //membuat prosedur cetak nim dengan paramater nim bertipe data int
    cout<<"NIM : "<<nim<<endl;//menghasilkan output Nim yang sudah di inputkan
}
void cetak_alamat(string jalan, string kota, string provinsi){//membuat prosedur cetak alamat dengan paramater jalan,kota,provinsi bertipe data string
    cout<<"Alamat : "<<jalan<<", "<<kota<<", "<<provinsi<<", Indonesia"; //menghasilkan output alamat yang sudah di inputkan
}

int main()//program utama C++
{
    string nama,jalan,kota,provinsi;//membuat var nama,jalan,kota,provinsi ber tipe data string
    int nim;//membuat var nama ber tipe data nim

    cout<<"Inputkan Nama : ";//menghasilkan output inputkan nama
    getline(cin,nama);//menyimpan inputan di var nama

    cout<<"Inputkan NIM : ";//menghasilkan output inputkan nim
    cin>>nim;//menyimpan inputan di var nim

    cout<<"Inputkan Jalan : ";//menghasilkan output inputkan jalan
    cin.ignore();//untuk mengakhiri cin
    getline(cin,jalan);//menyimpan inputan di var jalan

    cout<<"Inputkan Kota: ";//menghasilkan output inputkan kota
    cin>>kota;//menyimpan inputan di var kota

    cout<<"Inputkan Provinsi : ";//menghasilkan output inputkan provinsi
    cin>>provinsi;//menyimpan inputan di var provinsi

    cout<<"\n\n";//memberikan spasi
    cetak_nama(nama);//memanggil prosedur cetak nama dengaen paramater nama
    cetak_nim(nim);//memanggil prosedur cetak nim dengan paramater nim
    cetak_alamat(jalan,kota,provinsi);//memanggil prosedur cetak alamat dengan paramater jalan,kota, provinsi

    return 0;//mengembalikan fungsi
}
