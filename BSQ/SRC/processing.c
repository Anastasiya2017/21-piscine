/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   processing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlubowit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 15:39:37 by tlubowit          #+#    #+#             */
/*   Updated: 2018/09/12 22:04:01 by tlubowit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "func.h"
#include <stdio.h>
#include <stdlib.h> 

char	**proccesing(char **arr, int n, char empty, char barrier)
{
	int maxij[3];
    int m = n - 20;
	m += 1;
	n += 1;
	int **numb;
	int i;
	int j;
	maxij[2] = 0;
	numb = (int **)malloc(sizeof(int *) * (m));
	i = -1;
	while (++i < m)
		numb[i] = (int *)malloc(sizeof(int) * (n));
    
    i = 0;
    j = 0;
    
    printf("%c",'\n' );
    while (i == 0)
    {
        while (j < n)
        {
                numb[i][j] = 0;
            j++;
        }
        j = 0;
        i++;
    }

    i = 0;
    j = 0;
    
    while (j == 0)
    {
        while (i < m)
        {
            numb[i][j] = 0;
            i++;
        }
        i = 0;
        j++;
    }
	i = 1;
    j = 1;

	printf("%c",'\n' );
	while (i < m)
	{
        while (j < n)
		{
			if (arr[i-1][j-1] == empty)
			{
				numb[i][j] = 1;
			}
			else
				numb[i][j] = 0;
			j++;
		}
		j = 0;
		i++;
	}
    
    i = 1;
    j = 1;
    while (i < m)
    {
        while (j < n)
        {
            if (numb[i][j] == 0)
            {
                numb[i][j] = 0;
            }
            else
			{
                numb[i][j] = 1 + min(numb[i-1][j-1], min(numb[i-1][j], numb[i][j-1]));
				if (numb[i][j] > maxij[2])
				{
				maxij[0] = i-1;
				maxij[1] = j-1;
				maxij[2] = numb[i][j];
				}
			}
			j++;
        }
        j = 1;
        i++;
    }
	i = 0;
	j = 0;
	while (i < m)
	{
		while (j < n)
		{
			printf("%d", numb[i][j]);
			j++;
		}
		printf("%c", '\n');
		i++;
		j = 0;
	}
	
			printf("%c\n", '\n');
			printf("max = %d\n", maxij[2]);
			printf("i = %d\n", maxij[0]);
			printf("j = %d\n", maxij[1]);
			arr = out(arr, maxij[0], maxij[1], maxij[2]);
    i = 0;
    j = 0;
    while (i < m-1)
    {
        while (j < n-1)
        {
            printf("%c", arr[i][j]);
            j++;
        }
        printf("%c", '\n');
        i++;
        j = 0;
    }
	free(arr);
	free(numb);
		printf("%c", '\n');
	return (arr);
}
