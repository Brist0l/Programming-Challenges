def get_vector():
    array =[]
    for _ in range(2):
        vector_i = input("Enter the Direction Ratio of `i`:")
        vector_j = input("Enter the Direction Ratio of `j`:")
        vector_k = input("Enter the Direction Ratio of `k`:")
        array.append([int(vector_i),int(vector_j),int(vector_k)])
    return array 

def cross():
    array = get_vector()
    print(array)
    # [[a,b,c],
    #  [d,e,f]]
    print("Cross product is:"
          f"{int(array[0][1]*array[1][2])-int(array[1][1]*array[0][2])}i "
          f"{-1*(array[0][0]*array[1][2]-array[0][2]*array[1][0])}j "
          f"{array[0][0]*array[1][1]-array[1][0]*array[0][1]}k ")

def dot():
    array = get_vector()
    product = []
    for i in range(2):
        sum = array[1][i]*array[2][i]
        product.append(sum)
    print("Dot product is:",product[0]+product[1])

x = input("Cross product(C) or Dot product(D)")
if x.lower() == 'c':
    cross()
elif x.lower() == 'd':
    dot()
else:
    exit()
