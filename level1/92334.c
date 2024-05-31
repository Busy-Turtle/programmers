#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(const char* id_list[], size_t id_list_len, const char* report[], size_t report_len, int k) {

    int** key_arr = (int**)malloc(sizeof(int*) * id_list_len);
    for(int i = 0; i < id_list_len; i++)
    {
        key_arr[i] = (int*)malloc(sizeof(int) * id_list_len);
        memset(key_arr[i], 0, sizeof(int) * id_list_len);
    }

    char copy_report[21];
    char* id_str;
    char* bad_id_str;
    int id = 0;
    int bad_id = 0;
    for(int i = 0; i < report_len; i++)
    {
        strcpy(copy_report, report[i]);
        id_str = strtok(copy_report, " ");
        bad_id_str = strtok(NULL, " ");

        for(int j = 0; j < id_list_len; j++)
        {
            if(strcmp(id_str, id_list[j]) == 0) id = j;
            if(strcmp(bad_id_str, id_list[j]) == 0) bad_id = j;
        }

        key_arr[id][bad_id] += 1;
    }

    int* bad_count = (int*)malloc(sizeof(int) * id_list_len);
    memset(bad_count, 0, sizeof(int) * id_list_len);
    for(int i = 0; i < id_list_len; i++)
    {
        for(int j = 0; j < id_list_len; j++)
        {
            if(key_arr[j][i] > 0)
            {
                bad_count[i] += 1;
            }
        }
    }

	int* result = (int*)malloc(sizeof(int) * id_list_len);
	memset(result, 0, sizeof(int) * id_list_len);
	for(int i = 0; i < id_list_len; i++)
	{
		if(bad_count[i] >= k)
		{
			for(int j = 0; j < id_list_len; j++)
			{
				result[j] += (key_arr[j][i] > 0) ? 1 : 0;
			}
		}
	}

	free(bad_count);
	for(int i = 0; i < id_list_len; i++)
	{
		free(key_arr[i]);
	}	
	free(key_arr);

    return result;
}
