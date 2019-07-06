/*
ANSI ...

printf("\033[0;31m"); // Set the text to the color red

printf("Hello\n"); // Display Hello in red

printf("\033[0m); // Resets the text to default color 

Escape is: \033
Color code is: [0;31m 

이스케이프 문자 -중-
\033--- 컬러 색상 관련 

코드 일람
CODE	COLOR
[0;31m	Red
[1;31m	Bold Red

[0;32m	Green
[1;32m	Bold Green

[0;33m	Yellow
[1;33m	Bold Yellow

[0;34m	Blue
[1;34m	Bold Blue

[0;35m	Magenta
[1;35m	Bold Magenta

[0;36m	Cyan
[1;36m	Bold Cyan

[0m	reset



---다른 사용법--- 
#include <stdio.h>

void red () {
printf("\033[1;31m");
}

void yellow () {
printf("\033[1;33m");
}

void reset () {
printf("\033[0m");
}


int main () {
red();
printf("hello\n");
yello();
printf("hi");
reset();
return 0;


} 

ANSI color 예제 

Intensity 0	1	2	3	4	5		6	7	9
Nomal	  Black	Red	Green	Yellow	Blue	Magenta		Cyan	White	reset
Bright	  Black	Red	Green	Yellow	Blue	Magneta		Cyan	White

색은 0~7 까지 사용가능. 단 그냥 사용x 뒤의 30,40,90,100 을 더해서 사용.
즉, nomal yellow는 33. 40을 더해서 43을 만들면 Bright 옵션이 켜지게 됨. 

Code	Effect			Note
0	Reset / Nomal		all attribute off
1	Intensity: Bold		
2	Intensity: Faint	not widely supported
3	Italic: on		not widely supported
4	Underline: Single	
5	Blink: Slow		less than 150 per minute
6	Blink: Rapid		MS-DOS ANSI>SYS; 150 per minute or more
7	Image: Negative		inverse or revrse; swap foreground and background
8	Conceal			not widely supported
21	Underline: Double	not widely supported
22	Intensity: Normal	not bold and not faint
24	Underline: None
25	Blink: off
27	Image: Positive
28	Reveal			conceal off

30-39 	Set foreground color, normal intensity	 	3x where x is from the color table above
40-49 	Set background color, normal intensity	 	4x where x is from the color table above
90-99	Set foreground color, high intensity 		aixterm
100-109	Set background color, high intensity 		aixterm









*/ 
