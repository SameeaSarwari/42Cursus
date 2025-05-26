/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarwari <ssarwari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:18:21 by ssarwari          #+#    #+#             */
/*   Updated: 2025/04/27 18:10:31 by ssarwari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **string)
{
	int	i;

	i = 0;
	while (string[i])
		free(string[i++]);
	free(string);
}

static int	word_count(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != '\0')
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static char	*get_next_word(const char **s, char c)
{
	int		len;
	char	*word;

	len = 0;
	while (**s == c)
		(*s)++;
	while ((*s)[len] && (*s)[len] != c)
		len++;
	word = ft_substr(*s, 0, len);
	*s += len;
	return (word);
}

char	**ft_split(const char *s, char c)
{
	int		j;
	char	**rest;

	if (!s)
		return (NULL);
	rest = malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!rest)
		return (NULL);
	j = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s == '\0')
			break ;
		rest[j] = get_next_word(&s, c);
		if (!rest[j])
		{
			ft_free(rest);
			return (NULL);
		}
		j++;
	}
	rest[j] = NULL;
	return (rest);
}

/* 
int main()
{
	int i = 0;
	char **arr = ft_split("kaixo como estas", ' ');
	while (arr[i] != NULL)
	{
		printf("%s\n", arr[i]);
		free(arr[i]);
		i++;
	}
	free(arr);
	return (0);	
}*/
/*cc -Wall -Wextra -Werror ft_split.c ft_substr.c ft_strlen.c ft_strdup.c
 ft_calloc.c ft_bzero.c -o ft_split_program && ./ft_split_program */