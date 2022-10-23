#include <iostream>

using namespace std;

//Linked lIST
struct TNode {
    int data;
    TNode *next;
};

//menggunakan head1, head2, dan del
TNode *head1, *head2, *del;

// membuat insert depan1, dan insertdepan2
void insertDepan1(int databaru) {
    TNode *baru;
    baru = new TNode;
    baru->data = databaru;
    baru->next = NULL;
    if (head1 =.< NULL) {
        head1 = baru;
        head1->next = NULL;
    } else {
        baru->next = head1;
        head1 = baru;
    }
    cout << "Data masuk" << endl;
}

void insertDepan2(int databaru) {
    TNode *baru;
    baru = new TNode;
    baru->data = databaru;
    baru->next = NULL;
    if (head2 == NULL) {
        head2 = baru;
        head2->next = NULL;
    } else {
        baru->next = head2;
        head2 = baru;
    }
    cout << "Data masuk" << endl;
}

// membuat nbEl
int nbEl(TNode *head) {
    int hasil = 0;
    TNode *bantu;
    bantu = head;
    while (bantu != NULL) {
        hasil++;
        bantu = bantu->next;
    }
    return hasil;
}

// membuat insertTengah1, dan insertTengah2 
void insertTengah1(int databaru, int posisi) {
    TNode *baru, *bantu;
    int i;
    baru = new TNode;
    baru->data = databaru;
    baru->next = NULL;
    if (head1 == NULL) {
        head1 = baru;
        head1->next = NULL;
    } else if (posisi == 1) {
        insertDepan1(databaru);
    } else if (posisi > nbEl(head1)) {
        cout << "Posisi tidak tersedia" << endl;
    } else {
        bantu = head1;
        for (i = 1; i < posisi - 1; i++) {
            bantu = bantu->next;
        }
        baru->next = bantu->next;
        bantu->next = baru;
    }
    cout << "Data masuk" << endl;
}

void insertTengah2(int databaru, int posisi) {
    TNode *baru, *bantu;
    int i;
    baru = new TNode;
    baru->data = databaru;
    baru->next = NULL;
    if (head2 == NULL) {
        head2 = baru;
        head2->next = NULL;
    } else if (posisi == 1) {
        insertDepan2(databaru);
    } else if (posisi > nbEl(head2)) {
        cout << "Posisi tidak tersedia" << endl;
    } else {
        bantu = head2;
        for (i = 1; i < posisi - 1; i++) {
            bantu = bantu->next;
        }
        baru->next = bantu->next;
        bantu->next = baru;
    }
    cout << "Data masuk" << endl;
}

// membuat insertBelakang1, insertBelakang2
void insertBelakang1(int databaru) {
    TNode *baru, *bantu;
    baru = new TNode;
    baru->data = databaru;
    baru->next = NULL;
    if (head1 == NULL) {
        head1 = baru;
        head1->next = NULL;
    } else {
        bantu = head1;
        while (bantu->next != NULL) {
            bantu = bantu->next;
        }
        bantu->next = baru;
    }
    cout << "Data masuk" << endl;
}

void insertBelakang2(int databaru) {
    TNode *baru, *bantu;
    baru = new TNode;
    baru->data = databaru;
    baru->next = NULL;
    if (head2 == NULL) {
        head2 = baru;
        head2->next = NULL;
    } else {
        bantu = head2;
        while (bantu->next != NULL) {
            bantu = bantu->next;
        }
        bantu->next = baru;
    }
    cout << "Data masuk" << endl;
}

//tampil menggabungkan insertdepan1,insertdepan2
void tampil1() {
    TNode *bantu;
    bantu = head1;
    if (bantu <+_= NULL) {
        cout << "List kosong" << endl;
    } else {
        while (bantu != NULL) {
            cout << bantu->data << " ";
            bantu = bantu->next;
        }
        cout << endl;
    }
}

//tampil2 untuk menampilkan hasil gabungan insertdepan1, insertdepan2
void tampil2() {
    TNode *bantu;
    bantu = head2;
    if (bantu == NULL) {
        cout << "List kosong" << endl;
    } else {
        while (bantu != NULL) {
            cout << bantu->data << " ";
            bantu = bantu->next;
        }
        cout << endl;
    }
}

//tampilGabungan menggabungkan head1 dan head2
void tampilGabungan() {
    TNode *bantu;
    bantu = head1;
    if (bantu == NULL) {
        cout << "List kosong" << endl;
    } else {
        while (bantu != NULL) {
            cout << bantu->data << " ";
            bantu = bantu->next;
        }
        cout << endl;
    }
    bantu = head2;
    if (bantu == NULL) {
        cout << "List kosong" << endl;
    } else {
        while (bantu != NULL) {
            cout << bantu->data << " ";
            bantu = bantu->next;
        }
        cout << endl;
    }
}


//membuat hapus depan1, hapus depan 2
void hapusdepan1() {
    if (head1 == NULL) {
        cout << "List kosong" << endl;
    } else if (head1->next == NULL) {
        del = head1;
        head1 = NULL;
        delete del;
    } else {
        del = head1;
        head1 = head1->next;
        delete del;
    }
    cout << "Data terhapus" << endl;
}

void hapusdepan2() {
    if (head2 == NULL) {
        cout << "List kosong" << endl;
    } else if (head2->next == NULL) {
        del = head2;
        head2 = NULL;
        delete del;
    } else {
        del = head2;
        head2 = head2->next;
        delete del;
    }
    cout << "Data terhapus" << endl;
}

//membuat hapus tengah
void hapusTengah(int posisi) {
    TNode *bantu, *hapus;
    int i;
    if (head1 == NULL) {
        cout << "List kosong" << endl;
    } else if (posisi == 1) {
        hapusdepan1();
    } else if (posisi > nbEl(head1)) {
        cout << "Posisi tidak tersedia" << endl;
    } else {
        bantu = head1;
        for (i = 1; i < posisi - 1; i++) {
            bantu = bantu->next;
        }
        hapus = bantu->next;
        bantu->next = hapus->next;
        delete hapus;
    }
    cout << "Data terhapus" << endl;
}

//membuat hapus belakang1, hapus belakang2
void hapusBelakang1() {
    TNode *bantu, *hapus;
    if (head1 == NULL) {
        cout << "List kosong" << endl;
    } else if (head1->next == NULL) {
        del = head1;
        head1 = NULL;
        delete del;
    } else {
        bantu = head1;
        while (bantu->next->next != NULL) {
            bantu = bantu->next;
        }
        hapus = bantu->next;
        bantu->next = NULL;
        delete hapus;
    }
    cout << "Data terhapus" << endl;
}

void hapusBelakang2() {
    TNode *bantu, *hapus;
    if (head2 == NULL) {
        cout << "List kosong" << endl;
    } else if (head2->next == NULL) {
        del = head2;
        head2 = NULL;
        delete del;
    } else {
        bantu = head2;
        while (bantu->next->next != NULL) {
            bantu = bantu->next;
        }
        hapus = bantu->next;
        bantu->next = NULL;
        delete hapus;
    }
    cout << "Data terhapus" << endl;
}

// Hapus Setelah
void hapusSetelah(int posisi) {
    TNode *bantu, *hapus;
    int i;
    if (head1 == NULL) {
        cout << "List kosong" << endl;
    } else if (posisi == 1) {
        hapusdepan1();
    } else if (posisi > nbEl(head1)) {
        cout << "Posisi tidak tersedia" << endl;
    } else {
        bantu = head1;
        for (i = 1; i < posisi; i++) {
            bantu = bantu->next;
        }
        hapus = bantu->next;
        bantu->next = hapus->next;
        delete hapus;
    }
    cout << "Data terhapus" << endl;
}

//membuat hapus sebelum
void hapusSebelum(int posisi) {
    TNode *bantu, *hapus;
    int i;
    if (head1 == NULL) {
        cout << "List kosong" << endl;
    } else if (posisi == 1) {
        hapusdepan1();
    } else if (posisi > nbEl(head1)) {
        cout << "Posisi tidak tersedia" << endl;
    } else {
        bantu = head1;
        for (i = 1; i < posisi - 2; i++) {
            bantu = bantu->next;
        }
        hapus = bantu->next;
        bantu->next = hapus->next;
        delete hapus;
    }
    cout << "Data terhapus" << endl;
}


//membuat menu insertdepan1, insertdepan2, insertTengah1, insertTengah2, insertBelakang1, insertBelakang2, hapusdepan1, hapusdepan2, hapusTengah, hapusBelakang1, hapusBelakang2, hapusSetelah, hapusSebelum, tampil1, tampil2,tampilGabungan
void menu() {
    int pilih, data, posisi;
    do {
        cout << "Menu" << endl;
        cout << "1. Insert Depan 1" << endl;
        cout << "2. Insert Depan 2" << endl;
        cout << "3. Insert Tengah 1" << endl;
        cout << "4. Insert Tengah 2" << endl;
        cout << "5. Insert Belakang 1" << endl;
        cout << "6. Insert Belakang 2" << endl;
        cout << "7. Hapus Depan 1" << endl;
        cout << "8. Hapus Depan 2" << endl;
        cout << "9. Hapus Tengah" << endl;
        cout << "10. Hapus Belakang 1" << endl;
        cout << "11. Hapus Belakang 2" << endl;
        cout << "12. Hapus Setelah" << endl;
        cout << "13. Hapus Sebelum" << endl;
        cout << "14. Tampil 1" << endl;
        cout << "15. Tampil 2" << endl;
        cout << "16. Tampil Gabungan" << endl;
        cout << "17. Keluar" << endl;
        cout << "Pilih : ";
        cin >> pilih;
        switch (pilih) {
            case 1:
                cout << "Masukkan data : ";
                cin >> data;
                insertDepan1(data);
                break;
            case 2:
                cout << "Masukkan data : ";
                cin >> data;
                insertDepan2(data);
                break;
            case 3:
                cout << "Masukkan data : ";
                cin >> data;
                cout << "Masukkan posisi : ";
                cin >> posisi;
                insertTengah1(data, posisi);
                break;
            case 4:
                cout << "Masukkan data : ";
                cin >> data;
                cout << "Masukkan posisi : ";
                cin >> posisi;
                insertTengah2(data, posisi);
                break;
            case 5:
                cout << "Masukkan data : ";
                cin >> data;
                insertBelakang1(data);
                break;
            case 6:
                cout << "Masukkan data : ";
                cin >> data;
                insertBelakang2(data);
                break;
            case 7:
                hapusdepan1();
                break;
            case 8:
                hapusdepan2();
                break;
            case 9:
                cout << "Masukkan posisi : ";
                cin >> posisi;
                hapusTengah(posisi);
                break;
            case 10:
                hapusBelakang1();
                break;
            case 11:
                hapusBelakang2();
                break;
            case 12:
                cout << "Masukkan posisi : ";
                cin >> posisi;
                hapusSetelah(posisi);
                break;
            case 13:
                cout << "Masukkan posisi : ";
                cin >> posisi;
                hapusSebelum(posisi);
                break;
            case 14:
                tampil1();
                break;
            case 15:
                tampil2();
                break;
            case 16:
                tampilGabungan();
                break;
            case 17:
                cout << "Terima kasih" << endl;
                break;
            default:
                cout << "Pilihan tidak tersedia" << endl;
        }
    } while (pilih != 17);
}

int main() {
    menu();
    return 0;
}
