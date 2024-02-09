void main(){
int array[100],i,x,f,l,m,flag=0;
printf("input %d value in ascending order \n",n);
for(i=0,i<n;i++)
scanf("%d",&array[i]);
printf("input value to be searched:");
scanf("%d",&x);
f=0;
l=n-1;
while(f<=1)
{
m = (f+l)/2;
if(x == array[m]){
flag=1;
break;
}
else if(x<array[m])
l=m-1
else
f = m+1;
}
if(flag ==0)
printf("%d value not found\n",x);
else
printf("%d value found at index%d",x,m);
}
