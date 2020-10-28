#include<iostream>
using namespace std;

int gcd(long a, long b){
	return b==0 ?  a: gcd(b,a%b);	
}
int main() {
	long n1,n2;
	cin>>n1>>n2;
	cout<<gcd(n1,n2)<<endl;
	
	return 0;
}