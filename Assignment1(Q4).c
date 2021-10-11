#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void SelectionSort(long long int a[],long long int n) {
    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
            if(a[j]<a[i]) {
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    printf("Selection Sorted Array:\n");
    for(int i=0;i<n;i++) {
        printf("%lld ",a[i]);
    }
    printf("\n");
    return;
}
void BubbleSort(long long int a[],long long int n) {
    int c=1;
    while(c<n) {
        for(int i=0;i<n-c;i++) {
            if(a[i]>a[i+1]) {
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        c++;
    }
    printf("Bubble Sorted Array:\n");
    for(int i=0;i<n;i++) {
        printf("%lld ",a[i]);
    }
    printf("\n");
    return;
}
int main() {
    printf("Enter no of elements:\n");
    
    long long int n;
    scanf("%lld",&n);
    
    long long int a[n];

    for(int i=0;i<n;i++) {
        a[i]=i;
    }
    
    clock_t start1,end1;
    long int t1;
    start1=clock();
    SelectionSort(a,n);
    end1=clock();
    t1=end1-start1;
    printf("Total time elapsed for selection sort: %f\n",(double)t1/(double)CLOCKS_PER_SEC);
    
    clock_t start2,end2;
    long int t2;
    start2=clock();
    BubbleSort(a,n);
    end2=clock();
    t2=end2-start2;
    printf("Total time elapsed for bubble sort: %f\n",(double)t2/(double)CLOCKS_PER_SEC);
}
