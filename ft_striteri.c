#include <stdlib.h>
#include <stdio.h>
void f(unsigned int index, char *c)
{
    (void)index;
    if (*c >= 'a' && *c <= 'z')
        *c-=32;
}
void ft_striteri(char *s, void (*f)(unsigned int,char*))
{
    size_t i;

    i = 0;
    if (!s || !f)
        return;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
}
int main()
{
    char str[] = "hello";
    ft_striteri(str, f);
    printf("%s\n", str);
    return 0;
}