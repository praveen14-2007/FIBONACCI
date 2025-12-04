#include <stdio.h>

int main() {
    // Declare and initialize variables
    int zooID = 49;       // Zoo ID (integer)
    int section = 100;        // Zoo section (integer)
    float ticketPrice = 25.75f; // Ticket price (float)

    // Explicit conversion from int to char (Zoo ID)
    char zooIDChar = (char)zooID; // Convert zooID from int to char explicitly

    // Explicit conversion from int to char (Zoo section)
    char sectionChar = (char)section; // Convert section from int to char explicitly

    // Output all the information
    printf("Zoo ID (converted to char): %c\n", zooIDChar);     // Zoo ID converted to char
    printf("Zoo Section (converted to char): %c\n", sectionChar); // Zoo section converted to char
    printf("Ticket Price: %f", ticketPrice);  // Ticket price (float)

    return 0;
}
