#include<iostream>
#include <cmath>
using namespace std;
struct phanso {
	int tuso;
	int mauso;
};
int uocChunglonnhat(int a, int b){
		if(a!= 0 && b !=0){
		while (a != b){
			if(a>b){
				a = a-b;
			}
			if(b>a){
				b = b -a;
			}
	
}
}
}
 conghaiphanso(int a,int b,int c, int d){
  cout<<"conghaiphanso"<< a*d + b*c<< "/"<<b*d	;
}
	
int main(){
	int a,b;
	float thuongso;
	phanso phansodautien;
	cout<<"nhap tu so:";
	cin>>phansodautien.tuso;
	cout<<"nhap mau so:";
	cin>>phansodautien.mauso;
	int uocso = uocChunglonnhat(phansodautien.tuso,phansodautien.mauso);
	cout<<"Rut gon: "<<phansodautien.tuso / uocso <<"/"<<phansodautien.mauso / uocso;
	conghaiphanso(1,2,3,4);
	
}
