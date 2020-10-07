#include <iostream>
//prosedu = bisa lebih dari 1 perintah
using namespace std;

float volume_bola(float r, const float phi=3.14){ //membuat fungsi bagi dengan paramater x dan y
    return 4/3*phi*r*r*r;}
float luas_lingkaran(float r, const float phi=3.14 ){ //membuat fungsi bagi dengan paramater x dan y
    return phi*r*r;//mengembalikan proses x dibagi y
}

int main()//program utama c++
{

    float d=27;
    float r;
    r=d/2;
    cout<<"Volume : "<<volume_bola(r)<<endl;
    cout<<"Luas : "<<luas_lingkaran(r)<<endl;

}


