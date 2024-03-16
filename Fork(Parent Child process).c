#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
int main() 
{ 
    /* fork a process */
    fork(); 
    /* the child and parent will execute every line of code after the fork (each separately)*/
    printf("Hello world!\n"); 
    return 0; 
} 

//OR
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
//main function begins
int main(){
    pid_t p= fork(); //calling of fork system call
    int x=3; 
    if(p==0)
        printf("In the child, the value of x is %d\n", ++x);
    else
        printf("In the parent, the value of x is %d\n", - - x);
    return 0;
}
