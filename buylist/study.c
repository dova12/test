#include <stdio.h>
#include <curses.h>
void bold_red() {
printf("\033[1;31m");
}
void bold_yellow() {
printf("\033[1;33m");
}
void bold_green() {
printf("\033[1;32m");
}
void reset() {
printf("\033[0m");
}
int main() 
{
int a,b;
system("clear");
ONE:
printf("\n");
bold_red();
printf("공부목록\n");
reset();
printf("(1) 장기적\n(2) 단기적\n(3) 종류별 분류");

int num1=0;
printf("\033[1;32m");
scanf("%d",&num1);
while (getchar() != '\n');
bold_yellow();

switch (num1)
{
case 1:
system("clear");
printf("(1) 수학\n(2) 논리학\n");

int num2 =0;
scanf("%d",&num2);
if (num2 == 1)
goto TWO;

else 
goto ONE;

case 2:
system("clear");
printf("코딩");
goto ONE;
break;

case 3: {
system("clear");
printf("(1) 수학\n(2) 코딩\n");

int num3 =0;
scanf("%d",&num3);

if (num3 == 1){
TWO:
printf("선형대수학, 수치해석, 미적분학, 통계학");
goto ONE;
break; }

else if (num3 == 2){
printf("디자인패턴, batch 파일 관련"); // https://yong40.tistory.com/112 배치파일 명령어 모음
goto ONE;
break; }

else
goto ONE;
break;
}

default:
printf("\n잘못 누름 = 종료\n");
goto EXIT;
break;
}

reset(); //배우고 싶은거? - 시스템프로그래밍, 컴퓨터이론(*,), 네트워크

EXIT:
return 0;
}

