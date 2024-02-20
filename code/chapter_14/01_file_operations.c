#include <stdio.h>
#include <unistd.h>

int main() {
    char cwd[1024];

    if (getcwd(cwd, sizeof(cwd)) != NULL) {
        printf("current work directory：%s\n", cwd);
    }
    else {
        perror("fail to get current work directory");
        return 1;
    }

    FILE *fp_read, *fp_write;
    char read_filename[] = "../chapter_14/input.txt";
    //    char read_filename[] = "D:\\Desktop\\zongliang\\learn_c\\code\\chapter_14\\input.txt";
    char write_filename[] = "../chapter_14/output.txt";
    char buffer[100];

    // 打开要读取的文件
    fp_read = fopen(read_filename, "rb");
    if (fp_read == NULL) {
        printf("can't open %s\n", read_filename);
        return 1;
    }

    // 打开要写入的文件
    fp_write = fopen(write_filename, "wb");
    if (fp_write == NULL) {
        printf("can't open %s\n", write_filename);
        fclose(fp_read);
        return 1;
    }

    // 从读取文件中读取内容并写入到写入文件中
    while (fgets(buffer, sizeof(buffer), fp_read) != NULL) {
        fputs(buffer, fp_write);
    }

    // 将文件读写位置移动到文件末尾
    fseek(fp_read, 0, SEEK_END);
    // 获取当前文件读写位置（即文件末尾的偏移量）
    long position = ftell(fp_read);
    if (position == -1) {
        printf("获取偏移量失败\n");
    }
    else {
        printf("offset at the end of the file：%ld\n", position);
    }

    // 关闭文件
    fclose(fp_read);
    fclose(fp_write);

    printf("copy content from %s to %s\n", read_filename, write_filename);

    return 0;
}
