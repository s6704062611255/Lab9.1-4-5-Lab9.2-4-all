#include <stdio.h>
#include<ctype.h>
int checkLogin(char *login, char *passwd);
// accepted only if Length = 5 and a number 1 or more digits
int checkValidPass(char *ps);
int StringLen(char *ps);
int checkRule4_1(char *ps);
int checkRule4_2(char *ps);
int checkRule4_3(char *ps);
int main(){
    char login[64], password[64];
    printf("Enter login : ");
    gets(login);
    printf("Enter password : ");
    gets(password);
    
    
    if (checkLogin(login, password) == 1){
        printf("Welcome\n");
    }
    else{
        printf("Incorrect login or password\n");
    }

    /*if (checkValidPass(password)){
        // if Password is valid
        printf("Accepted\n");
    }
    else{
        printf("Reject\n");
    } */
}
int checkValidPass(char *ps)
{
    int accepted = 0;
    


    return accepted;
}
int checkLogin(char *login, char *passwd)
{
    if (!strcmp(login, "student1") && !strcmp(passwd, "mypass"))
        return 1;
    else
        return 0;
}

int StringLen(char *ps){
    int len = 0;
    while (*ps != '\0')
    {
        len++;
        ps++;
    }
    return len;
}

//4.1 Length = 5 and a number 1 or more digits 
int checkRule4_1(char *ps)
{
    int len = StringLen(ps), digit = 0;
    for(int i=0 ;i<len;i++){
        if(ps[i] >= '0'&& ps[i] <= '9'){
            digit++;
        }
    }
    if(len == 5 && digit >=1){
        return 1;
    }
    return 0 ; 
}

// 4.2 Length 5-8  The first Char not a number and 2 Uppercase or more and 2 digit or more
int checkRule4_2(char *ps){
    int len = StringLen(ps), digit = 0, upper = 0, first_is_number = 0;
    if (ps[0] >= '0' && ps[0] <= '9'){
        first_is_number = 1;
    }

    for (int i = 0; i < len; i++){
        if (ps[i] >= '0' && ps[i] <= '9'){
            digit++;
        }
        if (isupper(ps[i])){
            upper++;
        }
    }

    if (len >= 5 &&len <= 8 && first_is_number == 0 && upper >=2 && digit>=2){
        return 1 ;
    }
    return 0;
}

int checkRule4_3(char *ps){

}
