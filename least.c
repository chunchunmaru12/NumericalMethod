#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main(){
    float x[100],y[100],xy,x2;
    float sx=0,sy=0,sxy=0,sx2=0;
    float a,b;
    int n;
    printf("Enter the number of data: \n ");
    scanf("%d",&n);
        for(int i=0;i<n;i++){
            printf("Enter value for X:");
            scanf("%f",&x[i]);
            printf("Enter value for Y:");
            scanf("%f",&y[i]);
    }
    for(int i=0;i<n;i++){
        sx+=x[i];
        sy+=y[i];
        sxy=sxy+(x[i]*y[i]);
        sx2+=pow(x[i],2);
    }
    a=((sy*sx2)/(n*sx2-sx*sx))-((sxy*sx)/(n*sx2-sx*sx));
    //b=(sy-n*a)/sx;
    b=((n*sxy)/(n*sx2-sx*sx))-((sx*sy)/(n*sx2-sx*sx));
    printf("%f\n",a);    
    printf("%f\n",b);
    if(b<0){
        printf("y=%f %fx\n",a,b);
    }else{
        printf("y=%f + %fx\n",a,b);
    }
}