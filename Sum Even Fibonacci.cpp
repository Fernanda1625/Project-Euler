#include<iostream>
using namespace std;

int main(){
	long long acc = 0, fa = 0, fs = 1, sum = 0;
	while (acc<4000000){
		acc=fs+fa;
		fa=fs;
		fs=acc;
		if(acc%2==0){
			sum=sum+acc;
		}
	}
	cout<<sum<<endl;
	return 0;
}
