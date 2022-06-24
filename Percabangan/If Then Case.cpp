#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin>>N;
	
	if(N>9999&&N<100000){
		cout<<"puluhribuan\n";
	}else if(N>999){
		cout<<"ribuan\n";
	}else if(N>99){
		cout<<"ratusan\n";
	}else if(N>9){
		cout<<"puluhan\n";
	}else if(N>0){
		cout<<"satuan\n";
	}
	return 0;
}
