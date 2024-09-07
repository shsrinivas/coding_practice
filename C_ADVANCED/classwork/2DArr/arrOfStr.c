#include<stdio.h>
#if 0
int main()
{
	char s[3][8] = {
		"Array",
		"of",
		"Strings"
	};
	printf("%s %s %s\n",s[0], s[1], s[2]);
}
#endif

#if 0
int main()
{
	char *s[3];
	s[0] = "Array";
	s[1] = "of";
	s[2] = "ptrs, strings";

	printf("%s %s %s\n",s[0], s[1], s[2]); 
}
#endif

#if 0
int main()
{
	int arr[3] = {1,2,3};
	int (*ptr)[3] = &arr;

	printf("%d\n",**ptr);
	printf("%d\n",*(*ptr+0));
	printf("%d\n",*(*ptr+1));
	printf("%d\n",*(*ptr+2));
	printf("%d\n",(*ptr)[0]);
	printf("%d\n",(*ptr)[1]);
	printf("%d\n",(*ptr)[2]);
}
#endif
