void	array_foreach(void **array,void (*fn)(void *array))
{
	while (*array)
	{
		fn(*array);
		array++;
	}
}

struct Array {
	void (*foreach)(void **array,void (*fn)(void *array));
};

struct Array	new_array()
{
	struct Array	array;

	array.foreach = array_foreach;
	return (array);
}
/*
#include <stdio.h>
void print_element(void *element) {
    printf("%s\n", (char *)element);
}

int main(void) {
    char *array[] = {
        "Hello",
        "World",
        "This",
        "Is",
        "A",
        "Test",
        NULL
    };

    struct Array myArray = new_array();

    myArray.foreach((void **)array, print_element);

    return 0;
}
*/