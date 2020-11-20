#include <stdio.h>

int main() {
    int sec, hour, min, st;
    
    scanf("%d", &st);
    
    sec = st;
    
    hour = sec / 3600;
    sec = sec % 3600;
    
    min = sec / 60;
    sec = sec % 60;
    
    printf("%d초는 %d시간 %d분 %d초입니다.\n", st, hour, min, sec);
    
    return 0;
}
