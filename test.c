
#include <stdio.h>
#include <stdint.h>
void fun(uint32_t a,uint16_t b,uint16_t c)
{
    a = b+c;
    printf("%d\n",a);
}
int main(){
	uint16_t b = 10,c = 5;
	uint32_t a = 0;
	fun(a,b,c);
	a = b+c;
	printf("%d",a);
}