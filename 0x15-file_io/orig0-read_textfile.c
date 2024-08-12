ssize_t read_textfile(const char *filename, size_t letters)
{
        int file_p;
        char *buffer;
        ssize_t len, output_len;

        if (filename == NULL)
                return (0);
        file_p = open(filename, O_RDONLY);
        if (file_p == -1)
                return (0);
        buffer = malloc(sizeof(char) * letters);
        if (buffer == NULL)
        {
                close(file_p);
                return (0);
        }
        len = read(file_p, buffer, letters);
        close(file_p);
        if (len == -1)
        {
                free(buffer);
                return (0);
        }
        output_len = write(STDOUT_FILENO, buffer, len);
        free(buffer);
        if (len != output_len)
                return (0);
        return (output_len)
}

