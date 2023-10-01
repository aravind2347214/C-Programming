#include <stdio.h>

void main() {

  FILE *input_file, *output_file;
  char buffer[1024];

  // Open the input file for reading
  input_file = fopen("input.txts  if (input_file == NULL) {
    perror("Error opening input file");
    return 1;
  }

  // Open the output file for writing
  output_file = fopen("output.txt", "w");
  if (output_file == NULL) {
    perror("Error opening output file");
    fclose(input_file);
    return 1;
  }

  // Read data from the input file and write it to the output file
  while (fgets(buffer, sizeof(buffer), input_file) != NULL) {
    fprintf(output_file, "%s", buffer);
  }

  // Close both files
  fclose(input_file);
  fclose(output_file);

}

