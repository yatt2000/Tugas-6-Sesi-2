#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;

int main()
{
       ofstream mhsFile;

       mhsFile.open("datamhs.txt", ios::app);

       cout<<"mhsFile"<<endl;
       cout<<"--------------"<<endl;

       if(!mhsFile.fail())
       {
              mhsFile<<"Nama	: Dwi Ahmad Asri Hidayat"<<endl;
              mhsFile<<"Stambuk	: 13020190224"<<endl;
              mhsFile<<"Kelas	: A5"<<endl;
              mhsFile.close();
              cout<<"Text telah ditulis ke dalam File"<<endl;
       }else{
              cout<<"File tidak ditemukan"<<endl;
       }

       return 0;
}
