/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limashin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 11:35:03 by limashin          #+#    #+#             */
/*   Updated: 2020/07/17 16:10:09 by limashin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int 	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}
/* to save time in evaluation*/

/*int main()
{
    char s1[10] = "aksh";
    char s2[10] = "akash";

    int result = ft_strncmp(s1, s2, 4);

    if (result == 0) 
	{
    	printf("s1 is equal to s2 upto num characters\n");
    }
    else if (result > 0)
        printf("s1 is greater than s2\n");
    else
        printf("s2 is greater than s1\n");

    printf("Value returned by strncmp() is: %d", result);

    return 0;
}*/
