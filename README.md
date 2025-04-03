# KLS - A Simple Unix Shell

KLS is a simple command-line shell program that mimics the functionality of a Unix shell. It allows users to execute commands, manage processes, and handle built-in commands like `pwd` (Print Working Directory) using basic C programming concepts.

## Features
- **Command execution**: Execute external commands like `ls`, `pwd`, `echo`, etc.
- **Built-in commands**: Support for built-in commands such as `pwd`.
- **Signal handling**: Handle `SIGINT` (Ctrl+C) to ensure smooth user interaction.

## Requirements
- **GCC** (GNU Compiler Collection) for compiling the C code
- **GNU Readline** for input handling with command history support

### Dependencies
- `readline` library for input reading and command history

Install it on your system using:
```bash
sudo apt-get install libreadline-dev  # For Debian/Ubuntu-based systems
sudo pacman -S readline      # For Arch Linux
```

## Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/kaveen-lakmuthu/kls.git
   cd kls
   ```

2. Compile the program:
   ```bash
   make
   ```

3. Run the shell:
   ```bash
   ./kls
   ```

## Usage

After launching the shell, you can execute commands as you would in any Unix-like terminal.

### Examples:
- `pwd` - Print the current working directory.
- `ls` - List files in the current directory.
- `echo "Hello, World!"` - Print a message.
- **Exit the shell**: Type `exit` or press `Ctrl+C` to terminate the shell.

## Built-in Commands

1. `pwd`: Displays the current directory.
   ```bash
   kls> pwd
   /home/user
   ```

2. `exit`: Exits the shell.
   ```bash
   kls> exit
   ```

## Ongoing Development
- **Command piping**: Currently not implemented, but in future releases, piping (`|`) will be supported to allow redirecting the output of one command to another.
- **Error handling improvements**: Better error messages and handling for unsupported commands or invalid inputs.
- **Job control**: Adding features like background jobs (`&`), job listing (`jobs`), and job management (`fg`, `bg`).

## Future Development
- **Command Aliases**: Support for defining custom command aliases for easier usage.
- **Redirection**: Implement input/output redirection using `>` and `<`.
- **Environment Variables**: Handling environment variables such as `PATH` and `HOME`.
- **Job Control**: Support for background jobs and managing multiple processes.
- **Script execution**: Allow running shell scripts by passing a script file to the shell.
- **Interactive shell features**: Features like auto-completion, improved command history navigation, and more.

## Contributing

1. Fork this repository.
2. Create your feature branch (`git checkout -b feature-name`).
3. Commit your changes (`git commit -am 'Add new feature'`).
4. Push to the branch (`git push origin feature-name`).
5. Open a Pull Request.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
