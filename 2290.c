#include<stdio.h>

#define vert(x,y)	for(j=0;j<s;j++) cnum[i][y+j][x] = '|';
#define hori(x,y)	for(j=0;j<s;j++) cnum[i][y][x+j] = '-';
int i,j;	//iterator
long long int s;
char num[11],cnum[11][23][12];
int main(){
	int x,y;
	scanf("%lld %s",&s,num);

	while(num[i]!=0){
		switch(num[i]){
			case '1':
				vert(s+1,1);
				vert(s+1,s+2);
				break;
			case '2':
				hori(1,0);
				vert(s+1,1);
				hori(1,s+1);
				vert(0,s+2);
				hori(1,2*s+2);
				break;
			case '3':
				hori(1,0);
				vert(s+1,1);
				hori(1,s+1);
				vert(s+1,s+2);
				hori(1,2*s+2);
				break;
			case '4':
				vert(0,1);
				vert(s+1,1);
				hori(1,s+1);
				vert(s+1,s+2);
				break;
			case '5':
				hori(1,0);
				vert(0,1);
				hori(1,s+1);
				vert(s+1,s+2);
				hori(1,2*s+2);
				break;
			case '6':
				hori(1,0);
				vert(0,1);
				hori(1,s+1);
				vert(0,s+2);
				vert(s+1,s+2);
				hori(1,2*s+2);
				break;
			case '7':
				hori(1,0);
				vert(s+1,1);
				vert(s+1,s+2);
				break;
			case '8':
				hori(1,0);
				vert(0,1);
				vert(s+1,1);
				hori(1,s+1);
				vert(0,s+2);
				vert(s+1,s+2);
				hori(1,2*s+2);
				break;
			case '9':
				hori(1,0);
				vert(0,1);
				vert(s+1,1);
				hori(1,s+1);
				vert(s+1,s+2);
				hori(1,2*s+2);
				break;
			case '0':
				hori(1,0);
				vert(0,1);
				vert(s+1,1);
				vert(0,s+2);
				vert(s+1,s+2);
				hori(1,2*s+2);
				break;
		}
		i++;
	}

	for(y=0;y<2*s+3;y++){
		for(i=0;num[i]!=0;i++){
			for(x=0;x<s+2;printf("%c",cnum[i][y][x]?cnum[i][y][x]:' '),x++);
			printf(" ");
		}
		printf("\n");
	}
				
	

	return 0;
}

