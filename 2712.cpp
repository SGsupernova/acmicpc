#include<stdio.h>
#include<string.h>
int main(){
	int T;scanf("%d",&T);
	while(T--){
		double val; char unit[3]; scanf("%lf %s",&val ,unit);
		if(!strcmp(unit,"kg"))
			printf("%.4lf lb\n",val*2.2046);
		else if(!strcmp(unit,"lb"))
			printf("%.4lf kg\n",val*0.4536);
		else if(!strcmp(unit,"l"))
			printf("%.4lf g\n",val*0.2642);
		else
			printf("%.4lf l\n",val*3.7854);
	}

	return 0;
}
