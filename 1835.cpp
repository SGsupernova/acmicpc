#include<cstdio>
int main(){
	int i,j,n,rot=0,card[1001]={0,}; scanf("%d",&n);

	for(i=0;i<n;i++){
		while(card[rot]){
			rot++;
			rot%=n;
		}
		
		int limit = (i+1)%(n-i);
		for(j=0;j<limit;){
			++rot;
			rot%=n;
			if(!card[rot])
				j++;
		}
		card[rot] = i+1;
	}
	for(i=0;i<n;i++)	printf("%d ",card[i]);

	return 0;
}
