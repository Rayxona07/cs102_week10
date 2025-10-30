#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


float avgNumInArray(int numbers[], int size ) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += (float)numbers[i];
    }
    return sum/size;
}
int main() {
    int n;
    cin >> n;
    int the_numbers[n];
    for (int i = 0; i < n; i++) {
        cin >> the_numbers[i];
    }
    cout<<"Avarage is"<<avgNumInArray(the_numbers,n);
    return 0;
//Problem2
double average(int arr[], int size) {
    double sum=0;
    for (int i=0;i<size;i++)
        sum+=arr[i];
    return sum/size;
}
int main () {
    int n; cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
        cin>>arr[i];
    average(arr, n);
    return 0;

}
//Problem3
int findMin(int arr[], int n) {
    int minVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
            return minVal;
        }
        int main () {
            int n;
            cin>>n;
            int arr[n];
            for (int i = 0; i < n; i++) {
                cin>>arr[i];
                cout<<"Min="<<findMin(arr, n)<<endl;
                return 0;
            }
        }
    }
}

//Problem 4
int indexOfLargestElement(double arr[], int size) {
    int index = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > arr[index]) {
            index = i;
            return index;
        }
        int main() {
            double arr[15];
            for (int i = 0; i < 15; i++) {
                cin>>arr[i];
                cout<<indexOfLargestElement(arr, 15)<<endl;
                return 0;
            }
        }
    }
}
//Problem 6
bool strictlyEqual(const int list1[],
    const int list2[], int size) {
    for (int i=0; i<size; i++)
        if (list1[i] != list2[i])
            return false;
            return true;
        }
    int main () {
    int n1,n2;
    cin>>n2;
    int a[n1];
    for (int i=0; i<n1; i++) cin>>a[i];
    cin>>n2;
    int b[n2];
    for (int i=0; i<n2; i++) cin>>b[i];
    if (n1 !=n2) cout<<"Two lists are not strictly identical";
    else if (strictlyEqual(a,b,n1)) cout<<"Two lists are strictly identical";
return 0;

}
// Problem 7
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sort (arr, arr + n);
        for (int j = 0; j < n; j++) {
            cout << arr[j] << " ";
           return 0;
        }
    }
}
//problem 8
int main () {
    strand(time(0));
    int count[6]={0};
    for (int i = 0; i < 10000; i++) {
        int roll=rand()%6+1;
        count[roll]++;
    }
    for (int i = 0; i < 6; i++) {
        cout<<i+1<<":"<<count[i]<<endl;
        return 0;
    }

    }
void reverseAray(int arr[],int start, int end) {
    while (start<end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        reverseAray(arr, i, arr[i]);
        for (int j = 0; j < n; j++) {
            cout << arr[j] << " ";
            return 0;
        }
    }
 }
//Problem 10
void reverseArray(int arr[], int start,int end) {
    if (start>=end)
        return;
    swap(arr[start],arr[end]);
    reverseArray(arr, start+1, end-1);}
int main () {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        reverseArray(arr, 0, n-1);
        for (int j = 0; j < n; j++) {
            cout << arr[j] << " ";
            return 0;
        }
    }
}
//Problem 11
int main () {
    int n, target;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        cin >> target;
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if (arr[j] == target) {
                    cout<<"["<<i<<","<<j<<"]";
                    return 0;
                }
            }
        }
        return 0;

    }
}
//Problem12
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        int index=-1;
        if (arr[0] != arr[1]) && arr[1] == arr[2]) index=1;
        else if (arr[n-1] !=arr[n-2] &&arr[n-2]==arr[n-3]) index=n;
        else {
            for (int i = 1; i < n-1; i++) {
                if (arr[i] != arr[i-1]) index=i;
                arr[i] != arr[i+1]) {
                    index= i+1;
                }
            }
        }
        cout<<index<<endl;
    }
}


