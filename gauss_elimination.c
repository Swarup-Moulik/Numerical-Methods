#include<stdio.h>
int main(){
int i,j,k,n;
printf("Enter number of unknowns: ");
scanf("%d",&n);
float a[n+1][n+2], x[n], ratio;
printf("\nEnter the elements of the augemented matrix:\n");
for(i=1;i<=n;i++){
for(j=1;j<=n+1;j++){
printf("a[%d][%d] = ",i,j);
scanf("%f",&a[i][j]);
}
}
/* Applying Gauss Elimination */
for(i=1;i<=n-1;i++){
for(j=i+1;j<=n;j++){
ratio = a[j][i]/a[i][i];
for(k=1;k<=n+1;k++)
a[j][k] = a[j][k] - ratio*a[i][k];
}
}
/* Obtaining Solution by Back Subsitution */
x[n] = a[n][n+1]/a[n][n];
for(i=n-1;i>=1;i--){
x[i] = a[i][n+1];
for(j=i+1;j<=n;j++)
x[i] = x[i] - a[i][j]*x[j];
x[i] = x[i]/a[i][i];
}
/* Displaying Solution */
printf("\nSolution:\n");
for(i=1;i<=n;i++)
printf("x[%d] = %.4f\n",i, x[i]);
return(0);
}
