#include<bits/stdc++.h>
using namespace std;

#define  ll long long
#define MAX 1000000
#define mod 1000000007

//bit pos strats from 0 thats why +1
void display(int &subset,int n){
	for(int bit_pos=0,bit_pos<n;i++){
		if(subset&(1<<bit_pos))
			cout<<bit_pos+1<<" ";
	}
}


int main(){
	int n=10;
	int SubSetMask=15;
	display(SubSetMask,n)
	return 0;
}