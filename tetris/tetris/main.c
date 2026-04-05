#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <unistd.h>
#include <termios.h>
#include <fcntl.h>

#define WIDTH 10
#define HEIGHT 20

// Function to initialize the game board
void initializeBoard(char board[HEIGHT][WIDTH]) {
    int i, j;
    for (i = 0; i < HEIGHT; i++) {
        for (j = 0; j < WIDTH; j++) {
            board[i][j] = ' ';
        }
    }
}

// Function to print the game board
void printBoard(char board[HEIGHT][WIDTH]) {
    int i, j;
    system("clear");  // Clear the console (compatible with Linux/macOS)
    //system("cls"); // Uncomment this line if using Windows

    for (i = 0; i < HEIGHT; i++) {
        for (j = 0; j < WIDTH; j++) {
            printf("%c", board[i][j]);
        }
        printf("\n");
    }
}

// Function to check if a piece can be placed at the given position
bool canPlacePiece(int x, int y, char piece[4][4], char board[HEIGHT][WIDTH]) {
    int i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (piece[i][j] != ' ' && (x + i >= HEIGHT || y + j < 0 || y + j >= WIDTH || board[x + i][y + j] != ' ')) {
                return false;
            }
        }
    }
    return true;
}

// Function to place a piece on the game board
void placePiece(int x, int y, char piece[4][4], char board[HEIGHT][WIDTH]) {
    int i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (piece[i][j] != ' ') {
                board[x + i][y + j] = piece[i][j];
            }
        }
    }
}

// Function to clear complete rows and move the rows above down
int clearRows(char board[HEIGHT][WIDTH]) {
    int i, j, k;
    int rowsCleared = 0;
    bool rowComplete;

    for (i = HEIGHT - 1; i >= 0; i--) {
        rowComplete = true;
        for (j = 0; j < WIDTH; j++) {
            if (board[i][j] == ' ') {
                rowComplete = false;
                break;
            }
        }
        if (rowComplete) {
            rowsCleared++;
            for (k = i; k > 0; k--) {
                for (j = 0; j < WIDTH; j++) {
                    board[k][j] = board[k - 1][j];
                }
            }
        }
    }

    return rowsCleared;
}

// Function to generate a new random piece
void generatePiece(char piece[4][4]) {
    int i, j;
    int pieceType = rand() % 7;

    switch (pieceType) {
        case 0:  // I
            for (i = 0; i < 4; i++) {
                for (j = 0; j < 4; j++) {
                    piece[i][j] = (j == 1) ? '#' : ' ';
                }
            }
            break;
        case 1:  // J
            for (i = 0; i < 4; i++) {
                for (j = 0; j < 4; j++) {
                    piece[i][j] = ((i == 3 && j != 0) || j == 1) ? '#' : ' ';
                }
            }
            break;
        case 2:  // L
            for (i = 0; i < 4; i++) {
                for (j = 0; j < 4; j++) {
                    piece[i][j] = ((i == 3 && j != 2) || j == 1) ? '#' : ' ';
                }
            }
            break;
        case 3:  // O
            for (i = 0; i < 4; i++) {
                for (j = 0; j < 4; j++) {
                    piece[i][j] = (i >= 2 && i <= 3 && j >= 1 && j <= 2) ? '#' : ' ';
                }
            }
            break;
        case 4:  // S
            for (i = 0; i < 4; i++) {
                for (j = 0; j < 4; j++) {
                    piece[i][j] = ((i == 2 && j >= 1 && j <= 2) || (i == 3 && (j == 0 || j == 3))) ? '#' : ' ';
                }
            }
            break;
        case 5:  // T
            for (i = 0; i < 4; i++) {
                for (j = 0; j < 4; j++) {
                    piece[i][j] = ((i == 3 && j != 1) || (i == 2 && j == 2)) ? '#' : ' ';
                }
            }
            break;
        case 6:  // Z
            for (i = 0; i < 4; i++) {
                for (j = 0; j < 4; j++) {
                    piece[i][j] = ((i == 2 && j >= 1 && j <= 2) || (i == 3 && (j == 1 || j == 2))) ? '#' : ' ';
                }
            }
            break;
    }
}

// Function to rotate a piece
void rotatePiece(char piece[4][4]) {
    int i, j;
    char tempPiece[4][4];

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            tempPiece[i][j] = piece[i][j];
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            piece[i][j] = tempPiece[3 - j][i];
        }
    }
}

// Function to check if a key is pressed
bool isKeyPressed() {
    struct termios oldt, newt;
    int oldf;
    int ch;

    tcgetattr(STDIN_FILENO, &oldt);          // terminal ayarlarını al
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);        // anlık karakter al, echo'yu kapat
    tcsetattr(STDIN_FILENO, TCSANOW, &newt); // yeni ayarları uygula
    oldf = fcntl(STDIN_FILENO, F_GETFL, 0);  // stdin bayraklarını al
    fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK); // non-blocking moda geç

    ch = getchar();

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);  // eski ayarları geri yükle
    fcntl(STDIN_FILENO, F_SETFL, oldf);       // stdin eski moduna dön

    if (ch != EOF) {
        ungetc(ch, stdin); // karakteri geri koy
        return true;
    }

    return false;
}

int main() {
    char board[HEIGHT][WIDTH];
    char currentPiece[4][4];
    int currentX, currentY;
    int score = 0;
    bool gameOver = false;

    srand((unsigned int)time(NULL));  // Seed the random number generator

    initializeBoard(board);
    generatePiece(currentPiece);
    currentX = 0;
    currentY = WIDTH / 2 - 2;

    while (!gameOver) {
        printBoard(board);

        // Check for user input
        if (isKeyPressed()) {
            char key = getchar();
            switch (key) {
                case 'a':
                    if (canPlacePiece(currentX, currentY - 1, currentPiece, board)) {
                        currentY--;
                    }
                    break;
                case 'd':
                    if (canPlacePiece(currentX, currentY + 1, currentPiece, board)) {
                        currentY++;
                    }
                    break;
                case 's':
                    if (canPlacePiece(currentX + 1, currentY, currentPiece, board)) {
                        currentX++;
                    }
                    break;
                case 'w':
                    {
                        char rotatedPiece[4][4];
                        int i, j;

                        for (i = 0; i < 4; i++) {
                            for (j = 0; j < 4; j++) {
                                rotatedPiece[i][j] = currentPiece[i][j];
                            }
                        }

                        rotatePiece(rotatedPiece);

                        if (canPlacePiece(currentX, currentY, rotatedPiece, board)) {
                            for (i = 0; i < 4; i++) {
                                for (j = 0; j < 4; j++) {
                                    currentPiece[i][j] = rotatedPiece[i][j];
                                }
                            }
                        }
                    }
                    break;
                case 'q':
                    gameOver = true;
                    break;
            }
        }

        // Move the current piece down
        if (canPlacePiece(currentX + 1, currentY, currentPiece, board)) {
            currentX++;
        } else {
            placePiece(currentX, currentY, currentPiece, board);
            int clearedRows = clearRows(board);
            score += clearedRows;

            generatePiece(currentPiece);
            currentX = 0;
            currentY = WIDTH / 2 - 2;

            if (!canPlacePiece(currentX, currentY, currentPiece, board)) {
                gameOver = true;
            }
        }

        usleep(100000);  // Delay for smoother animation (compatible with Linux/macOS)
        //Sleep(100); // Uncomment this line if using Windows
    }

    printBoard(board);
    printf("Game Over! Your score: %d\n", score);

    return 0;
}
