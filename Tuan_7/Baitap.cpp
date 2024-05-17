#include<bits/stdc++.h>
using namespace std;
int strlen(const char* str) {
    int length = 0;
    while (*str++) {
        length++;
    }
    return length;
}

void reverse(char a[]) {
    int len = strlen(a);
    for (int i = 0; i < len / 2; ++i) {
        char temp = a[i];
        a[i] = a[len - i - 1];
        a[len - i - 1] = temp;
    }
}

void don_phai(char a[], int n) {
    int len = strlen(a);
    if (len >= n) return;
    while (len < n) {
        a[len++] = ' ';
    }
    a[len] = '\0';
}

void dontrai(char a[], int n) {
    int len = strlen(a);
    if (len >= n) return;
    int diff = n - len;
    for (int i = len; i >= 0; --i) {
        a[i + diff] = a[i];
    }
    for (int i = 0; i < diff; ++i) {
        a[i] = ' ';
    }
}

void cat(char a[], int n) {
    if (strlen(a) > n) {
        a[n] = '\0';
    }
}

bool doi_xung(const char a[]) {
    int len = strlen(a);
    for (int i = 0; i < len / 2; ++i) {
        if (a[i] != a[len - i - 1]) {
            return false;
        }
    }
    return true;
}

oid loc_trai(char a[]) {
    int len = strlen(a);
    int index = 0;
    while (a[index] == ' ') {
        index++;
    }
    for (int i = 0; i < len - index; ++i) {
        a[i] = a[i + index];
    }
    a[len - index] = '\0';
}


void loc_phai(char a[]) {
    int len = strlen(a);
    while (len > 0 && a[len - 1] == ' ') {
        len--;
    }
    a[len] = '\0';
}

void xoa_ky_tu(char a[], char c) {
    char* src = a;
    char* dest = a;
    while (*src) {
        if (*src != c) {
            *dest++ = *src;
        }
        src++;
    }
    *dest = '\0';
}

int main(){
	return 0; 
}
