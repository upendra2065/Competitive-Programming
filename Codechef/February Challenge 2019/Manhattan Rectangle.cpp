#include <iostream>

using namespace std;

int main(){ 
	int T;
	long long int d1,d2,d3,d4,x0,y0,xl,yl,xu,yu,x;
	cin>>T;
	for(int k=1;k<=T;k++){
    		cout<<"Q "<<"0 "<<"0\n"<<flush;
		cin>>d1;
		cout<<"Q "<<"1000000000 "<<"0\n"<<flush;	 
		cin>>d2;
		cout<<"Q "<<"0 "<<"1000000000\n"<<flush;
		cin>>d3;
		cout<<"Q "<<(d1-d2+1000000000)/2<<" 0\n"<<flush;
		cin>>d4;
		yl=d4;
		xl=d1-d4;
		xu=1000000000-d2+d4;
		yu=1000000000-d3+d1-d4;
		cout<<"A "<<xl<<" "<<yl<<" "<<xu<<" "<<yu<<"\n"<<flush;
		cin>>x;
	} 
    return 0;
}
 
