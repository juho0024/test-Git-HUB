#include <stdio.h>
#include <stdlib.h>

// 구조체를 사용하여 작업을 저장
typedef struct {
    int index; // 작업의 순서 (원래 인덱스)
    int Ti;    // 작업을 완료하는 데 걸리는 시간
    int Si;    // 지연 하루당 벌금
} Job;

// 작업의 비교 함수 (Si / Ti 비율에 따라 내림차순 정렬)
int compare(const void* a, const void* b) {
    Job* jobA = (Job*)a;
    Job* jobB = (Job*)b;

    // Si / Ti를 비교 (a > b이면 -1, a < b이면 1 반환)
    double ratioA = (double)jobA->Si / jobA->Ti;
    double ratioB = (double)jobB->Si / jobB->Ti;

    if (ratioA > ratioB) {
        return -1; // jobA 우선
    }
    else if (ratioA < ratioB) {
       return 1;  // jobB 우선
    }
    else {
        // 비율이 같으면 인덱스가 작은 순으로 정렬
        return jobA->index - jobB->index;
    }
}

int main() {
    printf("modified!")
}

