#include<bits/stdc++.h>

using namespace std;

int main(){
	int a,sum=0;
	cin>>a;
	
	for(int i=a;i>=1;i--){
		for(int j=i-1;j<a;j++){
		 if(sum>9){
		 	sum=0;
		 }	
		 cout<<sum;
		 sum++;
		}
		cout<<endl;
	}
}
