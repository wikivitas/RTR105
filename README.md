# RTR105

# Datormācība (pamatkurss) elektroniskā klade

## Saturs
[1}: https://github.com/wikivitas/RTR105#rtr105
[16.09.2020](https://github.com/wikivitas/RTR105#16092020) - Īsinājumtaustiņi. Linux termināla bash pamatkomandas.</br>
[23.09.2020](https://github.com/wikivitas/RTR105#23092020) - Nano teksta procesors. Skriptu rakstīšana.</br>
[28.09.2020](https://github.com/wikivitas/RTR105#28092020) - Git komandas. C valodas pamati.</br>
[30.09.2020](https://github.com/wikivitas/RTR105#30092020) - ASCII. Skaitļošanas sistēmas.</br>
[07.10.2020](https://github.com/wikivitas/RTR105#07102020) - Datu tipi, manīgie, konstantes.</br>

## 16.09.2020

### **Linux īsinājumtaustiņi**
[Uz burtnīcas sākumu][1]

| Key shortcut | Description |
| :---: | :--- |
| **Ctrl + Alt + T** | *to run* to **the terminal** |
| **Alt + F2** | *to go* to **the terminal** |
| **Ctrl + Alt + L** | **to lock** the screen |
| **Ctrl + Alt + D** | to show **the desktop** |
| **Win + Tab** or **Alt + Tab** | **switching** between running processes |
| **Win + A** | to show **the application menu** |
| **Win + D** | to **hide/return** all windows |
| **Win + ↑** | to show application window **in full screen** |
| **Win + ↓** | **to reduce** window |
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

### **Linux termināla bash pamatkomandas**

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
- `rm -Rf *<path name>*` - to delete all the directory and its files
- `whereis <command name>` - to display a message about the location of the source files
- `chmod <attributes> <file name>` - to edit a permission attached to the exist file

## 23.09.2020

### **Nano teksta procesors. Bash skriptu rakstīšana**

GNU nano 2.9.7 teksta procesora interfeisa skrinšots:

![image](https://www.tecmint.com/wp-content/uploads/2018/10/Create-New-File.png)

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
$ chmod +x test.sh
./test.sh
What is your name?
Zara Ali
Hello, Zara Ali
$
```


**Environmental variables**

- `$PATH` - is an environmental variable ithat tells the shell which directories to search for executable files in response to commands issued by a user.

[All the Unix / Linux special variables](https://www.tutorialspoint.com/unix/unix-special-variables.htm)

## 28.09.2020

### **Git komandas**

- `git clone <URL>` - to copy files from the GitHub repository
- `git add <filename>` - to start tracking a new file
- `git commit -m  <text>` - create a commit comment
- `git config --global user.name <login>` - to give name of git user who is globaly scoped
- `git config --global user.email "example@email.com"` - to give email of git user who is globaly scoped
- `git push origin master` - to push commit to the remote repository.

### **C valodas pamati**

Kods, lai izvadītu rindu "Hello World!" uz ekrāna:
```
#include<stdio.h>

int main()
 {
 //to print "Hello World!" and go to the next string
 printf("Hello World\n");
 
 return 0; 
}
```

## 30.09.2020

### **ASCII. Skaitļošanas sistēmas**

```
10 VS OX10
0xF == 1111
0xFF == 1111 1111
0xFF - aizņem 1 baitu - divu ciparu hex skaitlis aizņem 1 baitu
	attiecīgi	F			F
			1111			1111
			vecākais pusbaits	jaunākais pusbaits

dec to bin:
	123 (dec)	? (bin)
	base: 10	base:  2
123: 2 (base number) = 61 (1)	^
61: 2 = 30 (1)			|
30: 2 = 15 (0)			|
15: 2 = 7 (1)			|
7: 2 = 3 (1)			|
3: 2 = 1(1)			|
1: 2 = 0 (1) STOP		^
-------------------------------------
	123 (dec) =	1111011 (bin)
	123 (dec) =	0111 1011 (bin)

bin to dec:
	0111 1011 (bin) = 2^6 + 2^5 + 2^4 + 2^3 + 2^1 + 2^0 = 64 + 32 + 16 + 8 + 2 + 1 = 123 (dec)
jāpeiskaita 2-nieka pakāpes, sakot no LSB

dec to hex:
	123 (dec)	? (hex)
	base: 10	base: 16
123 : 16 (base number) = 7 (11)
7 : 16 = 0 (7)
------------------------------------
	123 (dec) =	7B (hex)
	123 (dec) ==	0x7B (hex)

	11 (dec) = B (hex)

hex to dec:
	7B (hex)	? (dec)
0x7B = 11*16^0 + 7*16^1 = 11 + 70 + 42 = 123
	7B (hex) = 123 (dec)

dec to oct
oct to dec
========================================================

hex to bin:
0xAF01 -> 1010 1111 0000 0001
katrs hex cipars tiek aizstāts ar četru bitiem

bin to hex:
01010111010010100100 (bin)
0101 0111 0100 1010 0100 (bin) -> 5 74 A4(hex) vai 0x574A4

oct to bin:
157 (oct) -> 0001 101 111
katrs oct cipars tiek aizstāts ar trīm bitiem

bin to oct:
10101111001 (bin)
010 101 111 001 (bin) -> 2571 (oct)
```

### **Iepazīšana ar C++ valodu**
[iepazīšana ar C++ valodas pamatiem](http://cplusplus.com/)

"Hello World!" izvadīšana:

```
// my first program in C++
#include <iostream>

int main()
{
  std::cout << "Hello World!";
}
```

Kods, lai saskaitītu 2 skaitļus:

```
int a, b, sum;

int main(){     
	cin >> a;
	cin >> b;
             
	sum = a + b;
	cout << sum << endl;
}
```

## 07.10.2020
### Datu tipi, manīgie, konstantes.

[101]: https://latex.codecogs.com/gif.latex?-1
[64]: https://latex.codecogs.com/svg.latex?2^{64}
[63]: https://latex.codecogs.com/svg.latex?2^{63}
[32]: https://latex.codecogs.com/svg.latex?2^{32}
[31]: https://latex.codecogs.com/svg.latex?2^{31}
[16]: https://latex.codecogs.com/svg.latex?2^{16}
[15]: https://latex.codecogs.com/svg.latex?2^{16}
[7]: https://latex.codecogs.com/gif.latex?2%5E7
[8]: https://latex.codecogs.com/gif.latex?2%5E8
[0]: https://latex.codecogs.com/gif.latex?2%5E0%20-%201

| **Type** | **Storage size** | **Value range** |
| :---: | :--- | :--- |
|`char`|	1 byte | - ![image][7] to (![image][7] ![image][101]) *or* ![image][0] to (![image][8] ![image][101]) |
|`unsigned char`|	1 byte |	![image][0] to (![image][8] ![image][101]) |
|`signed char`|	1 byte |	- ![image][7] to (![image][7] ![image][101])  |
|`int`|	2 or 4 bytes |	-![image][15] to (![image][15] ![image][101]) or -![image][31] to (![image][31] ![image][101]) |
|`unsigned int`|	2 or 4 bytes |	![image][0] to (![image][16] ![image][101]) or ![image][0] to ![image][32] ![image][101]) |
|`short`|	2 bytes	| -![image][15] to (![image][15] ![image][101]) |
|`unsigned short`| 2 bytes |	![image][0] to (![image][16] ![image][101]) |
|`long`|	8 bytes |	-![image][63] to (![image][63] ![image][101]) |
|`unsigned long`|	8 bytes |	![image][0] to (![image][64] ![image][101]) |

To get the exact size of a type or a variable on a particular platform, you can use the sizeof operator. The expressions sizeof(type) yields the storage size of the object or type in bytes. Given below is an example to get the size of various type on a machine using different constant defined in limits.h header file −

```
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(int argc, char** argv) {

    printf("CHAR_BIT    :   %d\n", CHAR_BIT);
    printf("CHAR_MAX    :   %d\n", CHAR_MAX);
    printf("CHAR_MIN    :   %d\n", CHAR_MIN);
    printf("INT_MAX     :   %d\n", INT_MAX);
    printf("INT_MIN     :   %d\n", INT_MIN);
    printf("LONG_MAX    :   %ld\n", (long) LONG_MAX);
    printf("LONG_MIN    :   %ld\n", (long) LONG_MIN);
    printf("SCHAR_MAX   :   %d\n", SCHAR_MAX);
    printf("SCHAR_MIN   :   %d\n", SCHAR_MIN);
    printf("SHRT_MAX    :   %d\n", SHRT_MAX);
    printf("SHRT_MIN    :   %d\n", SHRT_MIN);
    printf("UCHAR_MAX   :   %d\n", UCHAR_MAX);
    printf("UINT_MAX    :   %u\n", (unsigned int) UINT_MAX);
    printf("ULONG_MAX   :   %lu\n", (unsigned long) ULONG_MAX);
    printf("USHRT_MAX   :   %d\n", (unsigned short) USHRT_MAX);

    return 0;
}
```

When you compile and execute the above program, it produces the following result on Linux −

```
CHAR_BIT    :   8
CHAR_MAX    :   127
CHAR_MIN    :   -128
INT_MAX     :   2147483647
INT_MIN     :   -2147483648
LONG_MAX    :   9223372036854775807
LONG_MIN    :   -9223372036854775808
SCHAR_MAX   :   127
SCHAR_MIN   :   -128
SHRT_MAX    :   32767
SHRT_MIN    :   -32768
UCHAR_MAX   :   255
UINT_MAX    :   4294967295
ULONG_MAX   :   18446744073709551615
USHRT_MAX   :   65535
```

| Type | Storage size |	Value range |	Precision |
| :---: | :--- | :--- | :--- |
| float | 4 byte | 1.2E-38 to 3.4E+38 | 6 decimal places |
| double | 8 byte | 2.3E-308 to 1.7E+308 | 15 decimal places |
| long double | 10 byte | 3.4E-4932 to 1.1E+4932 | 19 decimal places |

The header file float.h defines macros that allow you to use these values and other details about the binary representation of real numbers in your programs. The following example prints the storage space taken by a float type and its range values −

```
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(int argc, char** argv) {

    printf("Storage size for float : %d \n", sizeof(float));
    printf("FLT_MAX     :   %g\n", (float) FLT_MAX);
    printf("FLT_MIN     :   %g\n", (float) FLT_MIN);
    printf("-FLT_MAX    :   %g\n", (float) -FLT_MAX);
    printf("-FLT_MIN    :   %g\n", (float) -FLT_MIN);
    printf("DBL_MAX     :   %g\n", (double) DBL_MAX);
    printf("DBL_MIN     :   %g\n", (double) DBL_MIN);
    printf("-DBL_MAX     :  %g\n", (double) -DBL_MAX);
    printf("Precision value: %d\n", FLT_DIG );

    return 0;
}
```

When you compile and execute the above program, it produces the following result on Linux −

```
Storage size for float : 4 
FLT_MAX      :   3.40282e+38
FLT_MIN      :   1.17549e-38
-FLT_MAX     :   -3.40282e+38
-FLT_MIN     :   -1.17549e-38
DBL_MAX      :   1.79769e+308
DBL_MIN      :   2.22507e-308
-DBL_MAX     :  -1.79769e+308
Precision value: 6
```

[source of the tutorial about C variable types](https://www.tutorialspoint.com/cprogramming/c_data_types.htm)
