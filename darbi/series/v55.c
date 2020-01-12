#include<stdio.h>
#include <string.h>

void BubbleSort(char a[], int array_size)
{
    int i, j, temp;
    for (i = 0; i < (array_size - 1); ++i)
    {
        for (j = 0; j < array_size - 1 - i; ++j )
        {
            if (a[j] > a[j+1])
            {
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
}

void main() {
	char str[128];
	char sortedStr[128];

	printf("Ievad tekst ");
	scanf("%s", str);

	memset(sortedStr, 0, 128);
	memcpy(sortedStr, str, 128);
	printf("str = %s\n", str);

	char minch = 127;
	char maxch = -128;
	int chsum = 0;

	for(int i = 0; i < strlen(str); i++) {
		if(str[i] < minch)
			minch = str[i];
		if(str[i] > maxch)
			maxch = str[i];
		chsum += str[i];
	}

	BubbleSort(sortedStr, strlen(str));

	printf("Min ch %c\nMax ch %c\n", minch, maxch);
	printf("Avg ch %c\n", (char)(chsum / strlen(str)));
	printf("Alfabt %s\n", sortedStr);

	char med0, med1;
	if(strlen(str) & 1) {
		med0 = sortedStr[strlen(str)/2];
		med1 = sortedStr[strlen(str)/2];
	} else {
		med0 = sortedStr[strlen(str)/2-1];
		med1 = sortedStr[strlen(str)/2];
	}
	
	printf("Median %c\n", (med0+med1)/2);


	printf("Char\tASCII\n");
	for(int i = 0; i < strlen(str); i++) {
		printf("%c\t%d\n", str[i], (int)str[i]);
	}



}








