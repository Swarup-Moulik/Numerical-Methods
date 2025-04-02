#include<stdio.h>
float f(float x){
return(1/(1+x*x));
}
int main(){
int i,n;
float a,b;
printf("\n Enter the lower limit of integration:");
scanf("%f",&a);
printf("\n Enter the upper limit of integration:");
scanf("%f",&b);
printf("\n Enter the number of sub-intervals:");
scanf("%d",&n);
float x0,h,x[n],y[n],sum=0.0,ans;
h=(b-a)/n;
x0=a;
for(i=0; i<=n; i++)
x[i]=x0+i*h,y[i]=f(x[i]);
sum+=y[0]+y[n];
for(i=1; i<n; i++)
sum+=2*y[i];
ans=(h/2)*sum;
printf("Required integral by Trapezoidal Rule is: %.4f\n ",ans);
return 0;
}
