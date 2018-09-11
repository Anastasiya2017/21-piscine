/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   processing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlubowit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 15:39:37 by tlubowit          #+#    #+#             */
/*   Updated: 2018/09/11 22:27:59 by tlubowit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "func.h"
#include <stdio.h>
 
char	**proccesing(char **arr, int n, char empty, char barrier)
{
	int i;
	int j;
	i = 0;
	j = 0;
	printf("%c",'\n' );
	while (i < n)
	{
		while (j < n)
		{
			if (arr[i][j] == empty)
			{
				arr[i][j] = '0';
			}
			else
				arr[i][j] = '1';
			j++;
		}
		j = 0;
		i++;
	}

	i = 0;
	j = 0;
	while (i < n)
	{
		while (j < n)
		{
			printf("%c", arr[i][j]);
			j++;
		}
		printf("%c", '\n');
		i++;
		j = 0;
	}
	return (arr);
}
