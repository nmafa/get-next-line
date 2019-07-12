/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmafa <nmafa@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 12:13:17 by nmafa             #+#    #+#             */
/*   Updated: 2019/07/12 12:33:36 by nmafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>
#include <unistd.h>

#define BUFF_SIZE 10

int get_next_line(int fd, char **line)
{
	static char buff[BUFF_SIZE + 1];
	char *temp;

	if (fd < 0 || read(fd, &temp, BUFF_SIZE))
		return -1;
}

int main()
{
	char *line;
	get_next_line(1, &line);
	printf("%s\n", line);
	return 0;
}
