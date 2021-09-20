/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarrakis <jarrakis@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:01:18 by jarrakis          #+#    #+#             */
/*   Updated: 2021/09/20 16:33:42 by jarrakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>

void	brainfuck(char *str)
{
	char	*buff;

	buff = (char *)malloc(sizeof(char) * 30000);
	if (buff == NULL)
	{
		write(1, "Buff Erorr", 10);
		return (NULL);
	}
}

int	main(int argc, char **argv)
{
	if ()
	{
	}
}
