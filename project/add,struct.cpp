#include<stdio.h>
struct mystructure
{
	int mynum;
	char myletter;
};
main()
{
	struct mystructure s1;
	s1.mynum=10;
	s1.myletter='S';
	printf("\n my number=%d",s1.mynum);
	printf("\n my letter=%c",s1.myletter);
}
