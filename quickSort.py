

def particion(arr, menor, mayor):
    i = (menor - 1)
    pivot = arr[mayor]

    for j in range(menor,mayor):
        if arr[j] <= pivot:
            i = i + 1
            arr[i], arr[j] = arr[j],arr[i]

    arr[i+1], arr[mayor] = arr[mayor],arr[i+1]
    return (i+1)

def quickSort(arr,menor,mayor):
    if menor < mayor :
        partition_index = particion(arr, menor, mayor)
        quickSort(arr, menor, partition_index-1)
        quickSort(arr, partition_index+1, mayor)

arr = [
3, 94, 86, 82, 90,
10, 87, 36, 61, 8,
17, 15, 22, 10, 23,
78, 25, 2, 30, 45,
98, 43, 98, 59, 53,
57, 2, 64, 1, 41,
32, 58, 19, 99, 60,
74, 48, 80, 44, 25,
68, 1, 89, 77, 60,
25, 99, 30, 76, 32,
57, 82, 52, 44, 72,
87, 34, 87, 65, 30,
54, 6, 31, 33, 44,
44, 42, 82, 90, 17,
9, 98, 28, 86, 69,
3, 17, 8, 45, 98,
12, 47, 95, 43, 72,
39, 41, 82, 74, 56,
65, 79, 50, 26, 67,
100,24, 67, 38, 57,
]
n = len(arr)
quickSort(arr,0,n-1)
print ("Array Ordenado: ")

for i in arr:
    print(i),