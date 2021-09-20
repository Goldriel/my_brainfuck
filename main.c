/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarrakis <jarrakis@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:01:18 by jarrakis          #+#    #+#             */
/*   Updated: 2021/09/20 21:25:53 by jarrakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>

void	ft_print_char(char c)
{
	write(1, &c, 1);
}

void	brainfuck(char *str)
{
	char	*buff;
	int		i;
	int		j;
	int		brc;

	i = 0;
	j = 0;
	brc = 0;
	buff = (char *)malloc(sizeof(char) * 30000);
	if (buff == NULL)
	{
		write(1, "Buff Erorr", 10);
		return ;
	}
	while (str[i] != '\0')
	{
		if (str[i] == '>')
			j++;
		if (str[i] == '<')
			j--;
		if (str[i] == '+')
			buff[j]++;
		if (str[i] == '-')
			buff[j]--;
		if (str[i] == '.')
			ft_print_char(buff[j]);
		if (str[i] == '[') // старт цикла
		{
			if (!buff[j])
			{
				++brc;
				while (brc)
				{
					++i;
					if (str[i] == '[')
						++brc;
					if (str[i] == ']')
						--brc;
				}
			}
			else
			{}
		}
		else if (str[i] == ']')
		{
			if (!buff[j])
			{}
			else
			{
				if (str[i] == ']')
					brc++;
				while (brc)
				{
					--i;
					if (str[i] == '[')
						brc--;
					if (str[i] == ']')
						brc++;
				}
				--i;
			}
		}
		i++;
	}
	free(buff);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		write(1, "argument Erorr", 14);
		return (0);
	}
	else if (argc == 2)
	{
		brainfuck(argv[1]);
	}
	else if (argc >= 3)
	{
		write(1, "To many argument", 16);
		return (0);
	}
}
