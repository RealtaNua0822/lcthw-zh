#include <stdio.h>

int main(int argc, char *argv[]) {
    char *states[] = {
        "California", "Oregon", "Washington", "Texas"
    };
    int num_states = 4;
    
    printf("原始数据:\n");
    for(int i = 0; i < num_states; i++) {
        printf("state %d: %s\n", i, states[i]);
    }
    for(int i = 1; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    }
    
    // 将argv元素赋值给states（安全）
    if(argc > 1) {
        states[0] = argv[1];  // 只是指针赋值，不是字符串拷贝
        printf("\n将argv[1]赋值给states[0]后:\n");
        printf("states[0] = %s\n", states[0]);
    }
    
     argv[1] = states[0]; // 这会修改命令行参数，可能有问题
     printf("拷贝后的argv[1]: %s\n", argv[1]);
  
    return 0;
}
