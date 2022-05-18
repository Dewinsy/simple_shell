#include <string.h>
#include <stdlib.h>

char **spltstr(char *str)
{
	char **words;
	unsigned int i = 0;

	char *w = NULL;

	if (!str)
	return NULL;
	words = malloc(strlen(str) * sizeof(*words));
	if (!words)
		return NULL;

	w = strtok(str, " \n");
	if (!w)
		words[0] = str;
	else
		words[0] = w;
	i = 1;

	while (w)
    {
        w = strtok(NULL, " \n");
        if (!w)
        {
            ++i;
            break;
        }
        words[i] = w;
        i++;
    }

    words[i] = NULL;
    return (words);
}
