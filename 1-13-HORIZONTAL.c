#include <stdio.h>

int main(){

	int arr[16];
	for (int x = 0; x < 16; ++x)
		arr[x] = 0;

	int c, prev, length;
	c = prev = length = 0;

	while ((c = getchar()) != EOF){
		if (c != ' ' && c != '\t' && c != '\n')
			++length;
		else {
			if (length >= 15)
				++arr[15];
			else
				++arr[length - 1];
			length = 0;
		}
	}

	for (int y = 0; y < 10; ++y){
		printf("%d:  ", y + 1);
		while (arr[y] > 0){
			putchar('|');
			--arr[y];
		}
		putchar('\n');
	}
	for (int y = 10; y < 15; ++y){
		printf("%d: ", y + 1);
		while (arr[y] > 0){
			putchar('|');
			--arr[y];
		}
		putchar('\n');
	}
	printf("16+:");
	while(arr[15] > 0){
		putchar('|');
		--arr[15];
	}
	putchar('\n');
	return 0;
}