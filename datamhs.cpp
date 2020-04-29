#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;

int main()
{
       ofstream datamhs;

       datamhs.open("datamhs.txt", ios::app);

       cout<<"Data Mahasiswa"<<endl;
       cout<<"--------------"<<endl;

       if(!datamhs.fail())
       {
              datamhs<<"Stambuk	: 13020190224"<<endl;
              datamhs<<"Nama	: Dwi Ahmad Asri Hidayat"<<endl;
              datamhs<<"Kelas	: A5"<<endl;
              datamhs<<"IPK	: 3,76"<<endl;
              datamhs.close();
              cout<<"Text telah ditulis ke dalam File"<<endl;
       }else{
              cout<<"File tidak ditemukan"<<endl;
       }

       return 0;
}
