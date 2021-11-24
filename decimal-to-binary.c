#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
   
int n;
printf("Enter Your Decimal Value : ");
scanf("%d",&n);

int ans=0;
int i=0;

while(n!=0){
int bit = n & 1;
ans = (bit * pow(10,i)) + ans;
n = n>>1;
i++;
}
printf("\n Answer is : %d", ans);

return 0;
}