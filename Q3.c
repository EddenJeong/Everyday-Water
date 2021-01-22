#include <cs50.h>
#include <string.h>
#include <stdio.h>

int main(void)
{

    string s=get_string("s: ");

    if(!strcmp(s, "월요일")){
        printf("청국장\n");
    }
    else if(!strcmp(s, "화요일")){
        printf("비빔밥\n");
    }
}


