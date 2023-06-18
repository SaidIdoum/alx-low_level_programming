#include<unistd.h>
#include<string.h>

int main(void)
{
	a=strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19");
	write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19",a);

	return (1);
}
