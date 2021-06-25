/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamin <jamin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 17:27:34 by bifrah            #+#    #+#             */
/*   Updated: 2021/06/25 10:39:09 by jamin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int n)
{
	char			*c_src;
	unsigned int	i;
	unsigned int	j;

	if (n == 0)
		return (ft_strlen(src));
	if (src == 0)
		return (0);
	c_src = (char *)src;
	i = 0;
	j = 0;
	while (c_src[j] && dest[i] && j < n - 1)
	{
		dest[i] = c_src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	j = ft_strlen(src);
	return (j);
}

#include <string.h>
#include <stdio.h>
#include "libft.h"

int main()
{
	char src[] = "coucou";
	char dest[10]; memset(dest, 'A', 10);
	ft_strlcpy(dest, src, 2);
	printf("%s\n",dest);
	printf("%ld\n",strlen(src));
	printf("%c\n", dest[0]);
	printf("%c\n", dest[1]);
	printf("%c\n", dest[2]);
}