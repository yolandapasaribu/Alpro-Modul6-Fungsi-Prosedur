#include <iostream>//library input output

using namespace std;//meringkas std pada program

//void Nama_Prosedur (parameter){proses}
void hitung (float x, float y){ //membuat prosedur hitung dengan paramater x dan y
    float hasil_kali=x*y;//melakukan proses hasil kali x dan y
    float hasil_bagi=x/y;//melakukan proses hasil bagi x dan y

    cout << "Hasil Kali " <<x<<" * "<<y<<" = "<<hasil_kali<<endl;//menghasilkan output hasil kali x dan y
    cout << "Hasil Bagi " <<x<<" / "<<y<<" = "<<hasil_bagi<<endl;//menghasilkan output hasil bagi x dan y

}
int main()//program utama c++
{
    float x,y;//membuat var x dan y dengan tipe data float

    cout<<"Inputkan X : "; // menghasilkan output inputan x
    cin>>x;//menyimpan inputan di var x
    cout<<"Inputkan Y : ";// menghasilkan output inputan y
    cin>>y;//menyimpan inputan di var y

    hitung(x,y); //menghasilkan output prosedur
    return 0;//mengembalikan fungsi
}
