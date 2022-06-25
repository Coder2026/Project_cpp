#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	
	int angka,sum=2;
	cin>>angka;
		bool prime=true;
		if(angka<2){
		prime=false;	
		}
		while(sum<trunc(sqrt(angka))){
			
			if(angka%sum==0){
				prime=false;
				break;
			}
			sum++;
		}
		if(prime){
			cout<<"YA\n";
		}else{
			cout<<"BUKAN\n";
		}
	}
}
