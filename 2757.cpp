#include<cstdio>
#include<stack>
using namespace std;
int main(){
	int n,m;
	stack <int> stor;
	while(1){
		scanf(" R%dC%d",&n,&m);
		if(n==0&&m==0) return 0;
		if(m==1) {
			printf("A%d\n",n);
			continue;
		}

		while(m){
			m--;
			stor.push(m%26);
			m/=26;
		}
		while(!stor.empty()){
			printf("%c",'A'+stor.top());
			stor.pop();
		}
		printf("%d\n",n);
	}
}
