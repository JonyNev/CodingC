/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main()
{

//......000000000000............
void print_welcome_message()
{
printf("Welcome to NumberTournanment 2015!\n\n"
"Please enter the arena. In a moment you "
"will be fighting head-to-head\n"
"at the NNDF (National Number & Digit Federation) "
"world cup championships.\n"
"The Number Master will now choose the golden number;\n"
"you must keep this number above zero at all cost.\n"
"The player who survives the longest wins.\n\n"
"Ready?\n"
"Go!\n" );
}

//.....111111111111111.............
void print_game_state(unsigned int num, int player)
{
printf("\n** Player no. %d turn **\n\n", player);
printf("The number is: %u\n", num);
}
//.....222222222222...........
int num_length(unsigned int num) {
int digit_num = 1;
while(num > 9) {
num /= 10;
digit_num++;
}
return digit_num;
}


//.....333333333333..............
int read_value(int min, int max) {
int value = 0;
do
{
if (scanf("%d", &value) != 1) {
printf("Error reading input! Exiting.\n");
exit(1);
}
if (value < min || value > max)
printf("Invalid value! please try again: ");
}
while (value < min || value > max);
return value;
}
//.....444444444444444.............
long long pow10(int n) {
long long result = 1;
while (n > 0)
{
result *= 10;
n--;
}
return result;
}

//........5555555555555............
int get_digit(unsigned int num, int digID) {
return (num / (int)pow10(digID-1)) % 10;
}
//.......66666666666666........
unsigned int update_num(unsigned int num, int digID) {
int dig_val;
dig_val = get_digit(num, digID);
if (dig_val == 0) {
num /= (int)pow10(digID);
}
else {
printf("Choose amount: (1..%d) ", dig_val);
num -= read_value(1,dig_val) * pow10(digID-1);
}
return num;
}
//.........7777777777777777..........
int read_dig_index() {
printf("Please choose a digit index: ");
int dig_id = 0;
scanf("%d", &dig_id);
return dig_id;
}

//.................................
   srand(time(0));
int num = rand();
print_welcome_message();
int curr_player = 1;
while (num > 0)
{
print_game_state(num, curr_player);
int dig_index = read_dig_index(num);
num = update_num(num, dig_index);
curr_player = 3 - curr_player;
}
printf("Player %d has won!\n", curr_player);

    return 0;
}
