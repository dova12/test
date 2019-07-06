#include <stdio.h> //Dynamic Memory Allocation with gcc
int main() {

int size;
scanf("%d",&size);

int numArr[size];

for (int i=0; i < size; i++)
numArr[i] = i;

for (int i=0; i < size; i++)
printf("%d\n", numArr[i]);

return 0;
}
