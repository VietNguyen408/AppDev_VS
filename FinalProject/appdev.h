#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<curl/curl.h>
#include<stdio.h>
#include<stdlib.h>

#define N 20
//modified from Github
typedef struct {
	int max;
	int min;
	char rname[N];
}rock;

//this is for function prototypes
void send_data(rock);
