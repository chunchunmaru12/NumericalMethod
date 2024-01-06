#include<stdio.h>
#include<stdlib.h>

void main(){
    float x[100],y[100],xp,p;
    int n;
    float yp=0;
    printf("Enter how many data you want: \n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the value of X:  ");
        scanf("%f",&x[i]);
        printf("\nEnter the value of Y: ");
        scanf("%f",&y[i]);
    }
    printf("\nWhat value do u want? \n");
    scanf("%f",&xp);
    for(int i=0;i<n;i++){
        p=1;
        for(int j=0;j<n;j++){
            if(i!=j){
                p*=(xp-x[j])/(x[i]-x[j]);
            }
        }
        yp=yp+p*y[i];
    }
    printf("\nYour result: %f",yp); 
}