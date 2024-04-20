#include <stdio.h>
#include <string.h>
#define MaxSize 1001

int main() 
{
    
    char Sentence[MaxSize];
    memset(Sentence, '\0', MaxSize);
    
    scanf("%[^\n]", Sentence);
    
    for(int index = 0; index < strlen(Sentence); index++)
    {
        if(' ' == Sentence[index])
        {
            printf("\n");
        }
        else
        {
            printf("%c", Sentence[index]);
        }
    }
    return 0;
}
