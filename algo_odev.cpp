#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main()
{
	int yil=5;
	int ay=12;
	int ciro[yil][ay];
	float ortciro[5];
	srand(time(0));
	for(int i=0; i<yil; i++){
		for(int j=0; j<ay; j++){
		ciro[i][j] = rand() % (5000-100)+100;
		}
	}
	for(int i=0; i<yil; i++){
		int yillik=0;
		for(int j=0; j<12; j++){
			yillik+=ciro[i][j];
		}
		ortciro[i]=yillik/12;
	}
	int syil;
	cout<<"Bir yil seciniz: "<<endl;
	cin>>syil;
	--syil;
	for(int j=0; j<ay; j++){
		if(ciro[syil][j]>ortciro[syil]){
			cout<<j+1<<". "<<ciro[syil][j]<<endl;
		}
	}
	for(int ceyrek=0; ceyrek<4; ceyrek++){
		int toplam=0;
		for(int j=ceyrek*3; j<(ceyrek+1)*3; j++){
			toplam+=ciro[syil][j];
		}
		double ortalama=toplam/3.0;
		cout<<(ceyrek+1)<<". "<<ortalama<<endl;
	}
	
	return 0;
}
