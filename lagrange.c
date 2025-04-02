#include<stdio.h>
int main(){
int n,i,j;
printf("Enter the number of arguments:");
scanf("%d",&n);
float x[n],y[n],X,Y=0.0,num,den;
printf("X\tY\n");
for(i=0;i<n;i++)
scanf("%f%f",&x[i],&y[i]);
printf("Enter the value of x for which y is to be found:");
scanf("%f",&X);
for(i=0;i<n;i++){
num=1,den=1;
for(j=0;j<n;j++){
if(j!=i)
num*=X-x[j],den*=x[i]-x[j];
}
Y+=(num/den)*y[i];
}
printf("(%.1f)=%.5f\nf",X,Y);
return 0;
}
