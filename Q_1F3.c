/*Paper of size A0 has dimensions 1189mm x 841mm. Each subsequent size A(n) is defined as A(n-1) cut in half, parallel to it's shorter sides. Thus, paper of size A1 would have dimensions 841mm x 594mm. Write a program to calculate and print paper sizes A0, A1, A2, ..., A8*/
#include <stdio.h>
int main(){
    //this is a simple problem, but you need to know the results
    /*
        A0 = 1189*841
        A1 = 841*594`
        A2 = 594*420
        A3 = 420*297
        A4 = 297*210
        A5 = 210*148
        A6 = 148*105
        A7 = 105*74
        A8 = 74*52
    */
   //these are the results. Now you just need to print them. As of now, loops aren't taught, but this can be solved usinf loops and conditional statements. Now, just print these values

   //this is the actual logical code, ig
   int size;
   printf("Enter the size of the paper you want to go to: ");
   scanf("%d", &size);
   int  Al[size], Ab[size];
   Al[0]=1189;
   Ab[0]=841;
   for (int i=1; i<=size; i++){
    if(Al[i-1]>Ab[i-1]){
        Ab[i] = Al[i-1]/2;
        Al[i] = Ab[i-1];
    }
   }
   for(int i=0; i<=size; i++){
    printf("A%d : %d x %d\n", i, Al[i], Ab[i]);
   }
}