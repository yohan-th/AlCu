/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   check.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ythollet <ythollet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/16 12:20:17 by ythollet     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/16 12:20:17 by ythollet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../alum1.h"

int		*ft_digit_array(char *str)
{
	int	*array;
	int i;
	int j;

	if (!(array = (int *)malloc(sizeof(int) * ft_nbrchar(str, '\n'))))
		return (NULL);
	j = 0;
	while (*str)
	{
		i = 0;
		while (str[i] != '\n')
			i++;
		array[j] = ft_atoi(ft_strsub(str, 0, i));
		if (array[j] > 10000 || array[j] < 1)
		{
			write(2, "ERROR\n", 6);
			return (NULL);
		}
		i++;
		j++;
		str += i;
	}
	array[j] = -1;
	return (array);
}

int		ft_authz_char(char *str)
{
	while (*str)
	{
		if (ft_isdigit(*str) || *str == '\n')
			str++;
		else
			return (0);
	}
	return (1);
}

int		*ft_check(char *str)
{
	if (ft_authz_char(str) == 1 &&
		ft_nbrchar(str, '\n') > 0)
		return (ft_digit_array(str));
	else
		return (NULL);
}
