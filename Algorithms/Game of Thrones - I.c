
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
    we can't use XOR'em all method, cause there might be more than one numbers of odd number letters.
    have to find the number of odd number letters
*/
findPalind(char *arr)
{
    int alphtimes[26];
    for (int i = 0; i<26; ++i)
        alphtimes[i] = 0;
    
    int flag = 0;
    
    while(*arr) {
        ++alphtimes[*arr-'a'];
        ++arr;
    }
    int nodd = 0;
    for (int i = 0; i<26; ++i) {
        nodd += (alphtimes[i]%2);
        if (nodd > 1) {               // no need to sum all, as soon as number of odd numbers > 2, set flag and break
            flag = 1;
            break;
        }
    }
    if (flag==0)
        printf("YES\n");
    else
        printf("NO\n");
    
    return;
}
int main() {

    char arr[100001];
    scanf("%s",arr);
    findPalind(arr);
    return 0;
}
