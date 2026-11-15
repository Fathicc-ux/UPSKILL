#ifndef PESERTA
#define PESERTA

#include "global.h"

struct elmPeserta
{
    string idPeserta;
    string nama;
    string username;
    string email;
    string programStudi;

    addressPeserta left;
    addressPeserta right;
    addressRelasi firstRelasi;
};

struct BSTPeserta
{
    addressPeserta root;
};

// Operasi ADT Peserta
bool isEmpty(BSTPeserta tree);
void createBST(BSTPeserta &tree);
addressPeserta alokasiPeserta(string id, string nama,
                              string username, string email,
                              string programStudi);
void dealokasiPeserta(addressPeserta &P);

void insertPeserta(BSTPeserta &tree, addressPeserta P);
addressPeserta searchPeserta(BSTPeserta tree, string id);
void deletePeserta(BSTPeserta &tree, string id);
void updatePeserta(BSTPeserta &tree, string id);
void viewPeserta(BSTPeserta tree);

#endif
