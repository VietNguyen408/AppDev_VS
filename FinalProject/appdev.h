#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<curl/curl.h>
#include<stdio.h>
#include<stdlib.h>

#define N 20
//Let's see how conflict solved
typedef struct {
	int max;
	int min;
	char rname[N];
}rock;

void send_data(rock);