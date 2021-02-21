#include <stdio.h>

int main()
{
    int i, j, n, len, len2;

    scanf("%d", &n);

    len = n * 2 - 1;

    for(i = 0; i < (len+1)/2; i++)
    {
        for(j = 0; j < i+1; j++)
	    {
            printf("%d ",n-j);
	    }
        for(j = i+1; j < (len+1)/2; j++)
	    {
            printf("%d ",n-i);
	    }
	    for(j = i+1; j < (len+1)/2; j++)
	    {
            printf("%d ",n-i);
	    }
	    for(j = i-1; j >= 0; j--)
	    {
            printf("%d ",n-j);
	    }

    	printf("\n");
	}

    len2 = (len - (len+1)/2) - 1;

	for(i = 0; i <= len2; i++)
    {
        for(j=0; j < n-1-i; j++)
        {
            printf("%d ", n-j);
        }

        for(; j < len-(n-1-i); j++)
        {
            printf("%d ",n-len2+i);
        }

        for(; j < len; j++)
        {
            printf("%d ", n-(len-j-1));
        }


        printf("\n");
    }

    return 0;
}
