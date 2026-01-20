#include <stdio.h>
#include <string.h>

int main()
{
    char username[20];
    char password[20];

    // Correct credentials
    char correctUsername[] = "admin";
    char correctPassword[] = "12345";

    // Input from user
    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%s", password);

    // Validation
    if (strcmp(username, correctUsername) == 0 &&
        strcmp(password, correctPassword) == 0)
    {
        printf("Login Successful \n");
    }
    else
    {
        printf("Invalid Username or Password \n");
    }

    return 0;
}