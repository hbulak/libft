/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbulak <hbulak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:40:04 by hbulak            #+#    #+#             */
/*   Updated: 2023/11/03 11:24:57 by hbulak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(const char *s, char c)
{
	int	count;
	int	in_substring;

	count = 0;
	in_substring = 0;
	if (!s)
		return (0);
	while (*s)
	{
		if (*s != c && in_substring == 0)
		{
			in_substring = 1;
			count++;
		}
		else if (*s == c)
			in_substring = 0;
		s++;
	}
	return (count);
}

static void	*free_tab(char **ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
	return (NULL);
}

static void	ft_get_substr(const char **str, size_t *i, char c)
{
	*i = 0;
	while (**str && **str == c)
		(*str)++;
	while (*(*str + *i) && *(*str + *i) != c)
		(*i)++;
}

char	**ft_split(const char *s, char c)
{
	size_t	count;
	size_t	len;
	size_t	i;
	char	**ptr;

	if (!s)
		return (NULL);
	count = ft_count(s, c);
	ptr = malloc((count + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	len = 0;
	while (len < count && *s)
	{
		ft_get_substr(&s, &i, c);
		ptr[len] = ft_substr(s, 0, i);
		if (!ptr[len])
			return (free_tab(ptr));
		s += i;
		len++;
	}
	ptr[len] = NULL;
	return (ptr);
}

// #include <stdio.h>

// int main()
// {
//     char **res;

//     // 1. Regular string
//     char *test1 = "Hello,world,this,is,a,test";
//     printf("Test 1:\n");
//     res = ft_split(test1, ',');
//     for (int i = 0; res[i]; i++)
//     {
//         printf("  Split %d: %s\n", i + 1, res[i]);
//         free(res[i]);
//     }
//     free(res);
//     printf("\n");

//     // 1. Regular string
//     char *test8 = "  tripouille  42  ";
//     printf("Test 1:\n");
//     res = ft_split(test8, ' ');
//     for (int i = 0; res[i]; i++)
//     {
//         printf("  Split %d: %s\n", i + 1, res[i]);
//         free(res[i]);
//     }
//     free(res);
//     printf("\n");

//     // 2. Delimiters at the beginning and end
//     char *test2 = ",Hello,world,this,is,a,test,";
//     printf("Test 2:\n");
//     res = ft_split(test2, ',');
//     for (int i = 0; res[i]; i++)
//     {
//         printf("  Split %d: %s\n", i + 1, res[i]);
//         free(res[i]);
//     }
//     free(res);
//     printf("\n");

//     // 3. Multiple delimiters in a row
//     char *test3 = "Hello,,,world";
//     printf("Test 3:\n");
//     res = ft_split(test3, ',');
//     for (int i = 0; res[i]; i++)
//     {
//         printf("  Split %d: %s\n", i + 1, res[i]);
//         free(res[i]);
//     }
//     free(res);
//     printf("\n");

//     // 4. Empty string
//     char *test4 = "";
//     printf("Test 4:\n");
//     res = ft_split(test4, ',');
//     for (int i = 0; res[i]; i++)
//     {
//         printf("  Split %d: %s\n", i + 1, res[i]);
//         free(res[i]);
//     }
//     free(res);
//     printf("\n");

//     // 5. String containing only delimiters
//     char *test5 = ",,,";
//     printf("Test 5:\n");
//     res = ft_split(test5, ',');
//     for (int i = 0; res[i]; i++)
//     {
//         printf("  Split %d: %s\n", i + 1, res[i]);
//         free(res[i]);
//     }
//     free(res);
//     printf("\n");

//     // 6. No delimiters at all
//     char *test6 = "Hello world";
//     printf("Test 6:\n");
//     res = ft_split(test6, ',');
//     for (int i = 0; res[i]; i++)
//     {
//         printf("  Split %d: %s\n", i + 1, res[i]);
//         free(res[i]);
//     }
//     free(res);

//     return 0;
// }
