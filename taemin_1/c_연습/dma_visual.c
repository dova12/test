#include <stdio.h> //Dynamic Memory Allocation with Visual Studio 2015
#include <stdlib.h>
int main() {

int size;

scanf("%d", &size);

int *numPtr = malloc(sizeof(int)* size); // int 크기 * 입력받은크기 만큼 동적 할당

for (int i= 0; i < size; i++)
numPtr[i] = i;

for (int i=0; i< size; i++)
printf("%d\n", numPtr[i]);


free(numPtr);
return 0;
}

