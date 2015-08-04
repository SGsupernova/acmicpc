#include<cstdio>
#include<string.h>

int main(){
	int n,push_num,top=-1,stack[10002]; scanf("%d",&n);

	while(n--){
		char str[6];
		scanf(" %s",str);
		if(!strcmp(str,"push")){
			scanf(" %d",&push_num);
			stack[++top] = push_num;
		}
		else if(!strcmp(str,"pop")){
			if(top == -1)	printf("-1\n");
			else			printf("%d\n",stack[top--]);
		}
		else if(!strcmp(str,"size")){
			printf("%d\n",top+1);
		}
		else if(!strcmp(str,"empty")){
			if(top == -1)	printf("1\n");
			else			printf("0\n");
		}
		else if(!strcmp(str,"top")){
			if(top == -1)	printf("-1\n");
			else			printf("%d\n",stack[top]);
		}
	}

	return 0;
}
