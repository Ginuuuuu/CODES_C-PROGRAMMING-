#include <stdio.h>
#include <string.h>
struct store_string {
    char store[20];
};
int main () {

    struct store_string arr[10];

    printf("\n\tWELCOME TO CHECK YOUR PASSWORD STRENGTH (OUT OF 5)");
    printf("\n\nENTER YOUR PASSWORD: ");
    scanf("%19[^/\n]%*c", arr[1].store);

    int lower = 0;
    int upper = 0;
    int digit = 0;
    int symbol = 0;

    int len = strlen(arr[1].store);


    for (int i = 0; i < len ; i++) {

        char ch = arr[1].store[i];

        if ((ch >= 'a' && ch <= 'z') && (lower == 0)) {
            lower++;
        }else if ((ch >= 'A' && ch <= 'Z') && (upper == 0)) {
            upper++;
        }else if ((ch >= '0' && ch <= '9') && (digit == 0)) {
            digit++;
        } else if ((symbol == 0) && ((ch >= '!' && ch <= '/') || (ch >= ':' && ch <= '@') || (ch >= '[' && ch < 'a') || (ch >= '{' && ch <= '~'))){
            symbol++;
        }
    }
    int result = upper + lower + digit + symbol;

    if (len >= 6) {
        printf("\nSTRENGTH OF YOUR PASSWORD IS: %d", result + 1);
    } else {
        printf("\nSTRENGTH OF YOUR PASSWORD IS: %d", result);
    }
    if (len < 6) {
        printf("\n\nMAKE IT 6 CHARACTER TO INCREASE YOUR PASSWORD STRENGTH\n");
    }
    if (lower == 0) {
        printf("\n\nADD A LOWERCASE CHARACTER TO INCREASE YOUR PASSWORD STRENGTH\n");
    }
    if (upper == 0) {
        printf("\n\nADD A UPPERCASE CHARACTER TO INCREASE YOUR PASSWORD STRENGTH\n");
    }
    if (digit == 0) {
        printf("\n\nADD A DIGIT TO INCREASE YOUR PASSWORD STRENGTH\n");
    }
    if (symbol == 0) {
        printf("\n\nADD A SYMBOL TO INCREASE YOUR PASSWORD STRENGTH\n");
    }
    return 0;
}