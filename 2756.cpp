#include<cstdio>
int main(){
	int T; scanf("%d",&T);

	while(T--){
		int scrA=0,scrB=0;
		double x,y,dist;
		for(int i=0;i<6;i++){
			int sum = 0;
			scanf("%lf %lf",&x,&y);
			dist = x*x+y*y;

			if(dist<=9.00)		sum = 100;
			else if(dist<=36.00)sum = 80;
			else if(dist<=81.00)sum = 60;
			else if(dist<=144.00)sum = 40;
			else if(dist<=225.00)sum = 20;
			
			if(i<3) scrA += sum;
			else	scrB += sum;
		}
		printf("SCORE: %d to %d, ",scrA,scrB);
		
		if(scrA>scrB)	printf("PLAYER 1 WINS.");
		else if(scrA==scrB)	printf("TIE.");
		else if(scrA<scrB)	printf("PLAYER 2 WINS.");
		printf("\n");
	}

	return 0;
}
