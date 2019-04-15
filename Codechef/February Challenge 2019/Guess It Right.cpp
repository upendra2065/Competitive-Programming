#include<iostream>

using namespace std;

long int modInverse(long int a,long int m) { 
    long int m0 = m; 
    long int y = 0, x = 1; 
    if (m == 1) 
      return 0; 
    while (a > 1){ 
        long int q = a / m; 
        long int t = m;
        m = a % m, a = t; 
        t = y; 
        y = x - q * y; 
        x = t; 
    } 
    if (x < 0) 
       x += m0; 
    return x; 
}

long int power(long int x, long int y, long int p) 
{ 
    long int res = 1;       
    x = x % p;   
    while (y > 0) 
    { 
        if (y & 1) 
            res = (res*x) % p;
        y = y>>1; 
        x = (x*x) % p;   
    } 
    return res; 
} 
 
int main(){
	int T,N,K,M;
	cin>>T;
	for(int k=1;k<=T;k++){
		cin>>N>>K>>M;
		long int m=1000000007,x0,y0,y1,x,res;
		y0=modInverse(N,m);
		if(M%2 == 1){
			x0=(1+m-y0)%m;
			x=power(x0,(M+1)/2,m);
			res=(1+m-x)%m;
			cout<<res<<"\n";;
		}
		else{
			y1=modInverse(N+K,m);
			x0=(1+m-y0)%m;
			x=power(x0,M/2,m);
			res=(1+m-x)%m + (x*y1)%m;
			cout<<res%m<<"\n";
		}
	}
	return 0;
}
