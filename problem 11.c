#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char s[100]; //입력받은 문자열 예 : baekjoon
    int alphabet[26], len, index; //알파벳 26개 
    
    for (int i = 0; i < 26; i++) {
        alphabet[i] = -1; //소문자 알파벳 26개를 다 -1로 초기화
    }
    
    scanf("%s", s);
    
    len = strlen(s);
    for (int i = 0; i < len; i++) {
        index = s[i] - 'a'; //각 알파벳에 대해 고유한 index  번호 부여
        if (alphabet[index] == -1) { 
            alphabet[index] = i; //이 과정을 통해 반복되는 알파벳에 대해서는 처음 위치가 나오게 함
        } //=> 예 : o가 처음 나왔을 때, alphabet[index] = i 그 후에 o가 나오면 이미 alphabet[index] = i이므로 continue 
        else {
            continue;
        }
    }
    
    for (int i = 0; i < 26; i++) {
        printf("%d ", alphabet[i]);
    }
    
    return 0;
}
