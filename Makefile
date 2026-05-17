CC      = clang
CFLAGS  = -Wall -Wextra -std=c11 -g
LDFLAGS = -L/usr/local/lib
LDLIBS  = -lcs50
CPPFLAGS = -I/usr/local/include

# 递归查找所有 .c 文件（排除 .vscode/ 目录）
SRCS := $(shell find . -name '*.c' -not -path './.vscode/*')
# 源文件对应的可执行文件名（去掉 .c 后缀），支持子目录路径
TARGETS := $(SRCS:.c=)

# 所有目标（可执行文件）
.PHONY: all clean

all: $(TARGETS)

# 通用规则：将任意 .c 文件编译为同名可执行文件
# 支持子目录文件，如 bug/buggy_height.c → bug/buggy_height
%: %.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $< -o $@ $(LDFLAGS) $(LDLIBS)

clean:
	rm -f $(TARGETS)
	find . -name '*.dSYM' -type d -exec rm -rf {} + 2>/dev/null; true
