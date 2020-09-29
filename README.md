# RTR105

# Datormācība (pamatkurss) elektroniskā klade

## 16.09.2020

### **Linux īsinājumtaustiņi**

| Key shortcut | Description |
| :---: | :--- |
| **Ctrl + Alt + T** | *to run* to **the terminal** |
| **Alt + F2** | *to go* to **the terminal** |
| **Ctrl + Alt + L** | **to lock** the screen |
| **Ctrl + Alt + D** | to show **the desktop** |
| **Win + Tab** or **Alt + Tab** | **switching** between running processes |
| **Win + A** | to show **the application menu** |
| **Win + _arrow_** | to translate the application window to half of the window corresponding to the direction of the arrow pressed in the key combination |
| **Win + Space** | to change **the enter language** |
| **Ctrl + Q** | **to close** the application window |

### **Linux termināla īsinājumtaustiņi**

| Key shortcut | Description |
| :---: | :--- |
| 2x **TAB** | to find commands with similar names |
| **Q** | to exit command description |
| **Ctrl + L** | to clear the terminal |
| **Ctrl + Shift + T** | to create a new terminal tab |
| **Ctrl + Shift + _+_** | to zoom in |
| **Ctrl + _-_** | to zoom out |

### **Linux termināla pamatkomandas**

**General commands**

- `sudo <command name>`     - execute command as superuser
- `uname`     - to display information about the operating system
- `whoami`    - to find out the type of user
- `who`       - to find out authorization data of the current user
- `man <command name>` - to find out the command properties
- `history`   - to review the commands entered before
- `sh`        - is a command language interpreter that executes commands read from a command line string, the standard input, or a specified file.

**Working with directories**

- `../` or `~/` - the high part of the directory as part of the relative path
- `pwd`       - to return an absolute (full) path
- `cd <path name>`   - to print a name of the current directory
- `cd ..`     - to move one directory up
- `cd ~` or `cd /` or `cd`      - to move to the home directory
- `ls`        - to view list of the contents of a directory
- `ls -l`     - to view list of the contents of the catalog with additional information
- `ls -a`     - to view list of all the contents of a directory including hide files
- `ls -la`    - to view the contents of the catalog with additional information
- `ls -lt`    - to view the contents of the catalog with change data
- `mkdir <directory name>`     - to create a directory
- `rmdir <directory name>`     - to delete a directory

**Working with files**

- `touch <file name>`          - to create a file
- `echo <string> > <file name>`     - to add a string to the exist file
- `echo <string> >> <file name>`     - to write a new string to the exist file
- `cat <file name>`   - to show a content of the file
- `hexdump -C <file name>`   - to show a content of the file by hexidecimal system
- `mv <current file name> <new file name>` - to rename the exist file
- `cp <current file directory> <new file directory>` - to copy the file
- `rm <file name>`  - to delete the exist file
- `rm *<path name>*` - to delete the file group
- `whereis <command name>` - to display a message about the location of the source files

## 23.09.2020

### **Nano teksta procesors. Skriptu rakstīšana**

GNU nano 2.9.7 teksta procesora interfeisa skrinšots:

![image](https://www.tecmint.com/wp-content/uploads/2018/10/Create-New-File.png)
[URL of the image](https://www.tecmint.com/wp-content/uploads/2018/10/Create-New-File.png)

Lai izveidotu failu un pievienotu tekstu tai, vai izmainītu esošo faila teksta saturu, jāizmanto `nano` komandu:

- `nano`  - to open GNU Nano editor and work with text in a temple file which could be saved as new file by filename
- `nano <filename>`  - to attach name to the temple file and open it with GNU Nano editor, or open the exist file with GNU Nano editor

Bash skripta piemērs:
```
#!/bin/bash 

:<<The first string of 
the script isn't a comment
It's a path of shell which 
will be using here

mkdir EFG               # to create EFG directory
mkdir HIJ               # to create HIJ directory
echo fghij > e.txt      # to add string 'fghij' at e.txt
cat e.txt > EFG/f.txt   # to write e.txt file content to EFG/f.txt
mv EFG/f.txt HIJ/g.txt  # to rename EFG/f.txt into HIJ/g.txt
cd HIJ                  # go to HIJ path
rm ../EFG/f.txt         # delete file f.txt existing at EFG directory
```

Šis skripts izmanto komandu read, kas ņem ievadi no tastatūras un piešķir to kā mainīgā PERSON vērtību un visbeidzot izdrukā to STDOUT.

```
#!/bin/sh

# Author : Zara Ali
# Copyright (c) Tutorialspoint.com
# Script follows here:

echo "What is your name?"
read PERSON
echo "Hello, $PERSON"
Here is a sample run of the script −
```

Running a script:

```
$./test.sh
What is your name?
Zara Ali
Hello, Zara Ali
$
```


**Environmental variables**

- `$PATH` - is an environmental variable ithat tells the shell which directories to search for executable files in response to commands issued by a user.

[All the Unix / Linux special variables](https://www.tutorialspoint.com/unix/unix-special-variables.htm)

## 28.08.2020

### **Git komandas**

- `git clone <URL>` - to copy files from the GitHub repository
- `git add <filename>` - to start tracking a new file
- `git commit -m  <text>` - create a commit comment
- `git config --global user.name <login>` - to give name of git user who is globaly scoped
- `git config --global user.email "example@email.com"` - to give email of git user who is globaly scoped
- `git push origin master` - to push commit to the remote repository.

### **C valodas pamati**
