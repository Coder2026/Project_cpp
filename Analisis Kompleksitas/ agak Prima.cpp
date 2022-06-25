#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	
	int angka,sum=2,K=0;
	cin>>angka;
		bool prime=true;
		if(angka<1){
		prime=false;		
		}
		while(sum<trunc(angka/2)){
			
			if(angka%sum==0){
				K++;
				if(K>2){
				prime=false;
				break;
				}
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
