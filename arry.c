/*#include<stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    for(int i=0; i<=5; i++)
    {
        printf("%d",i*2);
        printf("\n");
    }
    return 0;
}*/
#include<stdio.h>
int main(){
 int arr[500];
    int n=0;
    printf("how many numbers you  want to add in array");
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        printf("%d",i);
         
       
        
       }
       printf("enter the numbers ");
       scanf("%d",&n);
       for(int i=0; i<n; i++){
        printf("%d", 2*i);
        printf("\n");
    }
    
    
    
   
    return 0;
}