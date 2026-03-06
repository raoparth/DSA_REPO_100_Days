#include <stdio.h>
#include <string.h>

void reverseString(char s[], int n)
{
    int start = 0;
    int end = n - 1;
    char temp;

    while(start < end)
    {
        temp = s[start];
        s[start] = s[end];
        s[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    char s[] = "hello";
    int n = strlen(s);

    reverseString(s, n);

    printf("Reversed string: %s", s);

    return 0;
}
