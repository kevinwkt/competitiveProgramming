#define ALL(x) x.begin(), x.end()

#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

struct date{
    int day;
    int month;
    int year;};

bool compareDays(const date &a, const date &b) {return a.day < b.day;}

bool compareMonths(const date &a, const date &b) {return a.month < b.month;}

bool compareYears(const date &a, const date &b) {return a.year < b.year;}

int main() {
    int n;
    scanf("%d",&n);
    vector<date> arr(n);
    for(int i=0;i<n;i++) scanf("%d %d %d",&arr[i].day, &arr[i].month, &arr[i].year);
    sort(ALL(arr),compareDays);
    for (int i = 0; i < n; i++) printf("%d %d %d\n",arr[i].day, arr[i].month, arr[i].year);
    printf("\n");
    sort(ALL(arr),compareMonths);
    for (int i = 0; i < n; i++) printf("%d %d %d\n",arr[i].day, arr[i].month, arr[i].year);
    printf("\n");
    sort(ALL(arr),compareYears);
    for (int i = 0; i < n; i++) printf("%d %d %d\n",arr[i].day, arr[i].month, arr[i].year);
}
