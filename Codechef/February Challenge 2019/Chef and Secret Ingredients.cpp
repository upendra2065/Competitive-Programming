#include<iostream>
#include<vector>
#include<string>
#include<limits>

using namespace std;

int main(){
	int T,N;
	cin>>T;
	for(int k=1;k<=T;k++){ 
		cin>>N;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		vector<vector<int>> vect(N);
		for(int i=0;i<N;i++){
			string str;
			getline(cin,str);
			vect[i]=vector<int>(26,0);
			for(int j=0; j<str.size();j++){
				vect[i][str[j]-'a']++;
			}
		}
		int count=0;
		for(int i=0;i<26;i++){
			int x=0;
			for(int j=0;j<N;j++){
				if(vect[j][i] == 0){
					x=1;
					break;
				}
			}
			if(x==0){
				count++;
			}
		}
		cout<<count<<"\n";
	}
	return 0;
}
