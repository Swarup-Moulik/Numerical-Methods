#include<stdio.h>
#include<math.h>
#define tol 0.00001
#define X1(x2,x3,x4) ((3+2*x2+x3+x4)/10)
#define X2(x1,x3,x4) ((15+2*x1+x3+x4)/10)
#define X3(x1,x2,x4) ((27+x1+x2+2*x4)/10)
#define X4(x1,x2,x4) ((-9+x1+x2+2*x3)/10)
int main(){
float x1=0,x2=0,x3=0,x4=0,y1,y2,y3,y4;
int i=0;
printf("____________________________________________________\n");
printf("\n x1\t\t x2\t\t x3\t\t x4\n");
printf("____________________________________________________\n");
printf("\n%f\t%f\t%f\t%f",x1,x2,x3,x4);
do {
y1=X1(x2,x3,x4),y2=X2(y1,x3,x4),y3=X3(y1,y2,x4), y4 = X4(y1,y2,y3);
if(fabs(y1-x1)<tol && fabs(y2-x2)<tol && fabs(y3-x3)<tol && fabs(y4-x4)<tol){
printf("\n__________________________________________________");
printf("\n\nx1 = %.4lf",y1);
printf("\n\nx2 = %.4lf",y2);
printf("\n\nx3 = %.4lf",y3);
printf("\n\nx4 = %.4lf",fabs(y4));
i = 1;
}
else{
x1 = y1, x2 = y2, x3 = y3, x4 = y4;
printf("\n%f\t%f\t%f\t%f",x1,x2,x3,x4);
}
}while(i!=1);
return 0;
}

