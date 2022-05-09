#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"nhap so a:";
	cin>>a;
	cout<<"nhap so b:";
	cin>>b;
	if(a>b){
		cout<<a<<">"<<b;
	}
	else if(a <b){
		cout<<a<< "<"<<b;
	}
	else if( a == b)
	{
		cout<<a<<"="<<b;
	}
}
