m=0
def merge(b,c,a):
    i,j,k=0,0,0
    while(i<len(b) and j<len(c)):
        
        global m
        m+=1
        if b[i]<c[j]:
            a[k]=b[i]
            i+=1
        else:
            a[k]=c[j]
            j+=1
        k+=1
       
    while i<len(b):
                a[k]=b[i]
                i+=1
                k+=1
    while j<len(c):
                a[k]=c[j]
                j+=1
                k+=1
def mergesort(a):
    if(len(a)>1):
        m=len(a)//2
        l1=a[:m]
        l2=a[m:]
        mergesort(l1)
        mergesort(l2)
        merge(l1,l2,a)                
arr=list(map(int,input('Enter the elements').split()))
print("Sorted Array:")
mergesort(arr)
print(arr)
print(m)
        
        
