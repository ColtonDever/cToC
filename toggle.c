#include <stdio.h>
#include <string.h>
char toggle_case(char*);
int main(int argc, char* argv[])
{
	char str[50];
	strcpy(str, argv[1]);
	toggle_case(str);
	printf("\n%s\n", str);

}

char toggle_case(char *str)
{
    int i=0;
    while(str[i]!='\0')
    {
    if(str[i]>='a' && str[i] <='z')
    {
        str[i]=str[i]-32;
				return str[i];
    }
		else if(str[i]>='A' && str[i] <='Z'){
			str[i]=str[i]+32;
			return str[i];
		}
		else if(str[i]==' '){
			str[i]=str[i];
			return str[i];
		}
    i++;
    }
}
