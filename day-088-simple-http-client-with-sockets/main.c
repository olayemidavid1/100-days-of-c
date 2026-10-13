/*
 * Day 88/100: Simple HTTP client with sockets
 * Phase: Systems and parsing
 *
 * Build: gcc -Wall -Wextra -o main main.c
 * Run:   ./main
 *
 * YOU WILL PRACTISE: DNS lookup, TCP client, HTTP basics
 *
 * STEPS:
 *   1. getaddrinfo(host, "80", &hints, &res) with hints.ai_socktype = SOCK_STREAM
 *   2. socket + connect, then send "GET / HTTP/1.0\r\nHost: example.com\r\n\r\n"
 *   3. Read until 0 bytes and print the response (use HTTP only, not HTTPS)
 *   4. Take the host from argv
 *
 * STRETCH GOAL: Separate headers from the body and print the status code
 */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netdb.h>

int main(int argc, char *argv[]) {
    (void)argc; (void)argv;  // remove these once you use them
    // TODO: write your code here, following the steps above
    return 0;
}
