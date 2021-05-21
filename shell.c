#include<stdio.h>
#include<string.h>
void show_prompt()
{
    printf("$");
}
int valid_command(char s[])
{
    return !strcmp(s,"cd");
}
int main(int argc, char const *argv[])
{
    char s[100];
    do
    {
        //show prompt
        show_prompt();
        //read command
        fgets(s,1000,stdin);
        s[strlen(s)-1]='\0';
        // tell if it is valid or not
        if(valid_command(s))
            printf("valid\n");
        else
        {
            printf("shell: %s: command not found\n",s);
            exit(0);
        }
    } while (s[0]!='\n');
    return 0;
}