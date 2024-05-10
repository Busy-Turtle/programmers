#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, int c, int d) {
	
    int answer = 0;
	int arr[4] = {a,b,c,d};

	bool ab = false;
	bool ac = false;
	bool ad = false;
	bool bc = false;
	bool bd = false;
	bool cd = false;

	for(int i = 0; i < 3; i++)
	{
		if(i == 0) {
			if(arr[i] == arr[i+1])
				ab = true; 
			if(arr[i] == arr[i+2])
				ac = true;
			if(arr[i] == arr[i+3])
				ad = true;
		} 

		if(i == 1) {
			if(arr[i] == arr[i+1])
				bc = true;
			if(arr[i] == arr[i+2])
				bd = true;
		}

		if(i == 2) {
			if(arr[i] == arr[i+1])
				cd = true;
		}
	}	

	if(ab && ac && ad) { // 4 equals
		answer = 1111 * a;

	} else if(!ab && ac && ad) { // 3 equals
		answer = (10 * a + b) * (10 * a + b);
	} else if(!ab && bc && bd) { // 3 equals
		answer = (10 * b + a) * (10 * b + a);
	} else if(!ac && ab && ad) { // 3 equals
		answer = (10 * a + c) * (10 * a + c);
	} else if(!ac && bc && cd) { // 3 equals
		answer = (10 * c + a) * (10 * c + a);
	} else if(!ad && ab && ac) { // 3 equals
		answer = (10 * a + d) * (10 * a + d);
	} else if(!ad && bc && cd) { // 3 equals
		answer = (10 * d + a) * (10 * d + a);

	} else if(ab && !ac && !cd) { // 2 equals , others different
		answer = (c * d);
	} else if(ac && !ab && !bd) { // 2 equals , others different
		answer = (b * d);
	} else if(ad && !ab && !bc) { // 2 equals , others different
		answer = (b * c);
	} else if(bc && !ab && !ad) { // 2 equals , others different
		answer = (a * d);
	} else if(bd && !ab && !ac) { // 2 equals , others different
		answer = (a * c);
	} else if(cd && !ac && !ab) { // 2 equals , others different
		answer = (a * b);

	} else if(ab && cd && !ac) { // 2 equals , others equals
		answer = (a + c) * abs((a - c));
	} else if(ac && bd && !ab) { // 2 equals , others equals
		answer = (a + b) * abs((a - b));
	} else if(ad && bc && !ab) { // 2 equals , others equals
		answer = (a + b) * abs((a - b));
	
	} else if(!ab && !ac && !ad) {
		for(int i = 0; i < 4 - 1; ++i) {
			for(int j = 0; j < 4 - 1 - i; ++j) {
				if(arr[j] > arr[j+1]) {
				
					int temp;
					temp = arr[j+1];
					arr[j+1] = arr[j];
					arr[j] = temp;
				}
			}
		}
		answer = arr[0];
	}

    return answer;
}
