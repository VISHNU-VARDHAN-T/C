
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 5
#define COLS 5


void display_seats(char seats[ROWS][COLS]) {
    printf("  ");
    for (int i = 1; i <= COLS; i++) {
        printf("%d ", i);
    }
    printf("\n");
    for (int i = 0; i < ROWS; i++) {
        printf("%c ", 'A' + i);
        for (int j = 0; j < COLS; j++) {
            printf("%c ", seats[i][j]);
        }
        printf("\n");
    }
}


void book_seat(char seats[ROWS][COLS], int row, int col) {
    if (seats[row][col] == 'X') {
        printf("Seat is already booked.\n");
    } else {
        seats[row][col] = 'X';
        printf("Seat booked successfully.\n");
    }
}

int main() {
    srand(time(NULL)); 

    char seats[ROWS][COLS];
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            seats[i][j] = '-';
        }
    }

    for (int i = 0; i < 5; i++) {
        int row = rand() % ROWS;
        int col = rand() % COLS;
        if (seats[row][col] != 'X') {
            seats[row][col] = 'X';
        } else {
            i--; 
        }
    }

    printf("Theatre Booking System\n");
    printf("---------------------------\n");

    while (1) {
        printf("1. Display Seats\n");
        printf("2. Book Single Seat\n");
        printf("3. Book Multiple Seats\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        int choice;
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                display_seats(seats);
                break;
            case 2:
                printf("Enter the row (A-E): ");
                char row;
                scanf(" %c", &row);
                printf("Enter the column (1-5): ");
                int col;
                scanf("%d", &col);
                book_seat(seats, row - 'A', col - 1);
                break;
            case 3:
                printf("Enter the number of seats: ");
                int num_seats;
                scanf("%d", &num_seats);
                for (int i = 0; i < num_seats; i++) {
                    printf("Enter the row (A-E) for seat %d: ", i + 1);
                    char row;
                    scanf(" %c", &row);
                    printf("Enter the column (1-5) for seat %d: ", i + 1);
                    int col;
                    scanf("%d", &col);
                    book_seat(seats, row - 'A', col - 1);
                }
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
