#include "push_swap.h"

size_t    ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t	i;

    i = 0;
    if (dstsize == 0)
        return (ft_strlen(src));
    while (src[i] && i < dstsize - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (ft_strlen(src));
}

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t	i;

    i = 0;
    if (!dst && !src)
        return (NULL);
    if (dst == src)
        return (dst);
    while (i < n)
    {
        ((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
        i++;
    }
    return (dst);
}

char    *ft_strdup(const char *s1)
{
    char	*ptr;
    size_t	i;

    i = ft_strlen(s1);
    ptr = (char *)malloc(sizeof(char) * (i + 1));
    if (!ptr)
        return (NULL);
    ft_memcpy(ptr, s1, i);
    ptr[i] = '\0';
    return (ptr);
}