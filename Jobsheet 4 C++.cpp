#include <iostream>
#include <cstdlib>
using namespace std;

main (){
cout<<"Nama : Imam Hidayat\n";
cout<<"Nim : F1B019070\n";
cout<<"Kelompok: Kelompok 14\n\n";
int nim1[2][2];
int nim2[2][2];
int jml [2][2];
int x, y;
cout<< "PENGURANGAN NIM\n";
for (x = 0; x < 2; x++){
for (y = 0; y < 2; y++){
cout<< "Masukkan index " << x << "," << y << " = ";
cin>> nim1[x][y];
}
}
cout<<endl;
for (x = 0; x < 2; x++){
for (y = 0; y < 2; y++){
cout<< "Masukkan index " << x << "," << y << " = ";
cin>> nim2[x][y];
}
}
cout<<endl;
for (x = 0; x < 2; x++){
for (y = 0; y < 2; y++){
jml [x][y] = nim1[x][y]-nim2[x][y];
cout<<jml [x][y] <<" ";
}
cout<<endl;
}
}