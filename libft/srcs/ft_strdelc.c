/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdelc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <ibouabda@42.students.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:45:43 by ibouabda          #+#    #+#             */
/*   Updated: 2022/11/18 14:55:43 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/libft.h"

char	*ft_strdelc(const char *src, int c)
{
	char	*dest;
    int     i;
    int     k;

    i = 0;
    k = 0;
    while (src[i])
    {
        if (src[i] != c)
        {
            k++;
        }
        i++;
    }
	if (!(dest = (char *)malloc(sizeof(char) * (k + 1))))
	{
		ft_putendl("ft_strdup malloc error");
		exit(EXIT_FAILURE);
	}
    i = 0;
    k = 0;
	while (src[i] != '\0')
	{
        if (src[i] != c)
        {
		    dest[k] = src[i];
            k++;
        }
		i++;
	}
	dest[k] = '\0';
	return (dest);
}
