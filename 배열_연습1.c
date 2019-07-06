#include <stdio.h> //수정 필요
int main() {  //입력 값을 배열[0]에 저장한뒤 그 값을 2로나눈 값을 배열에 순서대로 저장

int a,b =0;
int numArr[10] ={0,};

scanf("%d",&a);

numArr[0] = a;

printf("배열[0] 값= %d\n",numArr[0]);

for(int i =0;i<10;i++){
numArr[i] = b;
b/2 == numArr[i+1];

if (numArr[i] == 0){
break;
}


}
printf("%d\n",numArr[1]);
printf("%d\n",numArr[2]);
printf("%d",numArr[3]);

return 0;
}
