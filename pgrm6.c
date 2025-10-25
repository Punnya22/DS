#include<stdio.h>
#include<stdlib.h>
//set operation using bit string
struct bit{unsigned char x:1;};
int uset[]={1,2,3,4,5,6,7,8,9},size=9;
void main()
{
void readset(struct bit[],int n);
void printset(struct bit[]);
void unionset(struct bit[],struct bit[],struct bit[]);
void interset(struct bit[],struct bit[],struct bit[]);
void diffrence(struct bit[],struct bit[],struct bit[]);
struct bit a[10]={0},b[10]={0},c[10]={0};
int n;
printf("Number of element in set A : ");
scanf("%d",&n);
readset(a,n);
printf("Number of element in set B : ");
scanf("%d",&n);
readset(b,n);
printf("set A : ");printset(a);
printf("set B : ");printset(b);
unionset(a,b,c);
printf("A U B = ");printset(c);
interset(a,b,c);
printf("A interset B = ");printset(c);
diffrence(a,b,c);
printf("A - B = ");printset(c);
}
//to read a set and store as bit string
void readset(struct bit a[],int n)
{
int i,x,k;
printf("enter %d elementes :",n);
for(i=0;i<n;i++)
{
scanf("%d",&x);
for(k=0;k<size;++k)
if(uset[k]==x) //if x is a member of universalset
              //set 1 corresponding to x in a[]
{
a[k].x=1;
break;
}
}
return;
}
//to print a set from bit string representation
void printset(struct bit a[])
{
int k;
printf("{");
for(k=0;k<size;++k)
if(a[k].x==1)
printf("%d,",uset[k]);
printf("}\n");
return;
}
//to find union of 2 sets using bit string
void unionset(struct bit a[],struct bit b[],struct bit c[])
{
int k;
for(k=0;k<size;++k)
c[k].x=a[k].x | b[k].x;
return;
}
//to find interset of 2 sets using bit string
void interset(struct bit a[],struct bit b[],struct bit c[])
{
int k;
for(k=0;k<size;++k)
c[k].x=a[k].x & b[k].x;
return;
}
//to find diffrence of 2 sets
void diffrence(struct bit a[],struct bit b[],struct bit c[])
{
int k;
for(k=0;k<size;++k)
if(a[k].x==1)
c[k].x=a[k].x ^ b[k].x;
return;
}
