#include <iostream>
#include "fasilitas.h"

void create_list(List &L){
    first(L) = Nil;
}

adr new_elemen(infotype data){
    adr P;
    P = new elmList;
    info(P) = data;
    next(P) = Nil;
    return P;
}

void insert_first(List &L, adr P){
    if (first(L) == Nil){
        first(L) = P;
    }else{
       next(P) = first(L);
       first(L) = P;
    }
}

void insert_last(List &L,adr P){
    adr Q;
    if (first(L) == Nil){
        first(L) = P;
    }else{
        Q = first(L);
        while (next(Q) != Nil){
            Q = next(Q);
        }
        next(Q) = P;
    }
}

void insert_After(List &L, adr prec,adr P){
    if (first(L) == Nil){
        first(L) = P;
    }else{
        next(P) = next(prec);
        next(prec) = P;
    }
}

void Delete_First(List &L,adr P){
    if (first(L) == Nil){
        P = Nil;
    }else if (next(first(L)) == Nil){
        P = first(L);
        first(L) = Nil;
    }else{
        P = first(L);
        first(L) = next(first(L));
        next(P) = Nil;
    }
}

void Delete_Last(List &L, adr P){
    adr Q;
    if (first(L) == Nil){
        P = Nil;
    }else if (next(first(L)) == Nil){
        P = first(L);
        first(L) = Nil;
    }else{
        Q = first(L);
        while (next(next(Q)) != Nil){
            Q = next(Q);
        }
        P = next(Q);
        next(Q) = Nil;

    }
}

void Delete_After(List &L, adr prec, adr P){
    if ((first(L) == Nil)||(next(prec)==Nil)){
        P = Nil;
    }else{
        P = next(prec);
        next(prec) = next(P);
        next(P) = Nil;
    }
}

void Show(List &L){
    adr Q;
    Q = first(L);
    if (first(L) == Nil){
        cout << "List Kosong";
    }else{
        while (Q != Nil){
            cout << info(Q).nama << " " << info(Q).tipe << " " <<info(Q).kapasitas << endl;
            Q = next(Q);
        }
    }
}

void SortBy_Capacity(List &L){
    adr SL,P,Q;
    if ((first(L) != Nil) & (next(first(L))!=Nil)){
        SL = Nil;
        P = first(L);
        while (P != Nil){
            first(L) = next(P);
            if ((SL == Nil) || (info(SL).kapasitas > info(P).kapasitas)){
                next(P) = SL;
                SL = P;
            }else{
                Q = SL;
                while ((next(Q)!= Nil) &&(info(next(Q)).kapasitas < info(P).kapasitas)){
                    Q = next(Q);
                }
                next(P) = next(Q);
                next(Q) = P;
            }
            P = first(L);
            first(L) = SL;
        }
    }
}

adr SearchBy_Tipe(List &L , infotype data){
    adr Q;
    Q = first(L);
    while ((next(Q)!= Nil) && info(Q).tipe != data.tipe) {
        Q = next(Q);
    }
    if (info(Q).tipe == data.tipe){
        return Q;
    }else{
        return Nil;
    }
}

adr Cari_prec(List L , adr lokasi, adr P){
    P = first(L);
    while (info(next(P)).tipe != info(lokasi).tipe){
        P = next(P);
    }
    if (info(next(P)).tipe == info(lokasi).tipe){
        return P;
    }else{
        return Nil;
    }
}
