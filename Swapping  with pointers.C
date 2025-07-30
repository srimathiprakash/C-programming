#include <stdio.h>
// Function for call by value
void swapValue(int a,int b){
int temp;
temp = a;
a=b;
b=temp;
printf("inside swapValue -a:%d,b:%d\n",a,b);
}
//Fuction for call by reference
void swepRef(int*a,int*b){
int temp;
temp = *a;
*a = *b;
*b = temp;
//sweps actual variables using pointers
}
int main(){
int x,y;
printf("Enter two numbers:");
scanf("%d %d",&x,&y);

printf("\n-----Before swap---\n");
printf("x:%d,y:%d\n",x,y);
swapValue(x,y);
printf("After swapValue(call-by-value):x:%d,y:%d\n",x,y);

//Call-by-refernce:values will swap in main
printf("After swapRef (call-by-refernce):x:%d,y:%d\n",x,y);

return 0;
}
