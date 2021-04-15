#include<stdio.h>
#include<stdlib.h>
struct student
{
   int roll,m1,m2,tot;
   char name[10],add[50],cont[10];
   float per;
};
void display(struct student *s,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\n%d %s %d %d %d %f %s %s",s[i].roll,s[i].name,s[i].m1,s[i].m2,s[i].tot,s[i].per,s[i].cont,s[i].add);
    }
}
int main()
{
    struct student *s;
    int i,n,choice,rno,f=0;
        int choice1;
        printf("enter the number of student");
        scanf("%d",&n);
        s=(struct student*)malloc(sizeof(struct student)*n);
        for(i=0;i<n;i++)
        {
            printf("enter the roll no,name,m1,m2,contact no and address");
            scanf("%d %s %d %d %s %s",&s[i].roll,s[i].name,&s[i].m1,&s[i].m2,s[i].cont,s[i].add);
            s[i].tot=s[i].m1+s[i].m2;
            s[i].per=s[i].tot/2.0f;
        }
        do
        {
            printf("\n1.display\n2.search\n3.modify\n4.delete\n5.exit");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1:
                    display(s,n);
                    break;
                case 2: f=0;
                printf("enter the number to search");
                scanf("%d",&rno);
                for(i=0;i<n;i++)
                {
                    if(s[i].roll==rno)
                    {
                     printf("\n%d %s %d %d %d %f %s %s",s[i].roll,s[i].name,s[i].m1,s[i].m2,s[i].tot,s[i].per,s[i].cont,s[i].add);
                     f=1;
                     break;
                    }
                }
                if(f==0)
                    printf("record not found");
                break;
                case 3: f=0;
                printf("enter the roll no to modify");
                scanf("%d",&rno);
                for(i=0;i<n;i++)
                {
                    if(s[i].roll==rno)
                    {
                        f=1;
                        printf("1.marks\n2.contact\n3.address");
                        scanf("%d",&choice1);
                        if(choice1==1)
                        {
                            printf("enter new m1 and m2");
                            scanf("%d %d",&s[i].m1,&s[i].m2);
                            s[i].tot=s[i].m1+s[i].m2;
                            s[i].per=s[i].tot/2.0f;
                        }
                        else if(choice1==2)
                        {
                            printf("enter mew contact");
                            scanf("%s",s[i].cont);
                        }

                        else if(choice1==3)
                        {
                            printf("enter new address");
                            scanf("%s",s[i].add);
                        }
                        else{
                            printf("invalid choice");
                        }
                        break;
                    }
                }
                if(f==0)
                    printf("record not found");
                break;
                case 4: f==0;
                printf("enter roll no to delete");
                scanf("%d",&rno);
                for(i=0;i<(n-1);i++)
                {
                    if(s[i].roll==rno)
                    {
                        for(;i<(n-1);i++)
                        {
                            s[i]=s[i+1];
                        }
                        f=1;
                        n--;
                        break;
                    }
                }
                if(f==0)
                    printf("record not found");
                break;
                case 5: break;
                default:printf("invalid choice");

        }
        }
        while(choice!=5);


        }
