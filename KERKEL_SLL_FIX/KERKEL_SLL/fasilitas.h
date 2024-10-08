#ifndef FASILITAS_H_INCLUDED
#define FASILITAS_H_INCLUDED

#include <iostream>

#define Nil NULL
#define first(L) ((L).first)
#define info(P) (P)->info
#define next(P) (P)->next

using namespace std;

struct fasilitas {
    string nama,tipe;
    int kapasitas;
};
typedef fasilitas infotype;
typedef struct elmList *adr;
struct elmList{
    infotype info;
    adr next;
};
struct List{
    adr first;
};


void create_list(List &L);
adr new_elemen(infotype data);
void insert_first(List &L, adr p);
void insert_last(List &L, adr p);
void insert_After(List &L, adr prec, adr p);
void Delete_First(List &L,adr p);
void Delete_Last(List &L,adr p);
void Delete_After(List &L, adr prec, adr p);
void Show(List &L);
void SortBy_Capacity(List &L);
adr SearchBy_Tipe(List &L,infotype data);
adr Cari_prec(List L , adr lokasi, adr P);


#endif // FASILITAS_H_INCLUDED
