#include<stdio.h>
#include <string.h>

enum {
    EXIT,
    INSERT,
    SEARCH,
    DELETE,
    UPDATE
};

typedef struct number {
    char name[30];
    char phone[30];
}number;
number arr[20] = {
        {"김철수","010-1111-1111"},
        {"김영웅","010-2222-2222"},
        {"이수","010-3333-3333"},
    };
int idx = 3;

void InsertNumber(){
    if(idx == 20){
        printf("더이상 저장할 공간이 없습니다\n");
        return;
    }
    printf("이름 입력 : ");
    scanf(" %s",arr[idx].name);
    printf("번호 입력 : ");
    scanf(" %s",arr[idx].phone);
    idx++;
    printf("연락처 등록 완료\n");
}
void SearchNumber(){
    char str[30];
    printf("검색할 이름 입력 : ");
    scanf("%s",str);
    for(int i=0;i<idx;i++){
        if(strcmp(arr[i].name,str) == 0){
            printf("%s / %s\n",arr[i].name, arr[i].phone);  
            return;
        }
    }
    printf("검색 결과가 없습니다.\n");
}
int main(void){
int no = -1;

    while(no != EXIT){
        puts("--- 연락처 관리 프로그램 ---");
        puts("1. 연락처 등록");
        puts("2. 연락처 검색");
        puts("3. 연락처 삭제");
        puts("4. 연락처 수정");
        puts("0. 프로그램 종료");
        puts("원하시는 메뉴 번호 입력 : ");
        scanf("%d",&no);

        switch(no){
            case INSERT:
                InsertNumber();
                break;
            case SEARCH:
                SearchNumber();
                break;
        }
    }

    return 0;
}
