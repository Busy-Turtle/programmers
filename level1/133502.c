#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(int ingredient[], size_t ingredient_len) {

    const char* hamburger = "1231";

    char* old_ingredient = NULL; 
    char* new_ingredient = NULL;
    
	new_ingredient = (char*)malloc(sizeof(char) * ingredient_len);
    for(int i = 0; i < ingredient_len; i++)
    {
        new_ingredient[i] = ingredient[i] + '0';
    }

    int lapping = 0;
    int sub_len = 0;
    char* idx;
    while(idx != NULL)
    {
        idx = strstr(new_ingredient, hamburger);
        if(idx)
        {
            lapping++;
            old_ingredient = new_ingredient;
            sub_len = (ingredient_len - (4 * lapping));
            new_ingredient = (char*)malloc(sizeof(char) * sub_len);
#if 0
            int new_idx = 0;
            for(int i = 0; i < sub_len + 4; i++)
            {
                if(i == idx - old_ingredient)
                {
                    i += 3;
                    continue;
                }
                new_ingredient[new_idx++] = old_ingredient[i];
            }
#endif
			int found_idx = idx - old_ingredient;
			memcpy(new_ingredient, old_ingredient, found_idx);
			memcpy(new_ingredient + found_idx, old_ingredient + found_idx + 4, sub_len - found_idx);

            free(old_ingredient);
        }
    }

    free(new_ingredient);
    return lapping;
}

