//
// Created by panlong on 2018/6/19.
//
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(void)
{
    char buf[5];
    FILE *myfile = stdin;
    printf("before reading\n");
    printf("read buffer base %p\n", myfile->_IO_read_base);
    printf("read buffer length %d\n", myfile->_IO_read_end - myfile->_IO_read_base);
    printf("write buffer base %p\n", myfile->_IO_write_base);
    printf("write buffer length %d\n", myfile->_IO_write_end - myfile->_IO_write_base);
    printf("buf buffer base %p\n", myfile->_IO_buf_base);
    printf("buf buffer length %d\n", myfile->_IO_buf_end - myfile->_IO_buf_base);
    printf("\n");
    fgets(buf, 5, myfile);
    fputs(buf, myfile);
    printf("\n");
    printf("after reading\n");
    printf("read buffer base %p\n", myfile->_IO_read_base);
    printf("read buffer length %d\n", myfile->_IO_read_end - myfile->_IO_read_base);
    printf("write buffer base %p\n", myfile->_IO_write_base);
    printf("write buffer length %d\n", myfile->_IO_write_end - myfile->_IO_write_base);
    printf("buf buffer base %p\n", myfile->_IO_buf_base);
    printf("buf buffer length %d\n", myfile->_IO_buf_end - myfile->_IO_buf_base);

    return 0;
//    FILE *tmpf = tmpfile();
//    fputs("Alan Turing\n", tmpf);
//    fputs("John von Neumann\n", tmpf);
//    fputs("Alonzo CHurch\n", tmpf);
//
//    rewind(tmpf);
//
//    char buf[8];
//    while (fgets(buf, sizeof buf, tmpf) != NULL)
//        printf("\"%s\"\n", buf);
//
//    if (feof(tmpf))
//        puts("End of file reached");


//    int rc =fputs("Hello World\n", stdout);
//
//    if (rc == EOF)
//        perror("fputs()");
//
//    return 0;
//
//    char buf[5];
//    FILE *myfile = stdin;
//    fgets(buf, 5, myfile);
//    fputs(buf, stdout);

    return 0;
}
