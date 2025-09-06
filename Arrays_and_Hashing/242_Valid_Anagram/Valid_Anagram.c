#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>




bool isAnagram(char* s, char* t) {

    int length = strlen(t);
    //s and t should have the same length

    if (length != strlen(s)){
        return false;
    }

    char* t_copy = (char*)malloc(strlen(t) + 1);
    strcpy(t_copy, t);
    
    for (int i = 0; i < strlen(s); i++){
        bool found = false;
        char character = s[i];
        for (int j = 0; j < length; j++ ){
            if (character == t_copy[j]){                           
                for (int k = j; k < length - 1; k++){
                    t_copy[k] = t_copy[k+1];
                }
                length --;
                found = true;
                break;
            }
        }
        if (found == false){
                return false;
            }
    }
    return (length == 0);
}
int main()
{
    printf("%s",isAnagram("yhujik","ikpjyh") ? "true"  : "false");
    return 0;
}
