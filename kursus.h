#ifndef KURSUS
#define KURSUS

#include "global.h"

struct elmKursus
{
    string idKursus;
    string namaKursus;
    string kategori;
    int durasi;
    int kuota;

    addressKursus left;
    addressKursus right;
    addressRelasi firstRelasi;
};

struct BSTKursus
{
    addressKursus root;
};

// Operasi ADT Kursus
bool isEmpty(BSTKursus tree);
void createBST(BSTKursus &tree);
addressKursus alokasiKursus(string id, string nama,
                            string kategori, int durasi,
                            int kuota);
void dealokasiKursus(addressKursus &K);

void insertKursus(BSTKursus &tree, addressKursus K);
addressKursus searchKursus(BSTKursus tree, string id);
void deleteKursus(BSTKursus &tree, string id);
void updateKursus(BSTKursus &tree, string id);
void viewKursus(BSTKursus tree);

#endif
