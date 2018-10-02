/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sskinner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 01:50:22 by sskinner          #+#    #+#             */
/*   Updated: 2018/09/28 06:58:05 by sskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		wordif(char s)
{
	int i;
	
	i = 0;
	if(((s >= '0' && s <= '9') ||
		(s >= 'A' && s <= 'Z') ||
		(s >= 'a' && s <= 'z')) &&
	   ((s != ' ') || (s != '\n') ||
		(s != '\t')))
		return (1);
	else
		return (0);
}
	
int		strlen(char s)
{
	if (wordif(s[i]) != 0)
		return (1);
	else
		return (0);
}

int		sizefor(char *str)
{
	while (strlen(str[i]) != 0)
	{
		size += 1;
		i++;
	}
	return (size);
}
	char	**ft_split_whitespaces(char *str)
	{
	int		i;
	int		j;
	int		size;
	char	**s;
	
	i = 1;
	h = 0;
	j = 0;

	s = (char**)malloc(sizeof(char) * size);
	
	while (
	while (strlen(str[i]) != 0)
	{
		k++;
	}
	s[i][j] = (char**)malloc(sizeof(char) * k);









	k = 0;

	i = 0;
	h = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '32' || str[i] != '9')
		{
			s[j][i++] = str[i];
		}
		else
			s[h++] = '\0';
		j++;
	}
			 }
}
