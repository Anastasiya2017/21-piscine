/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlubowit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 23:25:49 by tlubowit          #+#    #+#             */
/*   Updated: 2018/09/11 22:23:28 by tlubowit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "func.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int		main(void)
{
	int n = 10;
	char empty = '.';
	char barrier = 'o';
	char **arr;
	int i = 0;
	int j = 0;
	int k = 0;
	int ran;

	arr = (char**)malloc(n * sizeof(char*));
	for (k = 0; k < n; k++)
	{
		arr[k] = (char*)malloc(n * sizeof(char) + 1);
	}
	srand(time(NULL));
	while (i < n)
	{
		while (j < n)
		{
			ran = rand();
			if (ran % (n / 2 + 2) == 0)
			{
				arr[i][j] = barrier;
			}
			else
			{
				arr[i][j] = empty;
			}
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
	proccesing (arr, n, empty, barrier);
	return (0);
}
