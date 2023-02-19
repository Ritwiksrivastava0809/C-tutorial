# def bubble_sort(list1):
#     n=len(list1)
#     for i in range (n-1,0,-1):
#         for j in range(i):
#             if list1[j]>list1[j+1]:
#                 list1[j],list1[j+1] = list1[j+1],list1[j]
              
# list1=[]
# size = int(input("Enter the size of class: "))

# for i in range(size):
#     marks = float(input("ENTER THE  MARKS OF STUDENT: "))
#     list1.append(marks)
    
    
# bubble_sort(list1)
# print("THE TOP FIVE MARKS ARE: ")
# n=len(list1)
# for i in range(n,n-5,-1):
#     print(list1[i])
# n = int(input("enter the numbers of rows:"))

# for i in range (n,0,-1):
#     for j in range (n-i):
#         print(' ',end='')
        
#     for j in range(2*i-1):
#         print('*',end="")
#         print('\r')




# l = [[3,4,"dfg"],["dsgf",6.5,"gffsd"],[7,3,5]]
# l.insert(2,['ritwik',43,55.66])
# l.insert(3,5+6j)
# print(l)

# for i in l:
#     if type(i)==list:
#         for j in i:
#             if type(j) == str:
#                 print(l.index(i))
                
# for i in l:
#     if type(i)==list:
#         print(i.pop(2))

s="Like a scene in a movie or a verse in a song, paragraphs are the building blocks of any good piece of writing. Paragraphs lend a natural rhythm to your writing that makes it a joy to read. The question is, how do you handle them successfully"
t=s.split()
a=set(t)

res = dict.fromkeys(a,'ritwik')
print(res)

m=[]
for i in res.keys():
    l=m.append(i)
print(l)    

print('\r''\r')
n=[]
for i in res.keys():
    x=n.append(res[i])
