void insertTDA(int row, int col, char str[], char tda[row][col]) {
    // Putting element till row ends.
    int i, r = 0, c = 0, goingUp = 0;
    tda[0][0] = str[0];
    for(i = 1;str[i] != '\0';i++) {
        // We are going down
        if(r < row - 1 && goingUp == 0) {
            tda[++r][c] = str[i];
        }
        else {
            if(r > 0) {
                goingUp = 1;
                tda[--r][++c] = str[i];
            }
            else {
                goingUp = 0;
                tda[++r][c] = str[i];
            }
        }
    }
}

char* convert(char *str, int row) {
    if(row == 1) return str;

    int col = 0;
    int r, c, i;
    
    // Counting rows and columns
    for(i = 0; str[i] != '\0'; i++) col++;
    
    // Creating and Initialising the 2D array.
    char tda[row][col];
    for(int r = 0; r < row; r++) {
        for(int c = 0; c < col; c++) {
            tda[r][c] = '0';
        }
    }
    
    insertTDA(row, col, str, tda);
    
    // For printing (Debugging).
    i = 0;
    for(r = 0; r < row; r++) {
        for(c = 0; c < col; c++) {
            if(tda[r][c] != '0') {
                str[i++] = tda[r][c];
            }
        }
    }
    str[i] = '\0';
    return str;
}
