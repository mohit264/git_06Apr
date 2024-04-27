#include<stdlib.h>
#include<stdio.h>

void UserRegistration(string firstName, string lastName, string email)
{
	printf("User Registration Successful");
}

void UserLogin(string userName, string pwd)
{
        printf("Login successful");
}


int main (void)
{
	printf ("User Registration Implemented");
	UserRegistration();
	printf("User Authentication\n Implemented");
	UserLogin("mohit", "abcd1234");
	return 0;
}

