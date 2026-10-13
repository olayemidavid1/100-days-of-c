/*
 * Day 87/100: TCP echo server
 * Phase: Systems and parsing
 *
 * Build: gcc -Wall -Wextra -o main main.c
 * Run:   ./main
 *
 * YOU WILL PRACTISE: sockets, TCP server basics
 *
 * STEPS:
 *   1. fd = socket(AF_INET, SOCK_STREAM, 0); fill struct sockaddr_in with port 8080 (htons)
 *   2. bind, listen, then client = accept(fd, NULL, NULL)
 *   3. Loop: n = read(client, buf, sizeof buf); write(client, buf, n); stop when n <= 0
 *   4. Test in another terminal: nc localhost 8080
 *
 * STRETCH GOAL: Handle more than one client using fork() per connection
 */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

int main(void) {
    // TODO: write your code here, following the steps above
    return 0;
}
