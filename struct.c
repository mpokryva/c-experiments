#include <stdio.h>
#include <string.h>
typedef struct {
	int attempts;
	char *password;
	char *errorMessage;
	int maxAttempts;
	union login_state {
		int one;
		char *str;
	} state;

} login;

void tryLogin(login *login, char *password) {
	if (strcmp(login->password, password) == 0) {
		printf("%s", "Yay, you've logged in!");
	} else {
		printf("%s", login->errorMessage);
		 login->attempts++;
	}
}

int main( int argc, const char* argv[] )
{
login attempt = {1, "Michelle", "That's not the password, you silly goose!", 3, "str"};
tryLogin(&attempt, "Michelle");


	
}

