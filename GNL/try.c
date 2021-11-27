#include <stdio.h>
#include <stdlib.h>

static size_t	str_len(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		len1;
	size_t		len2;
	int			i;
	int			j;
	char		*snew;

	if (!s1 || !s2)
		return (NULL);
	len1 = str_len(s1);
	len2 = str_len(s2);
	i = 0;
	j = 0;
	snew = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!snew)
		return (NULL);
	while (s1[i])
	{
		snew[i] = s1[i];
		i++;
	}
	while (s2[j])
		snew[i++] = s2[j++];
	snew[i] = '\0';
	return (snew);
}


#define BUFFER_SIZE 4

int main()
{
	char buf[BUFFER_SIZE + 1];
	char *ret_str;
	int read = 0;
	FILE hf = fopen("TEST.txt", "rt");
	while (read(hf, buf, BUFFER_SIZE))
	{

	}
}