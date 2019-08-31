def quicksort(a,l,h):
    if l<h:
        pos=partition(a,l,h)
        quicksort(a,l,pos-1)
        quicksort(a,pos+1,h)
def partition(a,l,h):
    i=l-1
    pos=a[h]
    for j in range(l,h):
        if(a[j]<=pos):
            i+=1
            a[i],a[j]=a[j],a[i]
    a[i+1],a[h]=a[h],a[i+1]
    return i+1
arr=list(map(int,input('Enter the elements').split()))
print('Sorted Array')
quicksort(arr,0,len(arr)-1)
print(arr)
