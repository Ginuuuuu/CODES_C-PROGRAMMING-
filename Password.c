#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    int n, k;
    
    scanf("%d", &n);
    scanf("%d", &k);
    int x = 0;
    
    srand(time(0));
    

    char arr[26];

    for (int i= 0; i < k; i++){
        
        int randnum = (rand() % 26) + 97;
        char b = (char)randnum;
        arr[i] = b;

    }
    // int y = n - k ;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            printf("%c", arr[j]);
            x++;
            if (x == n) {
                break;
            }
        }
            if (x == n) {
                break;
            }
    }
return 0;
}

        // This code is a password generator which take the size of the password and distinct letters should be used in the password and generate a random password