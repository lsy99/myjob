#include"my.h"
int glob=6; 

int main()  

{

  int var;

  pid_t pid;

  var=88;

  printf("before vfork\n");

  if((pid=fork())<0){

    perror("create failure");

  }else if(pid==0){

    glob++;

    var++;

  }else{

   sleep(2);

  }

  printf("pid=%d,glob=%d,var=%d\n",getpid(),glob,var); 

    return 0;  

} 
