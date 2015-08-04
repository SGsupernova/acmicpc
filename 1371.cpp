#include<cstdio>
int main(){
	int alpa[26] = {0,},i,max=0;
	char tmp;
	while(fscanf(stdin,"%c",&tmp)!=EOF)	alpa[tmp-'a']++;
	
	for(i=0;i<26;i++) if(max <alpa[i]) max = alpa[i];
	for(i=0;i<26;i++) if(max == alpa[i]) printf("%c",'a'+i);


	return 0;
}
