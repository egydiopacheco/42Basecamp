/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epacheco <epacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 20:27:04 by epacheco          #+#    #+#             */
/*   Updated: 2021/07/30 22:36:20 by epacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*tf;
	char	*s;

	if (!*to_find) // (to_find == '\0')
		return (str);
	s = str;
	tf = to_find;
	while (1)
	{
		if (!*tf)
			return (s - (tf - to_find));
		if (*s == *tf)
			tf++;
		else
			tf = to_find;
		if (!*s)
			break ;
		s++;
	}
	return (0);
}
