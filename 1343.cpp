#include<cstdio>
#define putA for(int k=0;k<4;k++) res[j++] = 'A';
#define putB for(int k=0;k<2;k++) res[j++] = 'B';
int main(){
	int cnt=0,i=0,j=0;
	char str[505]={0,},res[505]={0,}; scanf("%s",str);

	for(;str[i]!=0;i++){
		if(str[i]=='.'){
			res[j++] = '.';
			continue;
		}
		cnt++;
		if(cnt == 4){
			putA
			cnt=0;
		}
		if(str[i] != str[i+1]){
			if(cnt==2){
				putB
				cnt=0;
			}
			else if(cnt){
				printf("-1");
				return 0;
			}
		}
	}
	res[j] = 0;
	printf("%s",res);

	return 0;
}
