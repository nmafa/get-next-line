/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmafa <nmafa@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 12:13:17 by nmafa             #+#    #+#             */
/*   Updated: 2019/07/12 16:11:59 by nmafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFF_SIZE 3

int proccess_str(char **str_read, char ***line)
{
	char **s;
	char *strack;

	s = ft_strsplit(*str_read, '\n');
	**line = *s;
	*str_read = ft_strchr(*str_read, '\n');
	(*str_read)++;
	return (1);
};

int get_next_line(int fd, char **line)
{
	char buff[BUFF_SIZE + 1];
	static char *str_read;
	char *temp;

	if (fd < 0) //|i| read(fd, &temp, BUFF_SIZE) < 0)
		return -1;
	if (!str_read)
		str_read = ft_memalloc(1);
	if (!ft_strtrim(str_read))
		return 1;
	while (read(fd, &buff, BUFF_SIZE) > 0)
	{
		str_read = ft_strjoin(str_read, buff);
		if (ft_strchr(buff, '\n'))
			break;
	}
	proccess_str(&str_read, &line);
	// printf("++ %s\n", str_read);

	return 1;
}

int main()
{
	char *line;
	int fd = open("ff", O_RDONLY);
	// while (get_next_line(fd, &line) > 0)
	// {
	// 	printf("---> %s\n", line);
	// }
	get_next_line(fd, &line);
	printf("---> %s\n", line);
	get_next_line(fd, &line);
	printf("---> %s\n", line);
	get_next_line(fd, &line);
	printf("---> %s\n", line);
	get_next_line(fd, &line);
	printf("---> %s\n", line);
	get_next_line(fd, &line);
	printf("---> %s\n", line);
	get_next_line(fd, &line);
	printf("---> %s\n", line);
	get_next_line(fd, &line);
	printf("---> %s\n", line);
	get_next_line(fd, &line);
	printf("---> %s\n", line);
	get_next_line(fd, &line);
	printf("---> %s\n", line);
	get_next_line(fd, &line);
	printf("---> %s\n", line);
	get_next_line(fd, &line);
	printf("---> %s\n", line);
	get_next_line(fd, &line);
	printf("---> %s\n", line);
	get_next_line(fd, &line);
	printf("---> %s\n", line);

	return 0;
}
