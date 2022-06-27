/*
 * Copyright (c) 2022 user1687569
 */
/*
 * Book: C语言程序设计_现代方法 第二版
 * Function: List the names of all files in a directory,
 *           and briefly realize the ls command under unix.
 */

#include <stdio.h>
#include <dirent.h>

int main(int argc, char *argv[])
{
    DIR *dp;
    struct dirent *dirp;
    int count = 0;

    if(argc != 2)
    {
        printf("Usage: ls directory name.\n");
        return 0;
    }

    if( (dp = opendir(argv[1])) == NULL )
    {
        printf("Can not open %s\n", argv[1]);
        return 0;
    }

    while ( (dirp = readdir(dp)) != NULL )
    {
        printf("%d     %s\n", count++, dirp->d_name);
    }

    closedir(dp);
    return 0;
}