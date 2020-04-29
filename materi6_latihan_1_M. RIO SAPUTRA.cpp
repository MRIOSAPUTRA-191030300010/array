#include<iostream>
using namespace std;
int main()
{
	string data [6] = {"aceh", "sumatra utara", "riau", "sumatra barat", "jambi", "palembang"};
	
	cout<<"menampilkan secara manual"<<endl;
	cout<<"data provinsi di sumatra : "<<data [0]<<endl;
	cout<<"data provinsi di sumatra : "<<data [1]<<endl;
	cout<<"data provinsi di sumatra : "<<data [2]<<endl;
	cout<<"data provinsi di sumatra : "<<data [3]<<endl;
	cout<<"data provinsi di sumatra : "<<data [4]<<endl;
	cout<<"data provinsi di sumatra : "<<data [5]<<endl;
	
	cout<<"menampilkan menggunakan for"<<endl;
	for(int i =0; i<6; i++)
	{
		cout<<"data provinsi di sumatra : "<<data [i]<<endl;
	}
	system("pause");
	return 0;
	
	
}

