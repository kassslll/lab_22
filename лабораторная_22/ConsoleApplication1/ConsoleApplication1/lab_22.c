#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

void task_1();
void task_2();
void task_3();
void task_4();
void task_5();
void task_6();
void task_7();
int strlen1(char*);
int toupperALL(int);
int strcmp1(char* , char*);
void strcpy1(char*, char*);
void strcat1(char*, char*);
void myFunction(char*);

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char arr1[] = "12*34//5-67+890";
	myFunction(arr1);
	printf("len = %s", arr1);
}

void task_1() {

	char name[12];
	printf("Input your name: ");
	fgets(name, 11, stdin);
	printf("Hello, %s\n", name);

	{
		int x;
		scanf_s("%d", &x);
	}
}

void task_2() {

	printf("Input char = ");
	int ch = getchar();

	for (int c = ch; c <= ch + 19; c++) {
		printf("'%c' (%d)\n", c, c);
	}

	printf("\n\n\n");

	{
		int x;
		scanf_s("%d", &x);
	}
}

void task_3() {

	printf("Input char = ");
	int ch = getchar();

	for (int c = ch; c >= ch - 29; c--) {
		printf("'%c' (%d)\n", c, c);
	}

	printf("\n\n\n");

	{
		int x;
		scanf_s("%d", &x);
	}
}

void task_4() {

	char s[80];
	printf("Input string : ");
	fgets(s, 79, stdin);

	printf("\nYou've etered string s = %s", s);
	
	int cnt = 0;
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == ' ') cnt++;
	}

	printf("\nThere are %d spaces in line\n", cnt);

	{
		int x;
		scanf_s("%d", &x);
	}
}

void task_5() {

	char s[80];
	printf("Input string : ");
	fgets(s, 79, stdin);

	printf("\nYou've etered string s = %s", s);

	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == ' ') {
			s[i] = '#';
		}
	}

	printf("\nThe line after = %s", s);

	{
		int x;
		scanf_s("%d", &x);
	}
}

void task_6() {

	char s[80];
	printf("Input string : ");
	fgets(s, 79, stdin);

	printf("\nYou've etered string s = %s", s);

	for (int i = 0; i < strlen(s); i++) {
		if (isdigit(s[i])) {
			s[i] = '$';
		}
	}

	printf("\nThe line after = %s", s);

	{
		int x;
		scanf_s("%d", &x);
	}
}

void task_7() {

	char s[80];
	printf("Input string : ");
	fgets(s, 79, stdin);

	printf("\nYou've etered string s = %s", s);

	for (int i = 0; i < strlen(s); i++) {
		s[i] = toupperALL(s[i]);
	}

	printf("\nThe line after = %s", s);

	{
		int x;
		scanf_s("%d", &x);
	}
}

int toupperALL(int c) {
	int new_c = c;
	if (c >= 'a' && c <= 'z') {
		new_c = 'A' + (c - 'a');
	}
	if (c >= 'а' && c <= 'п') {
		new_c = 'А' + (c - 'а');
	}
	if (c >= 'р' && c <= 'я') {
		new_c = 'Р' + (c - 'р');
	}
	if (c == 'ё') {
		new_c = 'Ё';
	}
	return new_c;
}

int strlen1(char* arr) {
	int i = 0;
	for (; arr[i] != '\0'; i++) {}
	return i;
}

int strcmp1(char* arr1, char* arr2) {
	int i = 0;
	while (arr1[i] != 0 && arr2[i] != 0 && arr1[i] == arr2[i]) {
		i++;
	}
	return arr1[i] - arr2[i];
}

void strcpy1(char* arr1, char* arr2) {
	for (int i = 0; i < strlen(arr1); i++) {
		arr1[i] = arr2[i];
	}
}

void strcat1(char* arr1, char* arr2) {
	int len = strlen(arr1);
	for (int i = 0; i < strlen(arr2); i++) {
		arr1[i + len] = arr2[i];
	}
}

void myFunction(char* arr) {
	printf("10 Вариант\n");
	for (int i = 0; i < strlen(arr); i++) {
		if (arr[i] == '+' || arr[i] == '-' || arr[i] == '*' || arr[i] == '/') {
			arr[i] = '_';
		}
	}
}