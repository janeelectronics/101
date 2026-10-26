#include<stdio.h>
int main()
{
	char ch;
	scanf("%c", &ch);

	//ch = ch -32;      
	ch = ch - ('a' - 'A');
	
	printf("%c", ch);
	return 0;
}

/*//alphabet uppercase to lowercase
#include<stdio.h>
int main()
{
	char ch;
	scanf("%c", &ch);

	ch = ch +32;       //or use ch = ch + ('a' - 'A');
	
	printf("%c", ch);
	return 0;
}*/
