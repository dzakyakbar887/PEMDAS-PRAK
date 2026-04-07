#include <iostream>
using namespace std;

struct detailalamat;
{
    string desa;
    string kota;
};

struct orang 
{
    string nama;
    detailalamat alamat;
    int umur;
};

int main ()
{
    //deklarasi variabel struct
    orang mhs;
    //mengisi data
    cout << "Isikan data nama : ";
    getline(cin, mhs.nama);
    cout << "Isikan data desa : ";
    getline(cin, mhs.alamat.desa);
    cout << "Isikan data kota : ";
    getline(cin, mhs.alamat.kota);
    cout << "Isikan data umur : ";
    cin >> mhs.umur;
     cout << endl;

    cout << "Data tampil" << endl;
    cout << "Nama : " << mhs.nama << endl;
    cout << "Desa : " << mhs.alamat.desa << endl;
    cout << "Kota : " << mhs.alamat.kota << endl;
    cout << "Umur : " << mhs.umur << endl;
}
