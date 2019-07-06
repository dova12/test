#include <stdio.h>

int main() {

int numArr[10] = {1,2,3,4,5,6,7,8,9,10};

int sum, sum1 = 0;

printf("각 요소의 합 구하는 과정");
for ( int i = 0 ; i < sizeof(numArr)/sizeof(int) ;i++)
{
sum += numArr[i];
sum1 = sum -numArr[i];
printf("\n%d + %d = ", sum1,numArr[i] );
printf(" %d\n",sum); // if 마지막에 결과  
}
return 0;
}
