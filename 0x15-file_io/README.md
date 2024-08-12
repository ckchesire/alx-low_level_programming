# C File Handling: A Quick Guide
0x15. C - File I/O
 
## Types of Data Files
- **Stream-Oriented**: Sequential data, ideal for text files.
  - Example: Writing to `.txt` files.
- **System-Oriented**: Integrated with OS for complex operations.
  - Example: Writing to `.bin` files.

## Essential File Operations
1. **Create**: `fopen("filename.txt", "w");`
2. **Open**: `fopen("filename.txt", "r");`
3. **Read**: `fgets(buffer, size, filePointer);`
4. **Write**: `fprintf(filePointer, "%s", data);`
5. **Close**: `fclose(filePointer);`

## File Processing Steps
1. **Declare a File Pointer**: `FILE *fp;`
2. **Open the File**: `fp = fopen("filename.txt", "r");`
3. **Process the File**: Use functions like `fprintf()`, `fgets()`.
4. **Close the File**: `fclose(fp);`

## Key Functions
- `fopen()`: Open file, return pointer.
- `fclose()`: Close file.
- `getc()`, `putc()`: Read/Write characters.
- `getw()`, `putw()`: Read/Write integers.
- `fprintf()`, `fscanf()`: Format data.
- `fgets()`, `fputs()`: String operations.
- `feof()`: End-of-file check.
