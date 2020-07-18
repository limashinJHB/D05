/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limashin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 08:21:02 by limashin          #+#    #+#             */
/*   Updated: 2020/07/17 17:30:18 by limashin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
char 	*ft_strstr(char *str, char *to_find)
{	
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}

/*int main ()
{

   char str[20] = "TutorialsPoint";
   char to_find[10] = "Point";
   char *ft_strstr; 

   printf("The substring is: %s\n", ft_strstr);
   
   return(0);
}*/
