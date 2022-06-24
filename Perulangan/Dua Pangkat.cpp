#include<bits/stdc++.h>
using namespace std;

int main(){
	int a;
	cin>>a;
	while(a%2==0&&a>1){
		a/=2;
	}
	if(a==1){
			cout<<"ya\n";}
	else{
		cout<<"bukan\n";
	}
}
