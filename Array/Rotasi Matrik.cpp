#include<bits/stdc++.h>

using namespace std;

int main(){
	int N,M,arr[101][101];
	cin>>N>>M;
	
	for(int i=1;i<=N;i++){
		for(int j=1;j<=M;j++){
			cin>>arr[i][j];
		}
	}
	
		for(int k=1;k<=M;k++){
		for(int l=N;l>=1;l--){
			cout<<arr[l][k];
			if(l>1){
				cout<<" ";
			}
		}
		cout<<endl;
	}
	
}
