/*
 * Simplest form of a random number generator 
 * Start the thing and receive a number.
 * */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <argp.h>
#include <stdbool.h>

const char *argp_program_version = "random 0.1";
const char *argp_program_bug_address = "<stho32github@gmail.com>";
static char doc[] = "A random stuff generator like described in Challenge CH001";

/**
 * Possible calls from the command line:
 * - random number        : generate a random number between 1 and 10
 * - random number 10     : generate a random number between 1 and 10
 * - random number 20 100 : generate a random number between 20 and 100
 * - random password      : generate a random password with 14 characters
 * - random password 8    : generate a random password with 8 characters
 * - random animal        : generate a random animal name
 */
static struct argp_option options[] = {
    {.name = "number",
     .key = 'n',
     .arg = 0,
     .flags = 0,
     .doc = "generate a random number"},
    {.name = "password",
     .key = 'p',
     .arg = 0,
     .flags = 0,
     .doc = "generate a password"},
    {.name = "animal",
     .key = 'a',
     .arg = 0,
     .flags = 0,
     .doc = "generate a random animal"},
    {0}};

struct arguments
{
    enum
    {
        NUMBER_MODE,
        PASSWORD_MODE,
        ANIMAL_MODE
    } mode;
};

static error_t parse_opt(int key, char *arg, struct argp_state *state)
{
    struct arguments *arguments = state->input;
    switch (key)
    {
    case 'n':
        arguments->mode = NUMBER_MODE;
        break;
    case 'p':
        arguments->mode = PASSWORD_MODE;
        break;
    case 'a':
        arguments->mode = ANIMAL_MODE;
        break;
    default:
        return ARGP_ERR_UNKNOWN;
    }
    return 0;
}

/*
static struct argp argp = {
    options, 
    parse_opt, 
    args_doc, 
    doc, 
    0, 
    0, 
    0};*/

enum modusEnum {
    MODE_BLA = 1,
    MODE_BLUBBER = 2,
    MODE_NOCHEINEOPTION = 3
};

enum colors {
    COLOR_RED = 1,
    COLOR_BLUE = 2
};

int main(int argc, char *argv[])
{
    struct arguments arguments;

    enum modusEnum mode = COLOR_BLUE;
    enum colors color = COLOR_BLUE;
    int i = "w";

/*
    arguments.mode = CHARACTER_MODE;
    arguments.isCaseInsensitive = false;
*/
    //argp_parse(&argp, argc, argv, 0, 0, &arguments);

    srand(time(NULL));
    int randomNumber = rand() % 10;
    printf("random number using rand: %d\n", randomNumber);
    return 0;
}
