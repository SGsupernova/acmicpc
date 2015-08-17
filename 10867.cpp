#include<cstdio>
#include<algorithm>

using namespace std;
int arr[100001];
int main(){
	int i,n; scanf("%d",&n);

	for(i=0;i<n;scanf("%d",&arr[i++]));
	sort(arr,arr+n);

	printf("%d ",arr[0]);
	for(i=1;i<n;i++)
		if(arr[i-1]!=arr[i]) printf("%d ",arr[i]);

	return 0;
}
