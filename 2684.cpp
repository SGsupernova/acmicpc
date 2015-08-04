#include<stdio.h>
#include<string.h>

char s[41],temp;
int main(){
	int T,i;scanf("%d",&T);

	while(T--){
		int res[8] = {0};
		scanf("%s",s);
		
		for(i=0;i<38;i++){
			temp	= s[i+3];
			s[i+3]	= 0;
			if(!strcmp(s+i,"TTT"))	res[0]++;
			if(!strcmp(s+i,"TTH"))	res[1]++;
			if(!strcmp(s+i,"THT"))	res[2]++;
			if(!strcmp(s+i,"THH"))	res[3]++;
			if(!strcmp(s+i,"HTT"))	res[4]++;
			if(!strcmp(s+i,"HTH"))	res[5]++;
			if(!strcmp(s+i,"HHT"))	res[6]++;
			if(!strcmp(s+i,"HHH"))	res[7]++;
			
			s[i+3] = temp;
		}

		for(i=0;i<8;printf("%d ",res[i]),i++);
		printf("\n");
	}

	return 0;
}
