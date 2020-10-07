#include <iostream>

using namespace std;

/* ---------FUNGSI----------
int s;
int hitung_keliling(int s){
    return 4*s;
}
int hitung_luas(int s){
    return s*s;
}
int masukan;
int main(){
    cout<<"Masukkan Panjang Sisi : ";
    cin>>s;
    cout<<"Keliling : "<<hitung_keliling(s)<<endl;
    cout<<"Luas : "<<hitung_luas(s)<<endl;
*/
int s;
void keliling_luas_persegi(int s){
    int luas = s*s;
    int keliling = 4*s;
    cout<<"Keliling : "<<keliling<<endl;
    cout<<"Luas : "<<luas<<endl;
}
int masukan;
int main(){
    cout<<"Masukkan panjang sisi : "<<endl;
    cin>>s;
    keliling_luas_persegi(s);

return 0;
}
