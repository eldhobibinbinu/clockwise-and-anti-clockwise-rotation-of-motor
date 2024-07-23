#include<LPC214X.h>

int main(){

	
IODIR0|=(0x01<<13);
IODIR0|=(0x01<<14);
if((0x01<<16)&IOPIN1){
IOCLR0|=(0x01<<13);
}
	else{
IOSET0|=(0x01<<13);
	}
	if((0x01<<17)&IOPIN1){
IOCLR0|=(0x01<<14);
}
	else{
IOSET0|=(0x01<<14);
	}

	}
	