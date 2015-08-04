#include<stdio.h>
int c[26],i;
char s[111];
int main(){
	scanf("%s",s);
	for(;s[i]!=0;i++) c[s[i]-97] ++;
	for(i=0;i!=26;i++) printf("%d ",c[i]);
}
