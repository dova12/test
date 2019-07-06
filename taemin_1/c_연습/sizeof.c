#include <stdio.h>
int main() {

int numArr[3][4] = {0,};

printf("%d\n",sizeof(numArr)); // gcc컴파일 하면 warning 뜸 %zu 로 하면 되는데
                               // error는 아니라 안해도 오류는 없음
return 0;
}
