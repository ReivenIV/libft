#include <stdio.h>

int main() {
    // Define color codes
    const char *BLACK = "\033[0;30m";
    const char *RED = "\033[0;31m";
    const char *GREEN = "\033[0;32m";
    const char *YELLOW = "\033[0;33m";
    const char *BLUE = "\033[0;34m";
    const char *MAGENTA = "\033[0;35m";
    const char *CYAN = "\033[0;36m";
    const char *WHITE = "\033[0;37m";

    const char *BOLD = "\033[1m";
    const char *UNDERLINE = "\033[4m";
    const char *REVERSED = "\033[7m";

    const char *BRIGHT_BLACK = "\033[1;30m";
    const char *BRIGHT_RED = "\033[1;31m";
    const char *BRIGHT_GREEN = "\033[1;32m";
    const char *BRIGHT_YELLOW = "\033[1;33m";
    const char *BRIGHT_BLUE = "\033[1;34m";
    const char *BRIGHT_MAGENTA = "\033[1;35m";
    const char *BRIGHT_CYAN = "\033[1;36m";
    const char *BRIGHT_WHITE = "\033[1;37m";

	// Background colors
    const char *BG_RED = "\033[41m";
    const char *BG_GREEN = "\033[42m";
    const char *BG_YELLOW = "\033[43m";
    const char *BG_BLUE = "\033[44m";
    const char *BG_MAGENTA = "\033[45m";
    const char *BG_CYAN = "\033[46m";
    const char *BG_WHITE = "\033[47m";

	//! Important one 
    const char *RESET = "\033[0m";

    // Print "Hello World!" with each color and its code
    printf("%sHello World! - Color Code 30%s\n", BLACK, RESET);
    printf("%sHello World! - Color Code 31%s\n", RED, RESET);
    printf("%sHello World! - Color Code 32%s\n", GREEN, RESET);
    printf("%sHello World! - Color Code 33%s\n", YELLOW, RESET);
    printf("%sHello World! - Color Code 34%s\n", BLUE, RESET);
    printf("%sHello World! - Color Code 35%s\n", MAGENTA, RESET);
    printf("%sHello World! - Color Code 36%s\n", CYAN, RESET);
    printf("%sHello World! - Color Code 37%s\n", WHITE, RESET);
	printf("\n ---- \n\n");

	// Print "Hello World!" with different styles
    printf("%sHello World! - Bold Text%s\n", BOLD, RESET);
    printf("%sHello World! - Underlined Text%s\n", UNDERLINE, RESET);
    printf("%sHello World! - Reversed Colors%s\n", REVERSED, RESET);
	printf("\n ---- \n\n");
	
    // Print "Hello World!" with bright colors and their codes
    printf("%sHello World! - Color Code 90%s\n", BRIGHT_BLACK, RESET);
    printf("%sHello World! - Color Code 91%s\n", BRIGHT_RED, RESET);
    printf("%sHello World! - Color Code 92%s\n", BRIGHT_GREEN, RESET);
    printf("%sHello World! - Color Code 93%s\n", BRIGHT_YELLOW, RESET);
    printf("%sHello World! - Color Code 94%s\n", BRIGHT_BLUE, RESET);
    printf("%sHello World! - Color Code 95%s\n", BRIGHT_MAGENTA, RESET);
    printf("%sHello World! - Color Code 96%s\n", BRIGHT_CYAN, RESET);
    printf("%sHello World! - Color Code 97%s\n", BRIGHT_WHITE, RESET);
	printf("\n ---- \n\n");

	// Print "Hello World!" with background colors
    printf("%sHello World! - Color Code 41%s\n", BG_RED, RESET);
    printf("%sHello World! - Color Code 42%s\n", BG_GREEN, RESET);
    printf("%sHello World! - Color Code 43%s\n", BG_YELLOW, RESET);
    printf("%sHello World! - Color Code 44%s\n", BG_BLUE, RESET);
    printf("%sHello World! - Color Code 45%s\n", BG_MAGENTA, RESET);
    printf("%sHello World! - Color Code 46%s\n", BG_CYAN, RESET);
    printf("%sHello World! - Color Code 47%s\n", BG_WHITE, RESET);
	printf("\n ---- \n\n");

    // Combine text color, background color, and style
    printf("%s%s%sHello World! - Bold Red Text on Yellow Background%s\n", BOLD, RED, BG_YELLOW, RESET);
    printf("%s%s%sHello World! - Underlined Blue Text on White Background%s\n", UNDERLINE, BLUE, BG_WHITE, RESET);

    return 0;
}