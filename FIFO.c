#include<stdio.h>
main()
{
int i,j,nof,nor,flag=0,ref[10],frm[10],pf=0,victim=-1;
system("clear");
printf("***** FIFO (First in first out) Page replacement algorithm ******\n");
printf("\n Enter no.of frames in memory : ");
scanf("%d",&nof);
printf("Enter number of pages required to process : ");
scanf("%d",&nor);
printf("Enter the pages numbers to load in sequence : ");
for(i=0;i<nor;i++)
scanf("%d",&ref[i]);
for(i=1;i<=nof;i++)
frm[i]=-1;
printf("\n");
for(i=0;i<nor;i++)
{
flag=0;
printf("\n\t Reference pn %d->\t",ref[i]);
for(j=0;j<nof;j++)
{
if(frm[j]==ref[i])
{
flag=1;
printf("already present in memory");
break;
}
}
if(flag==0)
{
pf++;
victim++;
victim=victim%nof;
frm[victim]=ref[i];
for(j=0;j<nof;j++)
printf("%4d",frm[j]);
}
}
printf("\n\n No.of pages faults : %d \n\n",pf);
}

