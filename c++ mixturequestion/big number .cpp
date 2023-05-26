#include<iostream>
using namespace std;
int main(){
	int i,j;
	int n;
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=i;j<=n;j++){
		cout<<j;
		}
			for(j=1;j<=i-1;j++){
				cout<<j;
			}
	
		cout<<endl;
	}
	return 0;
}
