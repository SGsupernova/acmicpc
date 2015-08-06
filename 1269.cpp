#include<cstdio>
#include<algorithm>
using namespace std;
int setA[200001],setB[200001],res;
int main(){
	int i,n,m; scanf("%d %d",&n,&m);
	res = n+m;

	for(i=0;i<n;i++)	scanf("%d",&setA[i]);
	for(i=0;i<m;i++)	scanf("%d",&setB[i]);

	sort(setA,setA+n);
	sort(setB,setB+m);

	for(i=0;i<n;i++){
		int left=0,right=m-1,mid;
		while(left<right){
			mid = (left+right)/2;
			if(setB[mid]<setA[i])		left	= mid+1;
			else if(setB[mid]>setA[i])	right	= mid-1;
			else{
				left = mid;
				break;
			}
		}
		if(setB[left] == setA[i]) res--;
	}

	for(i=0;i<m;i++){
		int left=0,right=n-1,mid;
		while(left<right){
			mid = (left+right)/2;
			if(setA[mid]<setB[i])		left	= mid+1;
			else if(setA[mid]>setB[i])	right	= mid-1;
			else {
				left = mid;
				break;
			}
		}
		if(setA[left] == setB[i]) res--;
	}

	printf("%d",res);

	return 0;
}
