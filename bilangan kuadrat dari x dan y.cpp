#include<iostream>
using namespace std;
int main()
{
int pemasukan , pengeluaran;

cout<<"program untuk mengetahui pemasukan dan pengeluaran"<<endl;

cout<<"masuka jumlah pemasukan = ";
cin>>pemasukan;
cout<<"masukan jumlah pengeluaran = ";
cin>>pengeluaran;

if (pemasukan<pengeluaran)
{
	cout<<"pemasukan lebih kecil dari pengeluaran\n";
	
}
else if(pemasukan>pengeluaran)
{
	cout<<"pemasukan lebih besar dari pengeluaran\n";
	
}
else
cout<<"error";
return 0
}
