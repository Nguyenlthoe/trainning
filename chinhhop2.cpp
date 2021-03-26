#include<iostream>
using namespace std;
long long chinhhop(int n,int k){
	long long ans=1;
	for(int i = n - k + 1; i <= n;i++){
		ans*=i;
	}
	return ans;
}
int main(){
	int n,k;
	cin>>n>>k;
	cout<<chinhhop(n,k);
}
