/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epacheco <epacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 02:01:04 by epacheco          #+#    #+#             */
/*   Updated: 2021/07/21 06:35:44 by epacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort(int *arr, int left, int right);
int		partitioning(int *arr, int left, int right);

void	ft_sort_int_tab(int *tab, int size)
{
	sort (tab, 0, size);
}

void	swap(int *a, int *b)
{
	int	hold;

	hold = *a;
	*a = *b;
	*b = hold;
}

void	sort(int *arr, int left, int right)
{
	int		j;

	if (left < right)
	{
		j = partitioning(arr, left, right);
		sort (arr, left, j - 1);
		sort (arr, j + 1, right);
	}
}

int	partitioning(int *arr, int left, int right)
{
	int	pivot;
	int	i;
	int	j;

	pivot = arr[right];
	i = left - 1;
	j = left;
	while (j <= right)
	{
		if (arr[j] < pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
		j++;
	}
	swap(&arr[i + 1], &arr[right]);
	return (i + 1);
}
