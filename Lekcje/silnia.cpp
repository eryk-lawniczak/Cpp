#include<iostream>

using namespace std;

int s(int n){
	if(n==0||n==1) return 1;
	return n*s(n-1);
}

int main(){
	int n;
	cin>>n;
	cout<<s(n)<<endl;
	return 0;
}
