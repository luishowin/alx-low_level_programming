#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_file - creates a file 
 * file_descriptor - // Open the file with read and write permissions, creating it if it doesn't exist
 * 
*/

int create_file(const char *filename, char *text_content) {
    if (filename == NULL) {
        return -1; /*if filename is NULL*/
    }

    int file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

    if (file_descriptor == -1) {
        return -1; /*if the file cannot be opened or created*/
    }

    if (text_content != NULL) {
        // Write the content to the file if text_content is not NULL
        ssize_t write_result = write(file_descriptor, text_content, strlen(text_content));

        if (write_result == -1) {
            close(file_descriptor);
            return -1; // Return -1 if the write operation fails
        }
    }

    // Close the file descriptor
    if (close(file_descriptor) == -1) {
        return -1; // Return -1 if the file cannot be closed
    }

    return 1;
}
