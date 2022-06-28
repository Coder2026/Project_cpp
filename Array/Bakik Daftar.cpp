#include<bits/stdc++.h>
using namespace std;

int main(){
	int n=1,arr[101];
	
	while(!cin.eof()){
		cin>>arr[n];
		n++;
	}
	
	for(int i=n-2;i>0;i--){
		cout<<arr[i]<<endl;
	}

}
