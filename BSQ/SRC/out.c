/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   out.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbransto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 15:46:02 by mbransto          #+#    #+#             */
/*   Updated: 2018/09/12 19:15:14 by tlubowit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "func.h" 
char	**out(char **arr, int i, int j, int max)
{
	int end_i;
	int end_j;
	int original_j;
	
	original_j = j;
	end_i = i;
	end_j = j;
	end_i -= max;
	end_j -= max;

	printf("%c",'\n' );
	while (i > end_i)
	{
		while (j > end_j)
		{	
			arr[i][j] = 'x';
			j--;
		}
		j = original_j;
		i--;
	}
	return (arr);
}
