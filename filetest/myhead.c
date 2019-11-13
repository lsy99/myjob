#include "myheader.h"
int menu(){
    int a; 
	while(1)
{
	printf("********************************\n");
	printf("0.退出\n");
	printf("1.创建新文件\n");
	printf("2.写文件\n");
    printf("3.读文件\n");
    printf("4.修改文件权限\n");
    printf("5.查看当前文件的权限修改文件\n");
	printf("********************************\n");
	printf("Please input your choice(0-6):");
	scanf("%d",&a);
    switch (a){
        case 0:exit(0);
        case 1:createfile_1();
				break;
        case 2:writefile_1();
				break;
        case 3:readfile_1();
				break;
        case 4:printf("修改文件权限\n");
				break;
        case 5:printf("查看当前文件的权限修改文件权限\n");
				break;
        default:printf("choose error\n");
				break;
    };  
}
}
int createfile_1(){
FILE *fp;
char ch,filename[10];
 printf("请输入要创建的文件的名字:");
 scanf("%s",filename);
fp = fopen(filename,"wt");

}

int writefile_1(){
FILE *fp;
 char ch,filename[10];
 printf("请输入要编辑的文件的名字:");
 scanf("%s",filename);
 if((fp=fopen(filename,"w"))==NULL)
 {
 printf("open file\n");
 exit(0);
 }
 ch=getchar();
 printf("请输入字符(以#结束):");
 ch=getchar();
 while(ch!='#')
 {
 fputc(ch,fp);
 putchar(ch);
 ch=getchar();
 }

 fclose(fp);
 putchar(ch);
printf("\n");

}

int readfile_1(){
char buf[MAX_LINE];      /*缓冲区*/
     FILE *fp;            /*文件指针*/
     int len;             /*行字符个数*/
	 char filename[10];
	 printf("请输入您要读取的文件名:");	
	 scanf("%s",filename);
     if((fp = fopen(filename,"r")) == NULL)
     {
     perror("fail to read");
     exit (1) ;
     }
     while(fgets(buf,MAX_LINE,fp) != NULL)
     {
     len = strlen(buf);
     buf[len-1] = '\0';  /*去掉换行符*/
     printf("%s\n",buf);
     }
}
