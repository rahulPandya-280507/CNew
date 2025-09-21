#include <stdio.h>

void printMatrix(int rows, int cols, double mat[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%8.3f ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void toRowEchelonForm(int rows, int cols, double mat[rows][cols]) {
    int lead = 0;  // pivot column
    for (int r = 0; r < rows; r++) {
        if (lead >= cols)
            return;

        int i = r;
        while (mat[i][lead] == 0) {
            i++;
            if (i == rows) {
                i = r;
                lead++;
                if (lead == cols)
                    return;
            }
        }

        // Swap rows if needed
        if (i != r) {
            for (int j = 0; j < cols; j++) {
                double temp = mat[r][j];
                mat[r][j] = mat[i][j];
                mat[i][j] = temp;
            }
        }

        // Normalize pivot row
        double div = mat[r][lead];
        if (div != 0) {
            for (int j = 0; j < cols; j++) {
                mat[r][j] /= div;
            }
        }

        // Eliminate below
        for (int k = r + 1; k < rows; k++) {
            double factor = mat[k][lead];
            for (int j = 0; j < cols; j++) {
                mat[k][j] -= factor * mat[r][j];
            }
        }

        lead++;
    }
}

int main() {
    int rows, cols;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    double mat[rows][cols];
    printf("Enter the matrix elements row-wise:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%lf", &mat[i][j]);
        }
    }

    printf("\nOriginal Matrix:\n");
    printMatrix(rows, cols, mat);

    toRowEchelonForm(rows, cols, mat);

    printf("Row Echelon Form:\n");
    printMatrix(rows, cols, mat);

    return 0;
}
