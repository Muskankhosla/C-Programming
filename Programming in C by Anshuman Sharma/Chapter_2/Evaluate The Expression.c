# include<stdio.h>
# include<conio.h>
# include<math.h>
int main (){
 float x,y,z;
 
   scanf (" %f", &x);
   z=x/x+1;
   y=z+pow(z/2,2)+pow(z/3,3)+pow(z/4,4);
   printf("%f %f",x,y);
  
}
