#include<stdio.h>
int message();
int main()
{
	message(message());
	return 0;
}
int message()
{
	printf("xyz\n");

}
