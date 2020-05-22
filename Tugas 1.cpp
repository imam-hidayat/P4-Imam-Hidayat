#include<iostream>
#include<iomanip>
#include<string>
#include<conio.h>

using namespace std;

int main()
{
	int i, nilai, benar=0, salah=0;
	string user, pass;
	char pilihanlogin, pilihan, jawab, pilih;
	ulang :
	cout<<"             =============================================\n";
	cout<<"            |                SELAMAT DATANG               |\n";
	cout<<"            |           DI KUIS TENTANG COVID-19          |\n";
	cout<<"             =============================================\n";
	cout<<"                            Silahkan Login!\n\n";
	cout<<"\tUsername  : ";cin>>user;cout<<"\n";
	cout<<"\tPassword  : ";cin>>pass;cout<<"\t\t\n";
			if (user == "Imam_Hidayat" && pass == "F1B019070"){
			cout<<"\n\t\Login Berhasil\t\t\n";
			cout<<"\n\n\n\tTekan ENTER untuk melanjutkan...";
			getch();}
			else
			{
				cout<<"\tUsername dan password anda salah silahkan coba kembali\n";
				cout<<"\tCobalagi ?[y/t]  : ";cin>>pilihanlogin;cout<<"\n";
					if (pilihanlogin=='y' || pilihanlogin=='Y')
					{system("cls");
					goto ulang;}
					else{goto selesai;}
					if (pilihanlogin=='t' || pilihanlogin=='T')
					{goto selesai;}		
			}
			
			
	cout<<"-------------------------------------------------------------------------\n";
	system("cls");
	{
ulangjwb :
	cout<<"\nPILIH SALAH SATU JAWABAN YANG MENURUT ANDA BENAR, ANTARA A, B, C, ATAU D!\n\n";
	cout<<"=========================================================================\n\n";
	cout<<"1. Kota yang merupakan tempat awal dari penyebaran covid-19 adalah?\n\n";
	string pilgan1[50]={"a.  Guangzou","b.  Wuhan","c.  Shanghai","d.  Beijing"};
	for (i=0;i<=3;i++)
	{cout<<pilgan1[i]<<"\n";}
cout<<"\nJawaban Anda : ";
cin>>jawab;
if(jawab == 'b' || jawab == 'B')
        {benar++;}
else{
        salah++;}
    cout<<"\n==========================================================================\n\n";        
cout<<"2. Negara dengan jumlah kasus virus corona terbanyak adalah?\n\n";
    string pilgan2[50]={"a.  Spanyol","b.  Italia","c.  Amerika Serikat","d.  Inggris"};
	for (i=0;i<=3;i++)
	{cout<<pilgan2[i]<<"\n";}
cout<<"\nJawaban Anda : ";
cin>>jawab;
if(jawab == 'c' || jawab == 'C')
        {benar++;}
else{
        salah++;}
    cout<<"\n==========================================================================\n\n";        
	cout<<"3. Kapan virus corona pertama di temukan?\n\n";
	string pilgan3[225]={"a.  Desember 2019","b.  November 2019","c.  Oktober 2019","d.  Januari 2020"};
	for (i=0;i<=3;i++)
	{cout<<pilgan3[i]<<"\n";}
cout<<"\nJawaban Anda : ";
cin>>jawab;
if(jawab == 'a' || jawab == 'A')
        {benar++;}
else{
        salah++;}
	cout<<"\n==========================================================================\n\n";				
	cout<<"4. Daerah yang pertama kali terkena covid-19 di Indonesia adalah?\n\n";
	string pilgan4[50]={"a.  Bekasi","b.  Tanggerang","c.  Bogor","d.  Depok"};
    for (i=0;i<=3;i++)
	{cout<<pilgan4[i]<<"\n";}
	cout<<"\nJawaban Anda : ";
cin>>jawab;
if(jawab == 'd' || jawab == 'D')
        {benar++;}
else{
        salah++;}
	cout<<"\n==========================================================================\n\n";				
	cout<<"5. Provinsi di Indoneisa yang paling banyak terinfeksi virus corona adalah?\n\n";
    string pilgan5[50]={"a.  NTB","b.  Bali","c.  Jawa  Barat","d.  DKI Jakarta"};
	for (i=0;i<=3;i++)
	{cout<<pilgan5[i]<<"\n";}
cout<<"\nJawaban Anda : ";
cin>>jawab;
if(jawab == 'd' || jawab == 'D')
        {benar++;}
else{
        salah++;}
	cout<<"\n==========================================================================\n\n";				
	cout<<"6. Berapa orang di Indonesia yang sudah terkonfimasi positif corona pada tanggal 28 April 2020?\n\n";
	string pilgan6[50]={"a.  9511 orang","b.  9211 orang","c.  9311 orang","d.  9011 orang"};
	for (i=0;i<=3;i++)
	{cout<<pilgan6[i]<<"\n";}
	cout<<"\nJawaban Anda : ";
cin>>jawab;
if(jawab == 'a' || jawab == 'A')
        {benar++;}
else{
        salah++;}     
	cout<<"\n==========================================================================\n\n";				
	cout<<"7. Berikut adalah gejala umum covid-19, kecuali...\n\n";
	string pilgan7[50]={"a.  Sesak nafas","b.  Ambeien","c.  Batuk kering","d.  demam >38 derajat Celcius"};
	for (i=0;i<=3;i++)
	{cout<<pilgan7[i]<<"\n";}
cout<<"\nJawaban Anda : ";
cin>>jawab;
if(jawab == 'b' || jawab == 'B')
        {benar++;}
else{
        salah++;}
	cout<<"\n==========================================================================\n\n";				
	cout<<"8. Berikut cara mencegah penularan virus corona, kecuali...\n\n";
	string pilgan8[50]={"a.  Mencuci tangan dengan sabun","b.  Jaga jarak setidaknya satu meter dengan orng lain","c.  Keluar rumah dan berkumpul-kumpul","d.  Tidak keluar rumah"};
    for (i=0;i<=3;i++)
	{cout<<pilgan8[i]<<"\n";}
cout<<"\nJawaban Anda : ";
cin>>jawab;
if(jawab == 'c' || jawab == 'C')
        {benar++;}
else{
        salah++;}
	cout<<"\n==========================================================================\n\n";				
	cout<<"9. Berapa hari waktu isolasi diri untuk ODP?\n\n";
	string pilgan9[50]={"a.  14 Hari","b.  12 Hari","c.  10 Hari","d.  8 Hari"};
	for (i=0;i<=3;i++)
	{cout<<pilgan9[i]<<"\n";}
	cout<<"\nJawaban Anda : ";
cin>>jawab;
if(jawab == 'a' || jawab == 'A')
        {benar++;}
else{
        salah++;}
	cout<<"\n==========================================================================\n\n";				
	cout<<"10. Berapa persen alcohol yang diperlukan untuk membuat hand sanitizer?\n\n";
	string pilgan10[50]={"a.  20% alkohol","b.  30% alkohol","c.  50% alkohol","d.  70% alkohol"};
	for (i=0;i<=3;i++)
	{cout<<pilgan10[i]<<"\n";}
	cout<<"\nJawaban Anda : ";
cin>>jawab;
if(jawab == 'd' || jawab == 'D')
        {benar++;}
else{
        salah++;} 
			
	cout<<"Apakah anda yakin dengan jawaban anda??[y/t] : ";cin>>pilihan;cout<<"\n";
					if (pilihan=='y' || pilihan=='Y')
					{goto nilai;}
					
					if (pilihan=='t' || pilihan=='T')
					{system("cls"); 
					goto ulangjwb;
					cout<<endl;}												

	}		nilai :
					cout<<"\n\n=====================================================\n";
					cout<<"PerolehanNilai :"<<endl;
		nilai = benar*10;
		cout<<"\n    Jumlah Benar : "<<benar<<" soal "<<endl;
		cout<<"    Jumlah Salah : "<<salah<<" soal "<<endl;
		cout<<"    Nilai Anda   : "<<nilai<<"\n"<<endl;
			selesai :
			cout<<"            =================================="<<endl;
			cout<<"            |Terima Kasih Telah Berpartisipasi|\n";
			cout<<"            =================================="<<endl;
	
}
