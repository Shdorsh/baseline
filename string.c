#include <stdio.h>

void	string_assign(char *dest, char *src)
{
	while (*src && *dest)
	{
		*dest = *src;
		dest++;
		src++;
	}
	while (*dest)
	{
		*dest = 0;
		dest++;
	}

}

unsigned int	string_size(char *array)
{
	unsigned int	i;

	i = 0;
	while (array[i])
	{
		i++;
	}
	return (i);
}

unsigned int	string_buffer(char *array)
{
	unsigned int	i;

	i = 0;
	while (array[i])
	{
		i++;
	}
	while (!array[i])
	{
		i++;
	}
	return (i - 1);
}

struct String {
	void (*assign)(char *dest, char *src);
	unsigned int (*size)(char *array);
	unsigned int (*buffer)(char *array);
};

struct String	new_string()
{
	struct String	str;

              str.assign = string_assign;
              str.size = string_size;
              str.buffer = string_buffer;
              return (str);
}
/*
int	 main (void)
{
              struct String	String;
              char	string[3];

              String = new_string();
              String.assign(string, "AHA");
              printf("Word: %s, s: %i, b: %i", string, String.(string), String.buffer(string));
}
*/