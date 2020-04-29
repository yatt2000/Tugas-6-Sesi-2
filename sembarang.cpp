#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;

int main()
{
       ofstream sembarang;

       sembarang.open("datatugas5.txt", ios::app);

       cout<<"Sembarang"<<endl;
       cout<<"--------------"<<endl;

       if(!sembarang.fail())
       {
              sembarang<<"Sembarang memiliki arti dalam kelas adjektiva atau kata sifat sehingga sembarang dapat mengubah kata benda atau kata ganti, biasanya dengan menjelaskannya atau membuatnya menjadi lebih spesifik."<<endl;
              sembarang.close();
              cout<<"Text telah ditulis ke dalam File"<<endl;
       }else{
              cout<<"File tidak ditemukan"<<endl;
       }

       return 0;
}
