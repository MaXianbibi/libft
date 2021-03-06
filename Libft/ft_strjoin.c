#include "libft.h"

int ft_strlen(char *str);

char *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int j;
    char *str;

    i = 0;
    j = 0;
    str = malloc(sizeof(char) * (ft_strlen((char*)s1) + ft_strlen((char*)s2)) + 1);
    if (!str)
        return (NULL);
    while (s1[i] != '\0')
    {
        str[i] = s1[i];
        i++;
    }
    while (s2[j] != '\0')
    {
        str[i] = s2[j];
        i++;
        j++;
    }
    str[i] = '\0';
    return(str);
}