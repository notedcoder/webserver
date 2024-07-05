#include "proxy_parse.h"
#include<stdio.h>
#include<string.h>
#include<time.h>

struct cahce_element
{
    char* data;
    int len;
    char* url;
    time_t lru_time_track;
     
};

