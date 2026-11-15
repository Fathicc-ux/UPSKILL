#ifndef MLL_PENDAFTARAN
#define MLL_PENDAFTARAN

#include "global.h"
#include "peserta.h"
#include "kursus.h"

// Struktur elemen relasi
struct elmRelasi
{
    addressPeserta peserta;
    addressKursus kursus;

    string tanggalDaftar;
    string statusPendaftaran;

    addressRelasi nextPeserta;
    addressRelasi nextKursus;
};

// Struktur Multi Linked List
struct MLLPendaftaran
{
    addressRelasi first;
};

// Operasi ADT MLL Pendaftaran
bool isEmpty(MLLPendaftaran list);
void createMLL(MLLPendaftaran &list);

addressRelasi alokasiRelasi(addressPeserta P,
                            addressKursus K,
                            string tanggal,
                            string status);

void dealokasiRelasi(addressRelasi &R);

void insertPendaftaran(MLLPendaftaran &list,
                       addressPeserta P,
                       addressKursus K,
                       string tanggal,
                       string status);

void deletePendaftaran(MLLPendaftaran &list,
                       addressPeserta P,
                       addressKursus K);

addressRelasi searchPendaftaran(addressPeserta P,
                                addressKursus K);

void viewPendaftaran(MLLPendaftaran list);

void viewKursusPeserta(addressPeserta P);

void viewPesertaKursus(addressKursus K);

#endif
