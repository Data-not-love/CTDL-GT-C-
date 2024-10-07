#include <iostream>
#include <algorithm>

int partition ( int pivot_head , int pivot_end , int arr[] ) {
    int pivot = arr[ pivot_head ] ; // giá trị đầu đc gán cho pivot
    int i = pivot_head ; //  
    int j = pivot_end ; // index cúa pivot end

    while (i <= j) {
        while (arr[i] < pivot) { // nếu giá trị tại i nhỏ hơn pivot thì tăng đến khi tìm đc giá trị lớn hơn
            i++;
        }
        while (arr[j] > pivot) { // nếu giá trị tại j lớn giá trị của pivot thì giảm index cho đến khi tìm đc giá trị lớn hơn
            j--;
        }
        if ( i <= j ) { // sau khi tìm đc thì swap vị trí của 2 giá trị tại i và j
            std :: swap(arr[i], arr[j]) ;
            i++;
            j--;
        }
    }

    std :: swap( arr[pivot_head] , arr[j] ); // sau khi đổi 2 vị trí thì đổi vị trí pivot_head
    return j;
}

void quicksort(int pivot_head, int pivot_end, int arr[]) {
    if ( pivot_head < pivot_end ) {
        int j = partition(pivot_head, pivot_end, arr);
        quicksort ( pivot_head , j, arr);
        quicksort(j + 1, pivot_end, arr);
    }
}

int main() {
    int n;

    std::cin >> n;
    int array[100];

  
    for (int i = 0; i < n; i++) {
        std::cin >> array[i];
    }

    quicksort(0, n - 1, array);

    std::cout << "Sorted : ";
    for (int i = 0; i < n; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
