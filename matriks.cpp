#include <iostream>
using namespace std;
int main()
{
	int A[3][3];
	int B[3][3];
	int toplam[3][3];
	cout<<"A matriksinin degerlerini giriniz:"<<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cin>>A[i][j];
		}
	}
	cout<<"B matriksinin degerlerini giriniz:"<<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cin>>B[i][j];
		}
	}
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			toplam[i][j] = (A[i][j]+B[i][j]);
		}
		
	}
	cout<<"C matriksi:"<<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<toplam[i][j]<<endl;
		}
		
	}
	return 0;
}
