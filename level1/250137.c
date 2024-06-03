#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int bandage[], size_t bandage_len, int health, int** attacks, size_t attacks_rows, size_t attacks_cols) {

	int total_time = attacks[attacks_rows - 1][0];
	int pres_time = 0;

	int pres_hp = health;
	int cooltime = bandage[0];
	int basic_heal = bandage[1];
	int bonus_heal = bandage[2];

	int attacks_idx = 0;
	while((pres_hp > 0) && (++pres_time <= total_time))
	{
		cooltime--;
		
		if(pres_time == attacks[attacks_idx][0])
		{
			pres_hp -= attacks[attacks_idx++][1];
			cooltime = bandage[0];
			continue;
		}
		else if(cooltime == 0)
		{
			pres_hp += bonus_heal;
			cooltime = bandage[0];
		}
		
		pres_hp += basic_heal;
		if(pres_hp > health) pres_hp = health;
	}

    return (pres_hp > 0) ? pres_hp : -1;
}
