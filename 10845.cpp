#include<cstdio>
#include<string.h>
int main(){
	int front=-1,rear=0,queue[10001],n,push_num;scanf("%d",& n);

	while(n--){
		char str[6]; scanf(" %s",str);
		
		if(!strcmp(str,"push")){
			scanf("%d",&push_num);
			queue[++front]=push_num;
		}
		else if(!strcmp(str,"pop")){
			if(front < rear)	printf("-1\n");
			else				printf("%d\n",queue[rear++]);
		}
		else if(!strcmp(str,"size")){
			printf("%d\n",front-rear+1);
		}
		else if(!strcmp(str,"empty")){
			if(front < rear)	printf("1\n");
			else				printf("0\n");
		}
		else if(!strcmp(str,"front")){
			if(front < rear)	printf("-1\n");
			else				printf("%d\n",queue[rear]);
		}
		else if(!strcmp(str,"back")){
			if(front < rear)	printf("-1\n");
			else				printf("%d\n",queue[front]);
		}
	}

	return 0;
}
