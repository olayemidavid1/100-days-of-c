/*
 * Day 89/100: Chat server and client
 * Phase: Systems and parsing
 *
 * Build: gcc -Wall -Wextra -o main main.c
 * Run:   ./main
 *
 * YOU WILL PRACTISE: poll(), multiple clients, protocols
 *
 * STEPS:
 *   1. Server: array of client fds. Use poll() to watch the listening socket and every client
 *   2. New connection: add to the array. Data from a client: write it to all the other clients
 *   3. Client: poll on stdin and the socket so you can send and receive at the same time
 *   4. Start with 2 clients, then more
 *
 * STRETCH GOAL: Add nicknames and a /quit command
 */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <poll.h>

int main(void) {
    // TODO: write your code here, following the steps above
    return 0;
}
