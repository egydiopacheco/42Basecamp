#include<unistd.h>
#include<stdio.h>

void ft_ft(int *nbr);
void ft_ultimate_ft(int *********nbr);
void ft_swap(int *a, int *b);
void ft_div_mod(int a, int b, int *div, int *mod);
void ft_ultimate_div_mod(int *a, int *b);
void ft_putstr(char *str);
int ft_strlen(char *str);
void ft_rev_int_tab(int *tab, int size);
void ft_sort_int_tab(int *tab, int size);

int main ()
{
	// EX 00
	/*
	int x;
	x = 5;
	ft_ft(&x);
	printf("%d\n", x);
	*/
	// FIM EX 00;

	// EX 01
	/*
	int *********p_nbr;
    int ********p_nbr2;
    int *******p_nbr3;
    int ******p_nbr4;
    int *****p_nbr5;
    int ****p_nbr6;
    int ***p_nbr7;
    int **p_nbr8;
    int *p_nbr9;
    int nbr;

    nbr = 21;
    p_nbr9 = &nbr;
    p_nbr8 = &p_nbr9;
    p_nbr7 = &p_nbr8;
    p_nbr6 = &p_nbr7;
    p_nbr5 = &p_nbr6;
    p_nbr4 = &p_nbr5;
    p_nbr3 = &p_nbr4;
    p_nbr2 = &p_nbr3;
    p_nbr = &p_nbr2;

    printf("%d\n", nbr);
    ft_ultimate_ft(p_nbr);
    printf("%d\n", nbr);
	*/
	// FIM EX 01

	// EX 02
	/*
	int a, b;
	a = 10;
	b = 42;
	ft_swap(&a, &b);
	printf("%d\n", a);
	printf("%d\n", b);
	*/
	
	// FIM EX 02

	// EX 03
	/*
	int x , y;
	int mod, div;

	x = 10;
	y = 3;

	ft_div_mod(x , y, &mod, &div);
	printf("%d\n", mod);
	printf("%d\n", div);
	*/
	// FIM EX 03

	// EX 04
	/*
	int a, b;
	
	a = 10;
	b = 2;
	ft_ultimate_div_mod(&a, &b);

	printf("%d\n", a);
	printf("%d\n", b);
	*/
	// FIM EX 04

	// EX 05
	/*
	char a[] = "ola mundo";
	ft_putstr(&a[0]);
	*/
	// FIM EX 05

	// EX 06
	/*
	int res;
	char a[] = "eu sei que voce odeia ponteiros"; //31
	res = ft_strlen(&a[0]);
	printf("%d\n", res);
	*/
	// FIM EX 06

	// EX 07
	/*
	int matrix[4];

	matrix[0] = 1;
	matrix[1] = 2;
	matrix[2] = 3;
	matrix[3] = 4;

	ft_rev_int_tab(&matrix[0], 4);
	printf("%d\n", matrix[0]);
	printf("%d\n", matrix[1]);
	printf("%d\n", matrix[2]);
	printf("%d\n", matrix[3]);
	*/
	//FIM EX 07

	// EX 08
	/*
	int arr[] = {3,5,1,9,7,2};
	int size = 6;//(sizeof(arr) / sizeof(arr[0])) - 1;
	ft_sort_int_tab(&arr[0], size);

	printf("%d, ", arr[0]);
	printf("%d, ", arr[1]);
	printf("%d, ", arr[2]);
	printf("%d, ", arr[3]);
	printf("%d, ", arr[4]);
	printf("%d\n", arr[5]);
	*/
	// FIM EX 08;
	return 0;
}
