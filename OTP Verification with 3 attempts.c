#include <stdio.h>
#include <string.h>
int main() {
    char sent_otp[10];
    char user_attempt[10];
    int attempts = 3;
    int success = 0;
    printf("Enter the OTP sent to the phone: ");
    scanf("%s", sent_otp);
    for (int i = 1; i <= attempts; i++) {
        printf("Enter OTP (Attempt %d): ", i);
        scanf("%s", user_attempt);
        if (strcmp(user_attempt, sent_otp) == 0) {
            printf("Unlocked at attempt %d\n", i);
            success = 1;
            break;
        }
    }
    if (!success) {
        printf("Account locked\n");
    }
    return 0;
}



