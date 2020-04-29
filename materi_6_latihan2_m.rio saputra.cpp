#include<iostream>
using namespace std;
int main()
{
	string data[2][3]= {"aceh", "sumatra utara", "riau","sumatra barat", "jambi", "palembang",};

	cout<<"menampilkan secara manual"<<endl;
	cout<<"data provinsi di sumatra : "<<data [0][0]<<endl;
	cout<<"data provinsi di sumatra : "<<data [0][1]<<endl;
	cout<<"data provinsi di sumatra : "<<data [0][2]<<endl;
	cout<<"data provinsi di sumatra : "<<data [1][0]<<endl;
	cout<<"data provinsi di sumatra : "<<data [1][1]<<endl;
	cout<<"data provinsi di sumatra : "<<data [1][2]<<endl;
	
	
	cout<<"menampilkan menggunakan for"<<endl;
	for (int i =0; i<2; i++)
	{
		for(int j =0; j<3; j++)
		{
			cout<<"data provinsi di sumatra["<<i<<"]["<<j<<"]="<<data[i][j]<<endl;
		}
	
	}
	system("pause");
	return 0;
	
}
