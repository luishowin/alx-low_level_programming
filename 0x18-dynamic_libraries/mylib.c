#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * 
 *int _putchar - putchar
 *int _islower - is lower
 *int _isalpha - is alpha
 *int _abs - abs
 *int _isupper - is upper
 *int _isdigit - is digit
 *int _strlen - string length
 *void _puts - puts
 *char *_strcpy - string copy
 *int _atoi - atoi
 *char *_strcat - string cat
 *char *_strncat - string cat
 *char *_strncpy =string copy
 *int _strcmp - string cmp
 *char *_memset - memory set
 *char *_memcpy - memory copy
 *char *_strchr - string chr
 *unsigned int _strspn - integer 
 *char *_strpbrk - string pbrk
 *char *_strstr - string store
 */

int _putchar(char c){
    return write(1, &c, 1);
}

int _islower(int c){
    return (c >= 'a' && c <= 'z');
}

int _isalpha(int c){
    return ((_islower(c) || (c >= 'A' && c <= 'Z')));
}

int _abs(int n){
    return (n < 0) ? -n : n;
}

int _isupper(int c){
    return (c >= 'A' && c <= 'Z');
}

int _isdigit(int c){
    return (c >= '0' && c <= '9');
}

int _strlen(char *s){
    int count = 0;
    while (*s != '\0') {
        count++;
        s++;
    }
    return count;
}

void _puts(char *s){
    while (*s != '\0') {
        _putchar(*s);
        s++;
    }
    _putchar('\n');
}

char *_strcpy(char *dest, char *src){
    char *start = dest;
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0'; // Don't forget to add the null terminator
    return start;
}

int _atoi(char *s){
    int result = 0;
    int sign = 1;

    while (*s == ' ' || (*s >= '\t' && *s <= '\r')) {
        s++;
    }

    if (*s == '-' || *s == '+') {
        sign = (*s == '-') ? -1 : 1;
        s++;
    }

    while (*s >= '0' && *s <= '9') {
        result = result * 10 + (*s - '0');
        s++;
    }

    return sign * result;
}

char *_strcat(char *dest, char *src){
    char *start = dest;
    while (*dest != '\0') {
        dest++;
    }
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0'; // Don't forget to add the null terminator
    return start;
}

char *_strncat(char *dest, char *src, int n){
    char *start = dest;
    while (*dest != '\0') {
        dest++;
    }
    while (*src != '\0' && n > 0) {
        *dest = *src;
        dest++;
        src++;
        n--;
    }
    *dest = '\0'; // Don't forget to add the null terminator
    return start;
}

char *_strncpy(char *dest, char *src, int n){
    char *start = dest;
    while (*src != '\0' && n > 0) {
        *dest = *src;
        dest++;
        src++;
        n--;
    }
    while (n > 0) {
        *dest = '\0'; // Pad with null characters if necessary
        dest++;
        n--;
    }
    return start;
}

int _strcmp(char *s1, char *s2){
    while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2) {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}

char *_memset(char *s, char b, unsigned int n){
    char *start = s;
    while (n > 0) {
        *s = b;
        s++;
        n--;
    }
    return start;
}

char *_memcpy(char *dest, char *src, unsigned int n){
    char *start = dest;
    while (n > 0) {
        *dest = *src;
        dest++;
        src++;
        n--;
    }
    return start;
}

char *_strchr(char *s, char c){
    while (*s != '\0') {
        if (*s == c) {
            return s;
        }
        s++;
    }
    return NULL;
}

unsigned int _strspn(char *s, char *accept){
    unsigned int count = 0;
    while (*s != '\0' && *accept != '\0' && *s == *accept) {
        count++;
        s++;
        accept++;
    }
    return count;
}

char *_strpbrk(char *s, char *accept){
    while (*s != '\0') {
        char *current = accept;
        while (*current != '\0') {
            if (*s == *current) {
                return s;
            }
            current++;
        }
        s++;
    }
    return NULL;
}

char *_strstr(char *haystack, char *needle){
    while (*haystack != '\0') {
        char *h = haystack;
        char *n = needle;
        while (*n != '\0' && *h == *n) {
            h++;
            n++;
        }
        if (*n == '\0') {
            return haystack; // Found a match
        }
        haystack++;
    }
    return NULL;
}
