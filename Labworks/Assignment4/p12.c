// Sparse Matrix Representation:
// Implement a program to represent a sparse 
// matrix (a matrix with a majority of its elements being zero)
// using a structure and pointers. This involves handling memory efficiently.

#include<stdio.h>
#include<conio.h>

struct SMNode{
    int row;
    int col;
    int data;
    struct SMNode* next;
};

struct SMNode* buildMatElement(int row, int col, int value) {
    struct SMNode* element = (struct SMNode*)malloc(sizeof(struct SMNode));
    if (element == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    element->row = row;
    element->col = col;
    element->data = value;
    element->next = NULL;
    return element;

}


void showMatrix(struct SMNode* matrix) {
    struct SMNode* temp = matrix;

    printf("\nSparse Matrix:\n");
    while (temp != NULL) {
        printf("(%d, %d) = %d\n", temp->row, temp->col, temp->data);
        temp = temp->next;
    }
}

void addMatrixElement(struct SMNode** matrix, int row, int col, int value) {
    
    struct SMNode* newNode = buildMatElement(row, col, value);

    if (*matrix == NULL) {
        *matrix = newNode;
    } else {
        struct SMNode* temp = *matrix;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}



void main(){

    int nrows, ncols;
    struct SMNode * sparseMatrix = NULL;

    printf("Enter the number of rows and columns in the matrix: ");
    scanf("%d %d", &nrows, &ncols);

    printf("Enter the elements of the %d X %d matrix:\n",nrows,ncols);
    for (int i = 0; i < nrows; i++) {
        for (int j = 0; j < ncols; j++) {
            int data;
            scanf("%d", &data);

            if (data != 0) {
                addMatrixElement(&sparseMatrix, i, j, data);
            }
        }
    }

    showMatrix(sparseMatrix);
    getch();
}