#include <iostream>
#include <conio.h>
#include <fstream>
#include <stdlib.h>
using namespace std;

int main()
{
       ifstream sembarang;
       char sv_text;

       sembarang.open("datatugas5.txt");

       cout<<"Membuka File"<<endl;
       cout<<"--------------"<<endl;

       if(!sembarang.fail())
       {
              cout<<"Isi dari File -> ";
              while (!sembarang.eof())
              {
                     sembarang.get(sv_text);
                     cout<<sv_text;
              }
              sembarang.close();
       }else{
              cout<<"File tidak ditemukan"<<endl;
       }

       return 0;
}
