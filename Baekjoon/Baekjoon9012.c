/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int n; scanf("%d", &n);
	char s[50];
	for (int i = 0; i < n; i++) {
		scanf("%s", s);
		int top = -1;
		int len = strlen(s);
		int valid = 1;
		for (int i = 0; i < len; i++) {
			if (s[i] == '(') {
				top++;
			}
			else {
				if (top == -1) {
					valid = 0; break;
				}
				top--;
			}
		}
		if (top != -1) valid = 0;
		if (valid) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}*/