#include<iostream>
using namespace std;
int main(){

int i,j;
int n;
cin>>n;
for(i=0;i<=n;i++){
for(j=0;j<=n-i;j++){
	cout<<"*";
}
cout<<endl;
}
return 0;
}
