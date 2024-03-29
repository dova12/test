메모리 할당에는 <정적 메모리 할당>과 <동적 메모리 할당> 으로 나뉨

<정적 메모리 할당 예> 
int a;		<특징> 1. 선언과 동시에 크기가 정해짐, 중간에 바꾸기 x
char str[10]; ...      2. 소멸할때 운영체제가 자동을 할당한 메모리 회수함

>> 즉, 메모리 낭비.

<동적 메모리> 
1. 포인터 변수 선언.
2. 임의의 공간을 원하는 만큼 할당 받고 그 주소를 포인터에 저장.
3. 포인트를 가지고 할당받은 메모리 공간을 사용.
4. 다 쓰면 할당받은 메모리를 해제하여 운영체제에 돌려줌.


<동적 메모리 할당 방법>
1. 관련 함수가 들어있는 해더 파일을 포함시켜야 함.
#include <stdlb.h>

char *str = NULL;

str = (char*) malloc(20);

malloc() 은 괄호 언의 바이트만큼 메모리 공간을 만들어 그 포인터를 얻을 수 있음.
형식) 포인터를 받을 변수 = (자료형) malloc(할당받을 :바이트 수)
단, '자료형' 은 '포인터를 받을 변수'의 자료형과 같아야 함.
ex) int * 로 선언된 포인터 변수는 자료형에  int *  이라 써야 함.


free(str) 

free()의 괄호 안에 동적 메모리 할당된 포인터를 넣어주면 할당된 메모리를 다시 반환.

ex) int *p = (int*) malloc(sizeof(int) * 3)
    p[0] =1;
    p[1] =2;
    p[2] =3;

    printf("%d %d %D", p[0],p[1],p[2]);
    free(p);

<다중 포인터의 동적 메모리 할당>

char **str (char**) malloc(sizeof(char*) * 3);



