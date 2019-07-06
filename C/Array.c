#include <stdio.h>

int main() {
int a = 0;
int numArr[10] = {0,};

scanf("%d",&a);

for(int i=0; i<=0;i++){
numArr[i] = a/=2; 
}




for(int i=0; i < sizeof(numArr)/sizeof(int);i++) {

if(i%2 == 0)
numArr[i] =1;

else
numArr[i] =0;
}

for(int i= sizeof(numArr)/sizeof(int)-1; i <=0;i--)
printf("%d",*numArr);


return 0;
}
