
struct student
{
	char name[20];
	int marks;
	int rollno;
	char present;
};

void main()
{
	struct student s[100];
	int max=0,min=101,total=0,n,i,p=0,maxcnt=0,cnt[100],j,temp;
	float avg;
	 printf("\n enter no of student");
	 scanf("%d",&n);

	 for(i=0;i<n;i++)
	    {
	 	   cnt[i]=0;
	    }
	 for(i=0;i<n;i++)

	 {
		 printf("\n enter roll no");

		 scanf("%d",&s[i].rollno);

		 printf("\n enter name");
		 scanf("%s",s[i].name);

		 printf("\n enter the test present/absent status ");
		 scanf("%s",&s[i].present);

		 if(s[i].present=='y')
		 {
			 printf("\n enter marks");
			 scanf("%d",&s[i].marks);
			 p++;

		 }
	 }
	 for(i=0;i<n;i++)
	 {
		 if (s[i].present=='y')
		 {
			 total=total+s[i].marks;

		 }
	 }
	 avg=total/p;
	 printf("\n avg score of student=%f",avg);

     for(i=0;i<n;i++)
     {
    	 if (s[i].present=='y')
    	 {
    		 if (max<s[i].marks)
    		 {
    			max=s[i].marks;
    		 }
    		 if(min>s[i].marks)
    		 {
    		    min=s[i].marks;
    		 }
    	 }
     }
     printf( "\n highest score=%d",max);
     printf("\n lowest score=%d",min);
     printf("\n list of absent student is::");
     {
     for(i=0;i<n;i++)
     {
    	 if(s[i].present=='n')
    	 {
    		 printf("\n %d",s[i].rollno);
    		 printf("\n %s",s[i].name);
    	 }
     }
  for(i=0;i<n,s[i].present=='y';i++)
  {
	  for(j=i+1;j<n;j++)
	  {
		  if(s[i].marks==s[j].marks)
		  {
			  cnt[i]++;
		  }

	  }
	  for(i=0;i<n;i++)
	  {
		  if(cnt[i]>maxcnt)
			  {
			  maxcnt=cnt[i];
			   temp=i;
			  }
     }
printf("\n most of the student scored\n%d ",s[temp].marks);
  }
}
}
