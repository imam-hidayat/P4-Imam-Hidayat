	#include <iostream>
	#include <conio.h>
	#include <windows.h>

	using namespace std;


	void header () {
	cout<<" _____________________________________________________________ "<<endl;
	cout<<"|                         BOOM SNEAKERS                       |"<<endl;
    cout<<"|=============================================================|"<<endl;
	cout<<"| NO |  KODE  |         NAMA BARANG         |   JENIS BARANG  |"<<endl;
	cout<<"|-------------------------------------------------------------|"<<endl;
 	cout<<"|  1 |   A    |  NIKE AIR MAX 270           |   NIKE          |"<<endl;
 	cout<<"|  2 |   B    |  NIKE AIR MAX 720           |   NIKE          |"<<endl;
 	cout<<"|  3 |   C    |  NIKE TANJUN                |   NIKE          |"<<endl;
 	cout<<"|  4 |   D    |  NIKE AIR ZOOM VOMERO       |   NIKE          |"<<endl;
 	cout<<"|  5 |   E    |  NEW BALANCE FRESH FOAM     |   NEW BALANCE   |"<<endl;
 	cout<<"|  6 |   F    |  NEW BALANCE EVARE RUN      |   NEW BALANCE   |"<<endl;
 	cout<<"|  7 |   G    |  NEW BALANCE 680V6          |   NEW BALANCE   |"<<endl;
 	cout<<"|  8 |   H    |  ADIDAS ULTRABOST 20        |   ADIDAS        |"<<endl;
 	cout<<"|  9 |   I    |  ADIDAS STAN SMITH          |   ADIDAS        |"<<endl;
 	cout<<"| 10 |   J    |  ADIDAS X_PLR               |   ADIDAS        |"<<endl;
 	cout<<"==============================================================="<<endl;
	}

	void bmasuk()
	{
	cout<<"\n                                 BARANG MASUK                                    \n\n"<<endl;
   	cout<<" ____________________________________________________________________________ "<<endl;
	cout<<"|                               BOOM SNEAKERS                                |"<<endl;
    cout<<"|============================================================================|"<<endl;
	cout<<"| NO |  KODE  |         NAMA BARANG         |   JENIS BARANG  | BARANG MASUK |"<<endl;
	cout<<"|----------------------------------------------------------------------------|"<<endl;
 	cout<<"|  1 |   A    |  NIKE AIR MAX 270           |   NIKE          |      10      |"<<endl;
 	cout<<"|  2 |   B    |  NIKE AIR MAX 720           |   NIKE          |      10      |"<<endl;
 	cout<<"|  3 |   C    |  NIKE TANJUN                |   NIKE          |      7       |"<<endl;
 	cout<<"|  4 |   D    |  NIKE AIR ZOOM VOMERO       |   NIKE          |      10      |"<<endl;
 	cout<<"|  5 |   E    |  NEW BALANCE FRESH FOAM     |   NEW BALANCE   |      8       |"<<endl;
 	cout<<"|  6 |   F    |  NEW BALANCE EVARE RUN      |   NEW BALANCE   |      8       |"<<endl;
 	cout<<"|  7 |   G    |  NEW BALANCE 680V6          |   NEW BALANCE   |      8       |"<<endl;
 	cout<<"|  8 |   H    |  ADIDAS ULTRABOST 20        |   ADIDAS        |      9       |"<<endl;
 	cout<<"|  9 |   I    |  ADIDAS STAN SMITH          |   ADIDAS        |      9       |"<<endl;
 	cout<<"| 10 |   J    |  ADIDAS X_PLR               |   ADIDAS        |      8       |"<<endl;
 	cout<<"=============================================================================="<<endl;
 	}
 	
	void bkeluar()
	{
	cout<<"\n                                 BARANG KELUAR                                    \n\n"<<endl;
   	cout<<" _____________________________________________________________________________ "<<endl;
	cout<<"|                               BOOM SNEAKERS                                 |"<<endl;
    cout<<"|=============================================================================|"<<endl;
	cout<<"| NO |  KODE  |         NAMA BARANG         |   JENIS BARANG  | BARANG KELUAR |"<<endl;
	cout<<"|-----------------------------------------------------------------------------|"<<endl;
 	cout<<"|  1 |   A    |  NIKE AIR MAX 270           |   NIKE          |      7        |"<<endl;
 	cout<<"|  2 |   B    |  NIKE AIR MAX 720           |   NIKE          |      6        |"<<endl;
 	cout<<"|  3 |   C    |  NIKE TANJUN                |   NIKE          |      3        |"<<endl;
 	cout<<"|  4 |   D    |  NIKE AIR ZOOM VOMERO       |   NIKE          |      5        |"<<endl;
 	cout<<"|  5 |   E    |  NEW BALANCE FRESH FOAM     |   NEW BALANCE   |      4        |"<<endl;
 	cout<<"|  6 |   F    |  NEW BALANCE EVARE RUN      |   NEW BALANCE   |      5        |"<<endl;
 	cout<<"|  7 |   G    |  NEW BALANCE 680V6          |   NEW BALANCE   |      2        |"<<endl;
 	cout<<"|  8 |   H    |  ADIDAS ULTRABOST 20        |   ADIDAS        |      4        |"<<endl;
 	cout<<"|  9 |   I    |  ADIDAS STAN SMITH          |   ADIDAS        |      2        |"<<endl;
 	cout<<"| 10 |   J    |  ADIDAS X_PLR               |   ADIDAS        |      2        |"<<endl;
 	cout<<"==============================================================================="<<endl;
	}

	void keluar()
	{
	cout<<"\n ================================================"<<endl;
	cout<<"|                BOOM SNEAKERS                   |"<<endl;
	cout<<" ================================================\n"<<endl;
		}


    int main(){
	char lagi;
	int pilih,i,data[10],jumlah;
	string username,pass;
	jumlah=0;

	cout<<"\n ================================================"<<endl;
	cout<<"|    PASTIKAN ANDA BAGIAN DARI BOOM SNEAKERS     |"<<endl;
	cout<<" ================================================\n"<<endl;
	cout<<"Masukkan Username : ";
	cin>>username;
	cout<<"Masukkan Password : ";
	cin>>pass;

	if (username=="Imam_Hidayat" && pass=="F1B019070"){
	cout<<"\n ================================================"<<endl;
	cout<<"|     ANDA ADALAH BAGIAN DARI BOOM SNEAKERS      |"<<endl;
	cout<<"|                                                |"<<endl;
	cout<<"|                SELAMAT DATANG                  |"<<endl;
	cout<<" ================================================\n\n"<<endl;
	cout<<"Tekan ENTER untuk melanjutkan...";
	getch();
	}
	else {
	system("cls");
	cout<<"\n ================================================="<<endl;
	cout<<"|    MAAF ANDA BUKAN BAGIAN DARI BOOM SNEAKERS    |"<<endl;
	cout<<" =================================================\n"<<endl;
    exit (0);
	}
	awal:
	system("cls");
    header();
	cout<< "\n\n 1. BARANG MASUK"<<endl;
	cout<< " 2. BARANG KELUAR"<<endl;
	cout<< " 3. KELUAR\n"<<endl;
	cout<< "Masukkan Pilihan Anda : " ;
	cin>>pilih;
	

    
	 switch (pilih)
	 {
	case 1:
    system ("cls");
    jumlah=0;
	bmasuk();
	for (int i=0;i<=9;i++){
    cout<<"\nMASUKKAN JUMLAH BARANG KE "<<i+1<<": ";
    cin>>data[i];
    }
    for (int i=0;i<=9;i++){
    jumlah=jumlah+data[i];
    }
	cout<<"\n\nJUMLAH SEMUA BARANG YANG MASUK : "<<jumlah;
    cout<<"\n\n\nJADI, JUMLAH SEMUA BARANG YANG MASUK PADA TANGGAL 10 MARET 2020 ADALAH "<<jumlah<<" BARANG";
	goto Lagi;
	 break;


	case 2:
	system ("cls");
	jumlah=0;
	bkeluar();for (int i=0;i<=9;i++){
    cout<<"\nMASUKKAN JUMLAH BARANG KE "<<i+1<<": ";
    cin>>data[i];
    }
    for (int i=0;i<=9;i++){
    jumlah=jumlah+data[i];
    }
    cout<<"\n\nJUMLAH SEMUA BARANG YANG KELUAR : "<<jumlah;
    cout<<"\n\n\nJADI, JUMLAH SEMUA BARANG YANG KELUAR PADA TANGGAL 10 APRIL 2020 ADALAH "<<jumlah<<" BARANG";
	goto Lagi;
	   break;

	case 3:
	system ("cls");
    keluar ();
    cout<<"\n\nAPAKAH ANDA YAKIN INGIN KELUAR [Y/N]: ";cin>>lagi;
	    if(lagi=='n'||lagi=='N')
    {goto awal;}
    	else;
    {
    system("cls");
    exit (0);}
        break;
        }


    Lagi :

	cout<<"\n\nKEMBALI KE MENU AWAL [Y/N]: ";cin>>lagi;
	    if(lagi=='y'||lagi=='Y')
    {
    system("cls");
    goto awal;
    }

    else ;
        {
    system("cls");
    exit (0);}
    }
