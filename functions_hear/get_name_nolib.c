// 自行定义常用类型和常量，替代头文件
#define NULL ((void *)0)
#define EOF (-1)
typedef unsigned long size_t;

// 前向声明标准库函数，替代 #include
extern int printf(const char *format, ...);
extern int getchar(void);
extern void *malloc(size_t size);
extern void *realloc(void *ptr, size_t size);
extern void free(void *ptr);

// 自行实现 get_string，替代 cs50.h
static char *get_string(const char *prompt)
{
    printf("%s", prompt);

    size_t capacity = 16;
    size_t len = 0;
    char *buffer = malloc(capacity);
    if (!buffer) return NULL;

    int c;
    while ((c = getchar()) != EOF && c != '\n') {
        if (len + 1 >= capacity) {
            capacity *= 2;
            char *newbuf = realloc(buffer, capacity);
            if (!newbuf) {
                free(buffer);
                return NULL;
            }
            buffer = newbuf;
        }
        buffer[len++] = c;
    }
    buffer[len] = '\0';

    return buffer;
}

int main(void)
{
    char *name = get_string("What's your name? ");
    printf("hello, %s\n", name);
    free(name);
    return 0;
}
