#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
	int T;
	cin>>T;
	for(int m=1;m<=T;m++){
		int N;
		cin>>N;
		string P;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		getline(cin,P);
		vector<char> ans(P.size());
		int count_S=0,count_E=0,start_index=0,end_index;
		if(P[0]=='S'){
			count_S++;
		}
		else{
			count_E++;
		}
		for(int i=1;i<P.size();i++){
			if(count_E==count_S){
				for(int j=start_index;j<=end_index;j++){
					if(P[j]=='S'){
						ans[j]='E';
					}
					else{
						ans[j]='S';
					}
				}
				start_index=end_index+1;
			}
			if(P[i]=='S'){
				count_S++;
				end_index=i;
			}
			if(P[i]=='E'){
				count_E++;
				end_index=i;
			}
		}
		for(int j=start_index;j<=end_index;j++){
			if(P[j]=='S'){
				ans[j]='E';
			}
			else{
				ans[j]='S';
			}
		}
		cout<<"Case #"<<m<<": ";
		for(int i=0;i<P.size();i++){
			cout<<ans[i];
		}
		cout<<ans.size()<<"\n";
	}
	return 0;
}
