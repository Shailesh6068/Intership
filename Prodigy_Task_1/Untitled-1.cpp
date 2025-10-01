#include <iostream> 
int linearSearch(int arr[], int size, int key) { 
for (int i = 0; i < size; ++i) { 
if (arr[i] == key) { 
return i; // Return the index if key is found 
} 
} 
return -1; // Return -1 if key is not found 
} 
int main() { 
int arr[] = {10, 50, 30, 70, 80, 20, 90, 40}; 
int size = sizeof(arr) / sizeof(arr[0]); 
int key; 
std::cout << "Enter the element to search for: "; 
std::cin >> key; 
int result = linearSearch(arr, size, key); 
if (result != -1) { 
std::cout << "Element found at index: " << result << std::endl; 
} else { 
std::cout << "Element not found in the array." << std::endl; 
} 
return 0; 
}