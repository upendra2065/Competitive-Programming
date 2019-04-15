#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<limits>

using namespace std;

int main(){
	int T;
	cin>>T;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	for(int k=1;k<=T;k++){
		string str;
		getline(cin,str);
		long int N=str.size();
		vector<long int> vect(26);
		for(long int i=0;i<N;i++){
			vect[str[i]-'A']++;
		}
		vector<long int> vect1;
		for(long int i=0;i<vect.size();i++){
			if(vect[i] != 0){
				vect1.push_back(vect[i]);
			}
		}
		sort(vect1.begin(),vect1.end(),greater<long int>());
		long int min=N;
		for(long int i=1;i<=26;i++){
			if((N%i) == 0){
				long int x=N/i,count=0,greater=0,lesser=0;
				for(int j=0;j<i && j<vect1.size();j++){
					if((vect1[j]-x)>0){
						greater=greater+(vect1[j]-x);
					}
					else if((vect1[j]-x)<0){
						lesser=lesser+(x-vect1[j]);
					}
				}
				if(greater>lesser){
					if(min>greater){
						min=greater;
					}
				}
				if(lesser>=greater){
					if(min>lesser){
						min=lesser;
					}
				}
			}
		}
		cout<<min<<"\n";		 
	}
	return 0;
}
