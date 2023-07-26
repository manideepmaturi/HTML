#include<stdio.h>
int main()
{
	int a[100],b[100];
	int n,m,i,j,k,count=0;
	scanf("%d%d",&n,&m);
	printf("enter elements");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int c[m];
	for(i=0;i<m;i++)
	{
		c[i]=0;
		b[i]=0;
	}
	for(i=0;i<n;i++){
		k=a[i]%m;
		if(c[k]==0){
			b[k]=a[i];
			c[k]=1;
		}
		else{
			for(j=0;j<m;j++){
				int u;
				u=k;
				int v=1+(a[i]%(m-1));
				u=(u+(j*v))%m;
				if(c[u]==0){
					b[u]=a[i];
					c[u]=1;
					break;
				}
				count++;
			}
		}
	}
	for(int i=0;i<m;i++){
		printf("\n %d \n",b[i]);
	}
	printf("%d",count);
	return 0;
	
}
