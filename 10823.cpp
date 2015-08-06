#include<cstdio>
long long int res;
int main(){
	int temp=0;
	char c;
	while(fscanf(stdin,"%c",&c)!=EOF){
		if('0'<=c&&c<='9'){
			temp *= 10;
			temp += c-'0';
		}else if(c==','){
			res += temp;
			temp = 0;
		}
	}
	printf("%lld",res+temp);

	return 0;
}
