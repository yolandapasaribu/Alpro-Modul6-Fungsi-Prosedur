#include <iostream>//library input output
//Fungsi : hanya bisa 1 perintah dan spesifik

using namespace std;//meringkas std program c++

int fungsi_kuadrat(int angka){//membuat fungsi kuadrat dengan parameter int angka
    return angka*angka; //mengembalikan ke proses angka*angka
}

int main()//program utama c++
{
    int angka=4;//membuat variabel angka dengan nilai 4
    int kuadrat_angka=fungsi_kuadrat(angka);//membuat variabel kuadrat_angka sama dengan fungsi kuadrat di atas

    cout<<angka<<"^2 = "<<kuadrat_angka;//menghasilkan output angka^2 dan menghasilkan 16
    return 0;//mengembalikan fungsi
}
