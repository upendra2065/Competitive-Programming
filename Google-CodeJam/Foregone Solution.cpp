#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
	int T;
	cin>>T;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	for(int m=1;m<=T;m++){
		string str;
		getline(cin,str);
		vector<int> D(str.size());
		vector<int> A(str.size());
		vector<int> B(str.size());
		for(int i=0;i<str.size();i++){
			D[i]=str[i]-'0';
		}
		for(int i=0;i<str.size();i++){
			if(D[i]==4){
				A[i]=2;
				B[i]=2;
			}
			else{
				A[i]=D[i];
				B[i]=0;
			}
		}
		int index;
		for(int i=0;i<str.size();i++){
			if(B[i] != 0){
				if(i==0){
					index=0;
				}
				else{
					index=i;
				}
				break;
			}
		}
		cout<<"Case #"<<m<<": "; 
		for(int i=0;i<A.size();i++){
			cout<<A[i];
		}
		cout<<" ";
		for(int i=index;i<B.size();i++){
			cout<<B[i];
		}
		cout<<"\n";
	}
	return 0;
}
