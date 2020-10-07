#include <iostream>

using namespace std;

string ganjil_genap (int bil)
{
    if(bil%2==1){
        return "ganjil";
    }else if(bil%2==0){
        return "genap";
    }

}

int main(){
    cout<<"Masukkan Bilangan: ";
    cin>>bil;
    nilai(bil);
return 0;
}
