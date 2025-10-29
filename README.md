# 🔒 file-encoder

A simple command-line utility written in C for encoding and decoding files using a basic **XOR cipher** with a repeating key.

## ✨ Features

* **Encode:** Encrypts an input file using a user-provided key.
* **Decode:** Decrypts an encoded file using the same key (since XOR is its own inverse).
* **CLI:** Command-line interface for quick execution.

## ⚙️ How to Build (Compiling)

Assuming you have a standard C compiler (like GCC or Clang) installed:

1.  **Save the Code:** Put your `main.c` (or the file with the main function) and `utility.c` (the file with `xor_proccess` and `Get_operation_type`) and `utility.h` into a directory.
2.  **Compile:** Open your terminal in that directory and run the following command:

    ```bash
    gcc main.c utility.c -o file_encoder
    ```

    This command compiles the source files and creates an executable named `file_encoder`.

## 🚀 How to Use

The utility requires **four** command-line arguments: `<operation> <input_file> <output_file> <key>`.

### 1. Encoding a File

To encrypt a file named `message.txt` and save the result to `encoded.txt` using the key `key`:

```bash
./file_encoder encode message.txt encoded.txt key
```
### 1. Decoding a File

To decrypt the file `encoded.txt` and restore the original content to `decoded.txt` using the same key `key`:

```bash
./file_encoder decode encoded.txt decoded.txt key
