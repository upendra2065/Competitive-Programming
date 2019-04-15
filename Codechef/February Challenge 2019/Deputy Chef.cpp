#include<iostream>
#include<vector>

using namespace std;

class soldier{
	public:
		int valueA;
		int valueD;
};

int main(){
	int T;
	cin>>T;
	for(int k=1;k<=T;k++){
		int N;	
		cin>>N;
		vector<soldier> soldiers(N+1);
		for(int i=1;i<=N;i++){
			cin>>soldiers[i].valueA;
		}
		for(int i=1;i<=N;i++){
			cin>>soldiers[i].valueD;
		}
		int best=-1;
		for(int i=1;i<=N;i++){
			if(i==1){
				if(soldiers[1].valueD > (soldiers[N].valueA+soldiers[2].valueA)){
					if(soldiers[1].valueD>best){
						best=soldiers[1].valueD;
					}
				}
			}
			else if(i==N){
				if(soldiers[N].valueD > (soldiers[N-1].valueA+soldiers[1].valueA)){
					if(soldiers[N].valueD>best){
						best=soldiers[N].valueD;
					}
				}
			}
			else{
				if(soldiers[i].valueD > (soldiers[i-1].valueA+soldiers[i+1].valueA)){
					if(soldiers[i].valueD>best){
						best=soldiers[i].valueD;
					}
				}
			}	
		}
		cout<<best<<"\n";
	}
	 
	return 0;
}
