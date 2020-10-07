#include <iostream>//library input output

using namespace std;//meringkas std pada program

float fungsi_bagi(float x, float y){ //membuat fungsi bagi dengan paramater x dan y
    return x/y;//mengembalikan proses x dibagi y
}

int main()//program utama c++
{
    float x,y;//membuat var x dan y dengan tipedata float

    cout<<"Inputkan nilai X : ";//menghasilkan output inputkan nilai x
    cin>>x;//menyimpan inputan di var x
    cout<<"Inputkan nilai Y : ";//menghasilkan output inputkan nilai x
    cin>>y;//menyimpan inputan di var y

    cout<<x<<" / "<<y<<" = "<<fungsi_bagi(x,y);//memanggil fungsi bagi x dan y
    return 0;
}
