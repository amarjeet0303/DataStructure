#include <iostream>
#include<stdlib.h>
using namespace std;

int length(char[10]);
void copy(char[10],char[10]);
void conca(char[10],char[10]);
void compare(char[10],char[10]);
int search(char[10],char[10]);
void reverse(char[10]);

int main()
{
	char a[10],b[10],c[10];
	int ch,loc;
    cout<<"\n Enter the first string:";
    cin>>a;
    cout<<"\n Enter the second string:";
    cin>>b;
    cout<<"\n First string :"<<a;
    cout<<"\n Second string :"<<b;

    do
    {
	cout<<"\n 1.Find the length. \n 2.Copy. \n 3.Concatenate. \n 4.Compare. \n 5.Search. \n 6.Reverse. \n 7.Exit.";
	cout<<"\n Enter the choice";
	cin>>ch;

	switch (ch)
	{
	case 1:

		   cout<<"\n Entered string\n"<<a<<"length is="<<length(a);
		   cout<<"\n Entered string\n"<<b<<"length is="<<length(b);
		break;

	case 2:
		cout<<"\n Given string are :";
		cout<<"\n First string :"<<a;
		cout<<"\n Second string :"<<b;
		copy(b,a);
		break;

	case 3:
		cout<<"\n Given string are :";
		cout<<"\n First string :"<<a;
		cout<<"\n Second string :"<<b;
		conca(a,b);
		break;

	case 4:
		cout<<"\n Given string are :";
		cout<<"\n First string :"<<a;
		cout<<"\n Second string :"<<b;
		cout<<"\n Comparison is:";
		compare(a,b);
		break;

	case 5:
		cout<<"\n Given string are :";
		cout<<"\n First string :"<<a;
		cout<<"\n Enter the search string:";
		cin>>c;
		loc=search(a,c);
		if(loc==-1)
		{
			cout<<"\n Search string is not found";
		}
		else
		{
			cout<<"\n Search string found"<<loc+1;
		}
		break;

	case 6:
		cout<<"\n Given string are :";
		cout<<"\n First string :"<<a;
		reverse(a);
		break;

	case 7:
		exit(0);

	}
    }
    while(ch!=7);

 return 0;
}

int length(char x[10])
{
	int l=0;
	while(x[l]!='\0')
	{
		l++;
	}
	return(l);
}


void copy(char x[10],char y[10])
{
	int i=0;
	while(x[i]!='\0')
	{
		y[i]=x[i];
		i++;
	}
	y[i]='\0';
	cout<<"\n copied string is:"<<y;
}

void compare(char x[10],char y[10])
{
	int i=0;
	while(x[i]==y[i]&&x[i]!='\0')
	{
		i++;
	}
	if(y[i]>x[i])
	{
		cout<<"Second string is greater";
	}
	else
	{
		if(y[i]<x[i])
		{
			cout<<"Second string is smaller";
		}
		else
		{
			cout<<"Both are equal";
		}
	}
}


void reverse(char x[10])
{
	int i=0,j=0,temp;
	while(x[j]!='\0')
	{
		j++;
	}
	j--;
	while(i<j)
	{
		temp=x[i];
		x[i]=x[j];
		x[j]=temp;
		i++;
		j--;
	}
	cout<<"\n Reverse string is:"<<x;
}


void conca(char a[100],char b[100])
    {
    int i,j;
    i=length(a);
    for(j=0;b[j]!='\0';i++,j++)
    {
    a[i]=b[j];
    }
    a[i]='\0';
   cout<<"\Final string is "<<a<<endl;
    }

int search(char a[10],char b[10])
{
int i,j,k=0;
i=0;j=0;
while(a[i]!='\0')
{
while(a[i]!=b[0]&&a[i]!='\0')
{
i++;
}
if (a[i]=='\0')
{
return(-1);
}
k=i;
while((a[i]==b[j])&&((a[i]!='\0')&&(b[j]!='\0')))
{
i++;
j++;
}
if (b[j]=='\0')
{

return k;
}
if(a[i]=='\0')
{
return(-1);
}
i=k+1;
j=0;
    }
return 0;
}
