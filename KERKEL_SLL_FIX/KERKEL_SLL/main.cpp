#include <iostream>
#include "fasilitas.h"

using namespace std;

int main()
{
    List RAI;
    infotype data1,data2,data3,data4,data5,data6;
    adr P,prec,lokasi;

    create_list(RAI);

    cout << "masukkan nama fasilitas: " << endl;
    cin >> (data1.nama);
    cout << "masukkan tipe fasilitas: " << endl;
    cin >> (data1.tipe);
    cout << "masukkan kapasitas dari fasilitas: " << endl;
    cin >> (data1.kapasitas);

    P = new_elemen(data1);

    insert_first(RAI,P);

    cout << "masukkan nama fasilitas: " << endl;
    cin >> (data2.nama);
    cout << "masukkan tipe fasilitas: " << endl;
    cin >> (data2.tipe);
    cout << "masukkan kapasitas dari fasilitas: " << endl;
    cin >> (data2.kapasitas);

    P = new_elemen(data2);

    insert_last(RAI,P);

    cout << "masukkan nama fasilitas: " << endl;
    cin >> (data3.nama);
    cout << "masukkan tipe fasilitas: " << endl;
    cin >> (data3.tipe);
    cout << "masukkan kapasitas dari fasilitas: " << endl;
    cin >> (data3.kapasitas);

    P = new_elemen(data3);

    insert_first(RAI,P);

    cout << "masukkan nama fasilitas: " << endl;
    cin >> (data4.nama);
    cout << "masukkan tipe fasilitas: " << endl;
    cin >> (data4.tipe);
    cout << "masukkan kapasitas dari fasilitas: " << endl;
    cin >> (data4.kapasitas);

    P = new_elemen(data4);

    insert_last(RAI,P);

    cout << "masukkan nama fasilitas: " << endl;
    cin >> (data5.nama);
    cout << "masukkan tipe fasilitas: " << endl;
    cin >> (data5.tipe);
    cout << "masukkan kapasitas dari fasilitas: " << endl;
    cin >> (data5.kapasitas);

    P = new_elemen(data5);

    prec = SearchBy_Tipe(RAI,data4);

    insert_After(RAI,prec,P);

    cout << "masukkan nama fasilitas: " << endl;
    cin >> (data6.nama);
    cout << "masukkan tipe fasilitas: " << endl;
    cin >> (data6.tipe);
    cout << "masukkan kapasitas dari fasilitas: " << endl;
    cin >> (data6.kapasitas);

    P = new_elemen(data6);

    prec = SearchBy_Tipe(RAI,data4);

    insert_After(RAI,prec,P);
    cout << endl << endl;

    cout << "Data Sebelum Di Sorting dan Delete :" << endl;
    Show(RAI);
    cout << endl << endl <<endl;

    cout << "Data Sesudah Di Sorting dan Delete :" << endl;
    //delete data kedua
    lokasi = (SearchBy_Tipe(RAI,data2));

    prec = Cari_prec(RAI,lokasi,P);

    Delete_After(RAI,prec,P);

    //delete data keenam
    lokasi = (SearchBy_Tipe(RAI,data6));

    prec = Cari_prec(RAI,lokasi,P);

    Delete_After(RAI,prec,P);

    //sorting
    SortBy_Capacity(RAI);

    Show(RAI);


}
