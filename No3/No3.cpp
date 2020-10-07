#include <iostream>
#include <math.h>

using namespace std;
void hitung(float x, float y, float z){
    if(x==1){
        cout<<"Hasil Penjumlahan :"<<(y+z)<<endl;
    }
    else if(x==2){
        cout<<"Hasil Perkalian : "<<(y*z)<<endl;
    }
    else if(x==3){
        cout<<"Hasil Pembagian : "<<(y/z)<<endl;
    }
    else if(x==4){
        cout<<"Hasil Pengurangan : "<<(y-z)<<endl;
    }
    else if(x==5){
        cout<<"Hasil Pangkat  : "<<pow(y,z)<<endl;
    }
    else{
        cout<<"Maaf pilihan anda tidak tersedia"<<endl;
    }
}
int main()
{
    float a,b,c;
    cout<<"1. Penjumlahan"<<endl;
    cout<<"2. Perkalian"<<endl;
    cout<<"3. Pembagian"<<endl;
    cout<<"4. Pengurangan"<<endl;
    cout<<"5. Pangkat"<<endl;
    cout<<"\n";

    cout<<"Masukkan Pilihan Anda : ";
    cin>>a;
    cout<<"\n";
    cout<<"Masukkan Bilangan Pertama : ";
    cin>>b;
    cout<<"Masuukkan Bilangan Kedua : ";
    cin>>c;

    hitung(a,b,c);
    cout<<"\n";
    return main();
}
