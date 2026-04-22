#include <stdio.h>

int sum(int N, int arr[]){
    int sum = 0;
    for (int j =0; j<N; j++){
        sum = sum + arr[j];
    }
    return sum;
}

float avg(int N, int arr[]){
    float sum = 0;
    for (int j =0; j<N; j++){
        sum = sum + arr[j];
    }
    float avg = sum/N;
    return avg;

}

int max(int N, int arr[]){
    int max = 0;
    for (int j = 0; j<N; j++){
        if(max < arr[j]){
            max = arr[j];
        }
    }
    return max;
}

int idx(int N, int arr[]){
    int max = 0;
    int idx = 0;
    for (int j = 0; j<N; j++){
        if(max < arr[j]){
            max = arr[j];
            idx = j;
        }
    }
    return idx;

}

int main(){
    int N;
    scanf("%d", &N);

    int a[N];
    for( int i = 0; i<N; i++){
        scanf("%d", &a[i]);
    }

    int hasil1 = sum(N, a);
    printf("\nSUM %d\n", hasil1);

    float hasil2 = avg(N, a);
    printf("AVG %.2f\n", hasil2);

    int hasil3 = max(N, a);
    printf("MAX %d\n", hasil3);

    int hasil4 = idx(N, a);
    printf("IDX %d\n", hasil4);


}
