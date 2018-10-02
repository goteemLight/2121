/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sskinner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 15:07:11 by sskinner          #+#    #+#             */
/*   Updated: 2018/09/26 13:34:42 by sskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
void    ft_putchar(char q)
{
	write(1, &q, 1);
}

int ft_strcmp(char *s1, char *s2);

void    ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb < 10)
		ft_putchar(nb + '0');
	if (nb > 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}

void    ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

int main ()
{
	char *str1;
	str1 = "-2147483648" ;
	int i = ft_atoi(str1);
	printf("%d", i);
	printf("\n");
	int w = atoi(str1);
	printf("%d", w);
	return (0);
}
