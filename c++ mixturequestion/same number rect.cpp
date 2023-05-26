#include<iostream>
using namespace std;
int main(){
int i,j,k;
int n;
cin>>n;
for(i=1;i<=n;i++){
for(j=1;j<=n-i;j++){
	cout<<" ";
}
for(j=1;j<=i;j++){
	cout<<j;
}
for(k=(i-1);k>=1;k--){
	cout<<k;
	}
cout<<endl;
}
return 0;
}
