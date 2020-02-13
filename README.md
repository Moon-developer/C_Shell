# C_Shell
Poject to create a full functioning shell from scratch in c programming using a norm standard of 5 functions max per file in which each function is allowed a max of 25 line and 80 coloumns. The shell must have all the functionality of a full shell like bash/sh/zsh with extra functionality of my own. This was a one month project in built in C.

### Installing

To install and run this shell run the following

```
git clone https://github.com/Moondog360/C_Shell.git
cd C_Shell
make
./42sh
```

### Functionality
The shell should be able to run everything a normal shell can run from echo to redirects, piping and even vim.

### TODO
The history history functionality needs to be tweaked to fix the clearing when scrolling thru previus commands. The way it's set out now is it will clear x amount of characters before showing the previous commands. This can cause problems depending on the size of the terminal. at 80 coloumns it works well, at less it will print newlines often when scrolling when more than 80 with will "delete" lines and move the cursor up.

Another Feauture that needs to be added is the moving cursor. Reason for disabling it is a memory leak of 2 bytes that needs to be fixed first.
