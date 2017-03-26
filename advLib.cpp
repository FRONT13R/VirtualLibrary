#include <iostream>  //
#include <conio.h>   //getch()
#include <windows.h> //system("cls"), Sleep()
#include <string.h>
using namespace std;

//Class  : Perpus
//Object : Buku
//Attribute : natajukopen
int jeda = 420;

class Perpus{
    //private attribute
    int Indeks;
    string Penulis;
    int Tahun;
    string Judul;
    string Kota;
    string Penerbit;
    int Halaman;
    string Kategori;

public :
    //setter
    void setAtr(string kat, int in, string na, int ta, string ju, string ko, string pen, int hal){
        this->Kategori = kat;
        this->Indeks = in;
        this->Penulis = na;
        this->Tahun = ta;
        this->Judul = ju;
        this->Kota = ko;
        this->Penerbit = pen;
        this->Halaman = hal;
        this->Kategori = kat;
    }

    //method getter
    void showAtr(){
        cout << "\n  Indeks buku ke-" << Indeks << endl; Sleep(jeda/10);
        cout << "\tPenulis  : " << this->Penulis << endl; Sleep(jeda/9);
        cout << "\tTahun    : " << this->Tahun << endl; Sleep(jeda/8);
        cout << "\tJudul    : " << this->Judul << endl; Sleep(jeda/7);
        cout << "\tKota     : " << this->Kota << endl; Sleep(jeda/6);
        cout << "\tPenerbit : " << this->Penerbit << endl; Sleep(jeda/5);
        cout << "\tHalaman  : " << this->Halaman << endl; Sleep(jeda/4);
        Sleep(jeda*2);
    }

    string getKategori(){
        return this->Kategori;
    }

    string getPenulis(){
        return this->Penulis;
    }

    string getJudul(){
        return this->Judul;
    }

};

Perpus Buku[200];
int initRepo(int n){
    //Kategori Teknologi
    Buku[n++].setAtr("Teknologi", 1, "Dr. Deni Darmawan, S.Pd., M.Si", 2011, "Teknologi Pembelajaran", "Jakarta", "Remaja Rosdakarya", 112);
    Buku[n++].setAtr("Teknologi", 2, "Murhada. S.Kom., M.M.", 2011, "Pengantar Teknologi Informasi", "Jakarta", "Mida Karya", 262);
    Buku[n++].setAtr("Teknologi", 3, "Herry Purnomo, S.Kom, M.T.", 2014, "Pengenalan Informatika Teknik", "Makassar", "Andi", 212);
    Buku[n++].setAtr("Teknologi", 4, "Farhanitrate, S.T., M.T.", 2012, "Teknologi sebagai Tradisi", "Medan", "Deepublish", 92);
    Buku[n++].setAtr("Teknologi", 5, "Prerajulization, S.T., M.T.", 2008, "Organisasi dan Arsitektur Komputer", "Surabaya", "Sinamita", 319);
    //Kategori Filsafat
    Buku[n++].setAtr("Filsafat", 1, "Dr. Stephen Palmquis", 2014, "Pohon Filsafat", "Kediri", "Wedatama Widya Sastra", 120);
    Buku[n++].setAtr("Filsafat", 2, "Prof. Dr. Agung Suganjar", 2003, "Filsafat Hukum", "Medan", "Digitama Karya", 140);
    Buku[n++].setAtr("Filsafat", 3, "Dr. Reza Ahmadi", 2010, "Filsafat Politik untuk Indonesia", "Jakarta", "Gading Sastra", 143);
    Buku[n++].setAtr("Filsafat", 4, "Prof Dr. Zainal Abidin", 2005, "Filsafat Manusia", "Semarang", "Katawama", 201);
    Buku[n++].setAtr("Filsafat", 5, "Dr. Kemal Zainudin", 2011, "Filsafat Pra-skolastik", "Malang", "Gatingka", 94);
    //Kategori Sejarah
    Buku[n++].setAtr("Sejarah", 1, "Prof. Dr. Sasongko Purbo, M.A.", 2003, "Sejarah Para Khalifah", "Jakarta", "Gading Sastra", 90);
    Buku[n++].setAtr("Sejarah", 2, "Sugeng Saestu ", 2004, "Sejarah Banten", "Jakarta", "Gatingka", 125);
    Buku[n++].setAtr("Sejarah", 3, "Andi Susilo S.Pd., M.Si", 2009, "Sejarah Peradaban Dunia Kuno", "Malang", "Satria Karya", 237);
    Buku[n++].setAtr("Sejarah", 4, "Ginanjar Sukirman", 2006, "Sejarah Wayang Purwa", "Malang", "Mida Sastra", 183);
    Buku[n++].setAtr("Sejarah", 5, "Dr. Tatang Sutarman", 2001, "Sejarah Melayu", "Jakarta", "Digitama Karya", 277);
    //Kategori Agama
    Buku[n++].setAtr("Agama", 1, "Aa Gym", 2007, "Tanda-tanda ikhlas seorang Hamba", "Jakarta", "MQS Pustaka Grafika", 41);
    Buku[n++].setAtr("Agama", 2, "Tasirun Sulaiman", 2010, "13 Misteri di Kota Mekkah", "Jakarta", "Shanju Sastra", 91);
    Buku[n++].setAtr("Agama", 3, "Drs. Nur Hadi", 2014, "Dahsyatnya Ikhlas", "Tangerang", "Dian Rakyat", 142);
    Buku[n++].setAtr("Agama", 4, "Drs. Nuhlil Ahmad", 2012, "Buku Pintar Agama Islam", "Medan", "Zepta Sastra", 72);
    Buku[n++].setAtr("Agama", 5, "Dr. Haji Umi Saifulloh", 2006, "Agama dan Sains", "Cibubur", "Lyto", 80);
    //Kategori Psikologi
    Buku[n++].setAtr("Psikologi", 1, "Prof. Dr. Sofyan T. R.", 2007, "Psikologi Kepribadian", "Cilembu", "Dian Pustaka", 84);
    Buku[n++].setAtr("Psikologi", 2, "Norman D Sundberg", 2014, "Psikologi Pendidikan", "Jakarta", "DDL Junction", 96);
    Buku[n++].setAtr("Psikologi", 3, "Dr. Kaelany", 2010, "Psikologi Sosial", "Sigura-gura", "Zepetto", 120);
    Buku[n++].setAtr("Psikologi", 4, "Dr. Fattah Hanurawan", 2003, "Psikologi Komunikasi", "Sigamalama", "Satria Karya", 72);
    Buku[n++].setAtr("Psikologi", 5, "Dr. Istiqomah Wibowo", 2008, "Analisis Tulisan Tangan", "Malang", "Sukino Karya", 51);
    //Kategori Politik
    Buku[n++].setAtr("Politik", 1, "Dr. Niko Prahendra, M.Si", 2003, "Ilmu Politik", "Jonggol", "Megakarya", 210);
    Buku[n++].setAtr("Politik", 2, "Jeremy Susan", 2009, "Komunikasi Politik", "Cibinong", "Gading Sastra", 123);
    Buku[n++].setAtr("Politik", 3, "Dr. Yon Abadi", 2005, "Politik Ideologi Pendidikan", "Jakarta", "Sinamita", 351);
    Buku[n++].setAtr("Politik", 4, "Prof. Ahmad Fuadi", 2014, "Teori Politik Modern", "Surabaya", "Pionir Massa", 209);
    Buku[n++].setAtr("Politik", 5, "Jessica Veranda", 2013, "Dasar-dasar Ilmu Politik", "Malang", "Digitama Karya", 91);
    //Kategori Fiksi
    Buku[n++].setAtr("Fiksi", 1, "Rangga Almahendra", 2013, "Warna Langit", "Gresik", "Mahagita", 102);
    Buku[n++].setAtr("Fiksi", 2, "Heri Sutarman", 2016, "Aku Menolak Hukuman Mati", "Solo", "Voldemort", 332);
    Buku[n++].setAtr("Fiksi", 3, "Andela Yuwono", 2012, "Dalam Mihrab Cinta", "Surabaya", "Gagasmedia", 212);
    Buku[n++].setAtr("Fiksi", 4, "Adhisty Zara", 2017, "The Diviners", "Malang", "Nusantara Abadi", 97);
    Buku[n++].setAtr("Fiksi", 5, "Phillip Pulman", 2015, "Evermore", "Jakarta", "Mitra Pemuda", 159);
    return n;
}
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
void intro(int n){
    cout << "[ZARA VIRTUAL LIBRARY]\n" << endl;
    cout << "Available list :" << endl;
    cout << "  1. Cari buku" << endl;
    cout << "  2. Tambahkan buku" << endl;
    cout << "  3. Tambahkan kategori baru" << endl;
    cout << "  4. Tampilkan semua buku" << endl;
    cout << "  5. Keluar" << endl;
    cout << "  Banyaknya buku : " << n << endl;
    cout << "  Masukkan pilihan : ";
}

void outro(){
    cout << "\nProgram dihentikan...";
    getch();
}
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
void cariKategori(string kat, int n){
    int found = 0;
    for (int i = 0 ; i<n ; i++){
        if (Buku[i].getKategori()==kat){
            Buku[i].showAtr();
            found++;
        }
    }
    if (found==0){
        cout << "\nBuku dengan kategori \"" << kat << "\" tidak dapat ditemukan !" << endl;
    } else {
        cout << "\nDitemukan " << found << " buku dengan Kategori \"" << kat << "\"." << endl;
    }
    getch();
}

void cariPenulis(string pen, int n){
    int found = 0;  //jumlah buku yg ditemukan
    for (int i = 0 ; i<n ; i++){
        if(Buku[i].getPenulis()==pen){
            Buku[i].showAtr();
            found++;
        }
    }
    if (found==0){
        cout << "\nBuku dengan nama penulis \"" << pen << "\" tidak dapat ditemukan !" << endl;
    } else {
        cout << "\nDitemukan " << found << " buku dengan nama penulis \"" << pen << "\"." << endl;
    }
    getch();
}

void cariJudul(string ju, int n){
    int found = 0;
    for (int i = 0 ; i<n ; i++){
        if(Buku[i].getJudul()==ju){
            Buku[i].showAtr();
            found++;
        }
    }
    if (found==0){
        cout << "\nBuku dengan judul \"" << ju << "\" tidak dapat ditemukan !" << endl;
    }
    getch();
}
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
void addBuku(){

    getch();
    system("cls");
}

void addKategori(){

    getch();
    system("cls");
}

void showAllBuku(){

    getch();
    system("cls");
}

//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
int main(){
    int n_Buku = 0;   //banyaknya buku
    n_Buku = initRepo(n_Buku);
    int pil_A, pil_B;
    string jwb;

    do {
        intro(n_Buku);
        cin >> pil_A;

        if(pil_A==1){ //cari buku
            do {
                cout << "\nCari buku berdasarkan : " << endl;
                cout << "  1. Kategori" << endl;
                cout << "  2. Penulis" << endl;
                cout << "  3. Judul" << endl;
                cout << "  4. (Kembali)" << endl;
                cout << "  Masukkan pilihan : ";
                cin >> pil_B;
                if(pil_B==1){
                    cout << "Masukkan Kategori : ";
                    cin >> jwb;
                    cariKategori(jwb, n_Buku);
                } else if (pil_B==2){
                    cout << "Masukkan nama Penulis : ";
                    cin >> jwb;
                    cariPenulis(jwb, n_Buku);
                } else if (pil_B==3){
                    cout << "Masukkan Judul Buku : ";
                    cin >> jwb;
                    cariJudul(jwb, n_Buku);
                } else if (pil_B==4){

                } else {

                }
                system("cls");

            } while(pil_B!=4);

        } else if (pil_A==2){ //tambahkan buku ke kategori
            addBuku();
        } else if (pil_A==3){ //tambahkan kategori baru
            addKategori();
        } else if (pil_A==4){ //tampilkan semua buku
            showAllBuku();
        } else if (pil_A==5){ //keluar
            outro();
        }
    } while(pil_A!=5);

    return 0;
}
