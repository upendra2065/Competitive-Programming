#include<iostream>
#include<vector>

using namespace std;

int main(){
	int T;
	cin>>T;
	for(int k=1;k<=T;k++){
		int N;
		long long int jar=0;
		cin>>N;
		vector<long int> vect(N+1);
		for(int i=1;i<=N;i++){
			cin>>vect[i];
			jar=jar + vect[i]-1;
		}
		jar+=1;
		cout<<jar<<"\n";
	}
	return 0;
}
