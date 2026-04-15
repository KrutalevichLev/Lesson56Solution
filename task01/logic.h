#include <iostream>
#include <string>
#define DEFAULT_SIZE 100

using namespace std;

int sum_main_elements(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n);

int sum_additional_elements(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n);

int sum_inside_elements(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n);

int sum_external_elements(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n);