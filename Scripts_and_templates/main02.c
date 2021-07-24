#include<unistd.h>
#include<stdio.h>

char *ft_strcpy(char *dest, char *src);
char *ft_strncpy(char *dest, char *src, unsigned int n);
int ft_str_is_alpha(char *str);
int ft_str_is_numeric(char *str);
int ft_str_is_lowercase(char *str);
int ft_str_is_uppercase(char *str);
int ft_str_is_printable(char *str);
char *ft_strupcase(char *str);
char *ft_strlowcase(char *str);
char *ft_strcapitalize(char *str);
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
void ft_putstr_non_printable(char *str);
void *ft_print_memory(void *addr, unsigned int size);

int main () 
{
	// TESTE 0
	/*
	char src[] = "Hello 42";
	char dest[8];
	printf("%s\n", src);
	ft_strcpy(dest, src);
	printf("%s\n", dest); Expect: Hello World
	*/
	// FIM TESTE 0

	// TESTE 1
	/*
	char src[] = "Hello 42";
	char dest[8];
	unsigned int n = 5;

	printf("%s\n", src);
	ft_strncpy(dest, src, n);
	printf("%s\n", dest); // Expect: Hello
	*/
	// FIM TESTE 1

	// TESTE 2
	/*
	char str[] = "abcdef";
	char str2[] = "42";
	char str3[] = "abc123def";
	char str4[] = "abc!";
	char str5[] = "";
	printf("%d\n", ft_str_is_alpha(str)); // Expects: 1
	printf("%d\n", ft_str_is_alpha(str2)); // Expects: 0
	printf("%d\n", ft_str_is_alpha(str3)); // Expects: 0
	printf("%d\n", ft_str_is_alpha(str4)); // Expects: 0
	printf("%d\n", ft_str_is_alpha(str5)); // Expects: 1
	*/
	// FIM TESTE 2

	// TESTE 3
	/*
	char str[] = "abcdef";
	char str2[] = "42";
	char str3[] = "abc123def";
	char str4[] = "abc!";
	char str5[] = "";
	printf("%d\n", ft_str_is_numeric(str)); // Expects: 0
	printf("%d\n", ft_str_is_numeric(str2)); // Expects: 1
	printf("%d\n", ft_str_is_numeric(str3)); // Expects: 0
	printf("%d\n", ft_str_is_numeric(str4)); // Expects: 0
	printf("%d\n", ft_str_is_numeric(str5)); // Expects: 1
	*/
	// FIM TESTE 3

	// TESTE 4
	/*
	char str[] = "abcdef";
	char str2[] = "42";
	char str3[] = "ABC123def";
	char str4[] = "aBc!";
	char str5[] = "";
	printf("%d\n", ft_str_is_lowercase(str)); // Expects: 1
	printf("%d\n", ft_str_is_lowercase(str2)); // Expects: 0
	printf("%d\n", ft_str_is_lowercase(str3)); // Expects: 0
	printf("%d\n", ft_str_is_lowercase(str4)); // Expects: 0
	printf("%d\n", ft_str_is_lowercase(str5)); // Expects: 1
	*/
	// FIM TESTE 4

	// TESTE 5
	/*
	char str[] = "abcdef";
	char str2[] = "42";
	char str3[] = "ABC";
	char str4[] = "aBc!";
	char str5[] = "";
	printf("%d\n", ft_str_is_uppercase(str)); // Expects: 0
	printf("%d\n", ft_str_is_uppercase(str2)); // Expects: 0
	printf("%d\n", ft_str_is_uppercase(str3)); // Expects: 1
	printf("%d\n", ft_str_is_uppercase(str4)); // Expects: 0
	printf("%d\n", ft_str_is_uppercase(str5)); // Expects: 1
	*/
	// FIM TESTE 5

	// TESTE 6
	/*
	char str[] = "nao grite";
	char str2[] = "42";
	char str3[] = "xiii\1l";
	char str4[] = "127";
	char str5[] = " ";
	printf("%d\n", ft_str_is_printable(str)); // Expects: 1
	printf("%d\n", ft_str_is_printable(str2)); // Expects: 1
	printf("%d\n", ft_str_is_printable(str3)); // Expects: 0
	printf("%d\n", ft_str_is_printable(str4)); // Expects: 1
	printf("%d\n", ft_str_is_printable(str5)); // Expects: 1
	*/
	// FIM TESTE 6

	// TESTE 7
	/*
	char str[] = "naoo grite";
	char str2[] = "42";
	char str3[] = "ABC";
	char str4[] = "lOl!";
	char str5[] = "";
	printf("%s\n", ft_strupcase(str)); // Expects: NAO GRITE
	printf("%s\n", ft_strupcase(str2)); // Expects: 42
	printf("%s\n", ft_strupcase(str3)); // Expects: ABC
	printf("%s\n", ft_strupcase(str4)); // Expects: LOL!
	printf("%s\n", ft_strupcase(str5)); // Expects: 
	*/
	// FIM TESTE 7

	// TESTE 8
	/*
	char str[] = "naoo grite";
	char str2[] = "42";
	char str3[] = "ABC";
	char str4[] = "lOl!";
	char str5[] = "";
	printf("%s\n", ft_strlowcase(str)); // Expects: nao grite
	printf("%s\n", ft_strlowcase(str2)); // Expects: 42
	printf("%s\n", ft_strlowcase(str3)); // Expects: abc
	printf("%s\n", ft_strlowcase(str4)); // Expects: lol!
	printf("%s\n", ft_strlowcase(str5)); // Expects: 
	*/
	// FIM TESTE 8

	// TESTE 9
	// FIM TESTE 9
	
	// TESTE 10

	// FIM TESTE 10

	// TESTE 11

	// FIM TESTE 11

	// TESTE 12

	// FIM TESTE 12

	return 0;
}