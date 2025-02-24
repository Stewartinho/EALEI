def permut(array,n):
    all_diferent = list()
    torret = "T"
    blanks = "."

    if n==1 :
        if array[n-1]!= blanks:
            return [array[n-1]]
        else:
            return [array[n-1],[torret]]
        

    else:

        thissol = list()

        if array[n-1]!=blanks:
            

        
        return all_diferent



A = [".",".","."]


A = permut(A,len(A))
print(A)
