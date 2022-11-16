def smallestDifference(arrayOne, arrayTwo):
    # Write your code here.
    One_idx = 0
    Two_idx = 0
    temp = float("inf")
    arrayOne.sort()
    arrayTwo.sort()
    smallest_pair = []
    while(One_idx<len(arrayOne) and Two_idx<len(arrayTwo)):
        One_val = arrayOne[One_idx]
        Two_val = arrayTwo[Two_idx]
        if(One_val > Two_val):
            current_diff = One_val-Two_val
            Two_idx+=1
        elif(One_val < Two_val):
            current_diff = Two_val-One_val
            One_idx+=1
        else:
            return [One_val, Two_val]
        if current_diff < temp:
            temp=current_diff
            smallest_pair =[One_val, Two_val]
    return smallest_pair
