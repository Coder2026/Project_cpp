#include<bits/stdc++.h>
using namespace std;


int main(){
	int n,isi[100000],temp,max=0,angka;
	bool mod[100000];
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>isi[i];
		mod[i]=true;
	}
	
	int x=0;
	while(x<n){	
	if(mod[x]){
	int sum=1;
	temp=isi[x];
	mod[x]=false;
	for(int j=x+1;j<n;j++){
		if(temp==isi[j]){
			
			mod[j]=false;
			sum++;
		 	}
	 	}
		 if(max<sum){
		max=sum;
		angka=temp;
		}else if(max==sum){
			if(temp>angka){
			max=sum;
			angka=temp;	
			}
		}	
}
	x++;
	}
	cout<<angka<<endl;

}
