\#include ;

int main() {

int num;

printf("Enter an integer number: ");
scanf("\%d", &num);

if(num < 100) {
printf("Your number is smaller than 100.\n");
} else {
printf("Your number is not smaller than 100.\n");
}

return 0;
}