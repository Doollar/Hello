#include <stdio.h>
#include <string.h>

int main()
{
	char arr1[] = "abc";//Êý×é£¬¡°¡±Òý×Ö·û´®£»
	char arr2[] = { 'a', 'b', 'c',0};//''Òý×Ö·û
	printf("%s\n", arr1);//%s´òÓ¡×Ö·û´®£»
	printf("%s\n", arr2);
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	printf("%d\n", strlen("c:\test\21\test.c"));
	printf("%d\n", strlen("c:\\test\\21\\test.c"));
	return 0;
}