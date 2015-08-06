#include<cstdio>
char str[5000];
long long int res;
int main(){
	scanf("%s",str);

	int temp=0;
	for(int i=0;str[i]!=0;i++){
		if(str[i] != ','){
			temp *= 10;
			temp += str[i]-'0';
		}else{
			res += temp;
			temp = 0;
		}
	}
	printf("%lld",res+temp);

	return 0;
}
