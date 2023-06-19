#include<reg51.h>
sbit rs=P3^5;
sbit e=P3^4;
sbit rw=P3^3;
void cmd(char);
void delay();
void datas(char);
void main(){
	P1=0x00;
	while(1){
cmd(0x38);
		delay();
cmd(0x01);
		delay();
cmd(0x06);
		delay();
		
cmd(0x0C);
		delay();
cmd(0x81);
datas('h');
		delay();
datas('e');
		delay();
datas('l');
		delay();
		
datas('l');
		delay();
datas('o');
		delay();
	}
}
void cmd(char com)
{
P1=com;
rs=0;
rw=0;
e=1;
delay();
e=0;
}
void datas(char dat){
P1=dat;
rs=1;
	rw=0;
e=1;
delay();
e=0;
}
void delay(){
unsigned int i;
for(i=0;i<=10000;i++);
//for(j=0;j<=t;j++);
}