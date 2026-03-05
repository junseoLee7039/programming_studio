#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int findRoom(int persons[5]);
void printReport(char mn[10][20], int mr[10], int mc, char wn[10][20], int wr[10], int wc);

int main() {
    char man_name[10][20], woman_name[10][20];
    int man_room[10],woman_room[10], man_cnt = 0, woman_cnt = 0;
    int man_str[5] = {0,0,0,0,0}, woman_str[5]={0,0,0,0,0},opt = -1;
    srand((unsigned)time(NULL));

    printf("========================================\n");
    printf("생활관 호실 배정 프로그램\n");
    printf("========================================\n");

    while (1) {
        printf("메뉴 : 1.남학생 등록 2.여학생 등록 0.종료 > ");
        scanf("%d", &opt);
        if (opt == 0) {
            break;
        }
        if (opt == 1) {
            if (man_cnt >= 10) {
                printf("남학생은 더 이상 등록할 수 없습니다.\n");
                continue;
            }

            printf("학생 이름은? > ");
            scanf("%s", man_name[man_cnt]);

            int r = findRoom(man_str); 
            man_str[r - 1] = man_str[r - 1] + 1; 
            man_room[man_cnt] = 100 + r;

            printf("%s 학생 %d호실 배정되었습니다.\n", man_name[man_cnt], man_room[man_cnt]);
            man_cnt=man_cnt + 1;
        } else if (opt==2) {
            if (woman_cnt>=10) {
                printf("여학생은 더 이상 등록할 수 없습니다.\n");
                continue;
            }

            printf("학생 이름은? > ");
            scanf("%s", woman_name[woman_cnt]);

            int r=findRoom(woman_str); 
            woman_str[r-1]=woman_str[r-1]+1;
            woman_room[woman_cnt] = 200 + r;

            printf("%s 학생 %d호실 배정되었습니다.\n", woman_name[woman_cnt], woman_room[woman_cnt]);
            woman_cnt = woman_cnt + 1;
        } else {
            printf("메뉴를 다시 선택하세요.\n");
        }
    }
    
    printReport(man_name, man_room, man_cnt, woman_name, woman_room, woman_cnt);

    return 0;
}


void printReport(char mn[10][20], int mr[10], int mc, char wn[10][20], int wr[10], int wc) {
    printf("========================================\n");
    printf("생활관 호실 배정 결과는 다음과 같습니다.\n");
    printf("========================================\n");

    printf("남학생 명단 (%d명)\n", mc);
    for (int i = 0; i < mc; i++) {
        printf("%d. %s [%d호]\n", i + 1, mn[i], mr[i]);
    }

    printf("\n여학생 명단 (%d명)\n", wc);
    for (int i = 0; i<wc; i++) {
        printf("%d. %s [%d호]\n", i + 1, wn[i], wr[i]);
    }

    printf("\n호실별 배정 명단\n");

    for (int i=1; i <= 5; i++){
        printf("10%d호 : ", i);
        for (int j = 0; j < mc; j++) {
            if (mr[j]==100+i){
                printf("%s ", mn[j]);
            }
        }
        printf("\n");
    }

    for (int i=1;i<=5;i++) {
        printf("20%d호 : ",i);
        for (int j = 0; j<wc; j++) {
            if (wr[j] ==200+i) {
                printf("%s ", wn[j]);
            }
        }
        printf("\n");
    }
}

int findRoom(int persons[5]) {
    int pos[5], cnt = 0;

    for (int i = 0; i < 5; i++) {
        if (persons[i] < 2) {
            pos[cnt] = i + 1; 
            cnt++;
        }
    }

    if (cnt == 0) {
        return 0; 
    }

    return pos[rand() % cnt];
}