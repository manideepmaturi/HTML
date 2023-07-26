#include<stdio.h>
int main()
{
	int a[100],b[100];
	int n,m,i,j,k;
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
				u=(u+(j*j)+(3*j))%m;
				if(c[u]==0){
					b[u]=a[i];
					c[u]=1;
					break;
				}
			}
		}
	}
	for(int i=0;i<m;i++){
		printf("\n %d ",b[i]);
	}
	return 0;
	
}
