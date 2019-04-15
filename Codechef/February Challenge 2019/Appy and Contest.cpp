#include<iostream>

using namespace std;

long long int gcd(long long int a,long long int b){
	if(a==b){
		return a;
	}
	if(a > b){
		return gcd(a-b, b);
	}
	return gcd(a, b-a);
} 
long long int lcm(long long int A, long long int B){
	long long int x=A/gcd(A,B);
	return x*B;
}
int main(){
	int T;
	cin>>T;
	long long int N,A,B,K,divisibleA,divisibleB,divisibleAB,solved;
	for(int i=1;i<=T;i++){
		cin>>N>>A>>B>>K;
		divisibleA=N/A;
		divisibleB=N/B;
		divisibleAB=N/lcm(A,B);
		solved=divisibleA+divisibleB-(2*divisibleAB);
		if((solved-K) >=0){
			cout<<"Win\n";
		}
		else{
			cout<<"Lose\n";
		}
	}
	return 0;
}
