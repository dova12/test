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
printf("살책목록\n");
reset();
printf("(0) 전체 목록\n(1) vim\n(2) C언어\n(3) 데이터베이스 개론\n(4) 리눅스\n(5) 정규표현식\n(6) 알고리즘\n(7) 한문\n(8) 노자\n(9) 선형대수학\n(10) 수치해석\n(11) 미적분학\n(12) 디자인패턴\n");



int num1=0;
printf("\033[1;32m");
scanf("%d",&num1);
while (getchar() != '\n');
bold_yellow();

switch (num1)
{

case 0:
system("clear");
printf("\n손에잡히는 Vim /김선영 저 /인사이트\nC언어 코딩도장\n데이터베이스 개론 /김연희 저 /한빛아카데미\n이것이 리눅스다 /우재남 저 /한빛아카데미\n다양한 언어로 배우는 정규표현식 /신야 료마, 스즈키 유스케, 타카타 켄 공저/김완서 역\n미정 \n한문 공부 길잡이 /원주용 저 /이담북스\n이이화의 한문공부 /이이화 저 /역사비평가\n한번은 한문 공부 /정춘수 저 /부키\n도덕경 /노자 저/소준섭 역 /현대지성");
goto ONE;
break;


case 1:
system("clear");
printf("\n손에잡히는 Vim /김선영 저 /인사이트\n");
goto ONE;
break;

case 2:
system("clear");
printf("\nC언어 코딩도장\n");
goto ONE;
break;

case 3:
system("clear");
printf("\n데이터베이스 개론 /김연희 저 /한빛아카데미\n");
goto ONE;
break;

case 4:
system("clear");
printf("\n이것이 리눅스다 /우재남 저 /한빛아카데미\n");
goto ONE;
break;

case 5:
system("clear");
printf("\n다양한 언어로 배우는 정규표현식 신야 료마, 스즈키 유스케, 타카타 켄 공저/김완서 역 제이펍\n");
goto ONE;
break;

case 6:
system("clear");
printf("\n미정\n");
goto ONE;
break;

case 7:
system("clear");
printf("\n한문 공부 길잡이 /원주용 저 /이담북스\n이이화의 한문공부 /이이화 저 /역사비평사\n한번은 한문 공부 /정춘수 저 /부키\n");
goto ONE;
break;

case 8:
system("clear");
printf("\n도덕경 /노자 저/소준섭 역 /현대지성\n");
goto ONE;
break;

case 9:
system("clear");
printf("\n미정");
goto ONE;
break;

case 10:
system("clear");
printf("\n미정");
goto ONE;
break;

case 11:
system("clear");
printf("\n미정");
goto ONE;
break;

case 12:
system("clear");
printf("\n미정");
goto ONE;
break;

default:
printf("\n잘못 누름 = 종료\n");
goto EXIT;
break;
}

reset();

EXIT:
return 0;
}


