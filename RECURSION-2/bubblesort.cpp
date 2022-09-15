#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int a[], int n)
{
    // base case
    if (n == 1)
    {
        return;
    }
    // rec case
    // after you have moved the largest element in the current part to the array by pairwise swapping
    for (int j = 0; j < n - 1; j++)
    {
        if (a[j] > a[j + 1])
        {
            swap(a[j], a[j + 1]);
        }
    }
    // sort first n-1 elements
    bubble_sort(a, n - 1);
}
void bubble_sort_rec(int a[], int j, int n)
{
    // base cases
    if (n == 1)
    {
        return;
    }
    if (j == n - 1)
    {
        //single pass of the current array has been done
        return bubble_sort_rec(a, 0, n - 1);
    }
    //rec case
    if(a[j]>a[j+1]){
        swap(a[j],a[j+1]);
    }
    bubble_sort_rec(a,j+1,n);
    return;
}
int main()
{
    int a[] = {5, 4, 3, 1, 2};
    int n = 5;
    return 0;
}