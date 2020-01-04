void read(int [10][10],int,int);
void print(int [10][10],int,int);
void add(int [10][10],int [10][10],int [10][10],int,int);
void sub(int [10][10],int [10][10],int [10][10],int,int);
void mul(int [10][10],int [10][10],int [10][10],int,int);
void diasum(int [10][10],int ,int);
void transpose(int [10][10],int,int);
void main()
{
	int a[10][10],b[10][10],c[10][10],m,n,ch;
	printf("\n enter row and column");
	scanf("%d%d",&m,&n);
	printf("\n enter first matrix \n");
	read(a,m,n);

		printf("\n entered first matrix is \n ");
		print(a,m,n);

	printf("\n enter second matrix \n");
	read(b,m,n);
		printf("\n entered second matrix  is \n");
		print(b,m,n);

do{
	printf("\n 1.addition\n 2.subtraction\n 3.multiplication\n 4.diagonal sum\n  5.transpose\n  6.exit");
	printf("\n enter your choice");
	scanf("%d",&ch);

	switch(ch)
	{
	case 1:add(a,b,c,m,n);
	printf("\n Addition of matrix is \n");
	       print(c,m,n);
	       break;
	case 2:sub(a,b,c,m,n);
	printf("\n subtraction of matrix is \n");
           print(c,m,n);
	       break;

	case 3:mul(a,b,c,m,n);
	printf("\n Multiplication of matrix is \n");

	      print(c,m,n);
	      break;
	case 4:	printf("\n the sum of diagonal of matrix is \n");
           diasum(a,m,n);

	       break;
	case 5:transpose(a,m,n);
	       printf("\n transpose of 1st matrix\n");
	       print(a,m,n);
	       transpose(b,m,n);
	       printf("\n transpose of 2nd matrix\n");
	       print(b,m,n);
	       break;
	case 6:exit(0);
	}
}while(ch!=7);
}
void read(int x[10][10],int m,int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
}

void print(int x[10][10],int m,int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t%d",x[i][j]);
		}
		printf("\n");
	}
}
void add(int x[10][10],int y[10][10],int z[10][10],int n,int m)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			z[i][j]=x[i][j]+y[i][j];
		}

	}
}
void sub(int x[10][10],int y[10][10],int z[10][10],int n,int m)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			z[i][j]=x[i][j]-y[i][j];
		}

	}
}

void mul(int x[10][10],int y[10][10],int z[10][10],int n,int m)

{
	int i,j,k;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			z[i][j]=0;
			for(k=0;k<n;k++)
			{
			z[i][j]=z[i][j]+x[i][k]*y[k][j];
		   }
	}
}
}
void diasum(int x[10][10],int m,int n)
{
	int i,j,sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+x[i][j];
	}
	printf("\n diagonal sum=%d",sum);
	{

	}
}
void transpose(int x[10][10],int m,int n)
{
	int i,j,temp=1;
	for(i=0;i<m-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				temp=x[i][j];
				x[i][j]=x[j][i];
				x[j][i]=temp;
			}
		}

}


