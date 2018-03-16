/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   reader.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aweiler <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/16 11:27:50 by aweiler      #+#   ##    ##    #+#       */
/*   Updated: 2017/12/16 11:43:48 by aweiler     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../alum1.h"

char	*ft_read_file(char *fd)
{
	char	buf[BUFF_SIZE + 1];
	int		ret;
	int		file;
	char	*str;

	file = open(fd, O_RDONLY);
	ret = read(file, buf, BUFF_SIZE);
	if (ret > 0)
	{
		str = ft_strdup(buf);
		str[ret] = '\0';
		return (str);
	}
	else
		return (NULL);
}
