def bubble_sort(list1):
    n=len(list1)
    for i in range (n-1,0,-1):
        for j in range(i):
            if list1[j]>list1[j+1]:
                list1[j],list1[j+1] = list1[j+1],list1[j]
              
list1=[]
size = int(input("Enter the size of class: "))

for i in range(size):
    marks = float(input("ENTER THE  MARKS OF STUDENT: "))
    list1.append(marks)
    
    
bubble_sort(list1)
print("THE TOP FIVE MARKS ARE: ")
n=len(list1)
for i in range(n,n-5,-1):
    print(list1[i])
    