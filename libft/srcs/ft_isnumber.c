/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <ibouabda@42.students.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 20:07:03 by ibouabda          #+#    #+#             */
/*   Updated: 2022/11/18 15:46:31 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/libft.h"

int ft_isnumber(char *str, int i)
{
    int k;

    k = 0;

    if (str[i] != '-' && str[i] != '+' && ft_isdigit(str[i]) == 0)
         return (-1);
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (ft_isdigit(str[i]))
    {
        i++;
        if (str[i] == '.')
        {
            k++;
            break;
        }
    }
    if (k > 0)
        if (!(ft_isdigit(str[++i])))
            return (-1);
    while (ft_isdigit(str[i]))
        i++;
    return (i);
}
