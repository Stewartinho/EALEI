def permut(array,n):
    all_diferent = list()
    torret = "T"
    blanks = "."

    if n==1 :

        if array[n-1]!= blanks:
            return [array[n-1]]
        else:
            return [[array[n-1]],[torret]]
        

    else:


        possiblevals = permut(array,n-1)
        for val in possiblevals:
            newval = val + [array[n-1]]
            all_diferent.append(newval)
            if array[n-1] == blanks:
                all_diferent.append(val + [torret])


        return all_diferent


A = [".",".","#",".",".","."]
A = permut(A,len(A))
print(A)
