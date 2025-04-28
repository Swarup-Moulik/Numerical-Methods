#include<stdio.h>
#include<math.h>
#define tol 0.00001
#define X1(x2,x3) ((7.814 -2.367*x2-3.672*x3)/12.214)
#define X2(x1,x3) ((4.890-2.412*x1 - 1.564*x3)/9.879)
#define X3(x1,x2) ((0.972+1.876*x1 +2.985*x2)/11.620)
int main(){
float x1=0,x2=0,x3=0,y1,y2,y3;
int i=0;
printf("\n__________________________________________\n");
printf("\n x1\t\t x2\t\t x3\n");
printf("\n__________________________________________\n");
printf("\n%f\t%f\t%f",x1,x2,x3);
do {
y1=X1(x2,x3),y2=X2(y1,x3),y3=X3(y1,y2);
if(fabs(y1-x1)<tol && fabs(y2-x2)<tol && fabs(y3-x3)<tol){
printf("\n__________________________________________\n");
printf("\n\nx1 = %.4lf",y1);
printf("\n\nx2 = %.4lf",y2);
printf("\n\nx3 = %.4lf",y3);
i = 1;
}
else{
x1 = y1, x2 = y2, x3 = y3;
printf("\n%f\t%f\t%f",x1,x2,x3);
}
}while(i!=1);
return 0;
}
