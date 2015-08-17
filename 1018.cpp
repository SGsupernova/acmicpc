#include<cstdio>
char field[51][51];
int	func(int n,int m);
int main(){
	int i,j,n,m,res = 99999999; scanf("%d %d",&n,&m);

	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
			scanf(" %c",&field[i][j]);
	}

	for(i=0;i<=n-8;i++){
		for(j=0;j<=m-8;j++){
			int temp = func(i,j);
			if(res > temp) res = temp;
		}
	}
	printf("%d",res);

	return 0;
}
int func(int n,int m){
	int i,j,cnt = 0,cnt2=0;
	
	for(i=0;i<8;i++)
		for(j=0;j<8;j++){
			if((i+j)%2==0 && field[i+n][j+m]=='B')		cnt++;
			else if((i+j)%2==1 && field[i+n][j+m]=='W')	cnt++;
		}
	for(i=0;i<8;i++)
		for(j=0;j<8;j++){
			if((i+j)%2==0 && field[i+n][j+m]=='W')		cnt2++;
			else if((i+j)%2==1 && field[i+n][j+m]=='B')	cnt2++;
		}
	return cnt>cnt2?cnt2:cnt;
}
