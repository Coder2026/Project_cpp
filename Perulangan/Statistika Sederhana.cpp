#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,max=0,min,b=0;
	cin>>a;
	
    cin>>b;
	max=b;
	min=b;
	for(int i=1;i<a;i++){
		cin>>b;
		if(max<b){
			max=b;
		}
		if(min>b){
			min=b;
		}
	}
	cout<<max<<" "<<min<<endl;
}
