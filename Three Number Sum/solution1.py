# O(n^2) time | O(n) space
def threeNumberSum(array, targetSum):
    # Write your code here.
    triplet = []
    array.sort()
    for i in range(len(array)-2):
        left = i+1;
        right = len(array)-1;
        while(left<right):
            curr_sum = array[i]+array[left]+array[right]
            if(curr_sum==targetSum):
                triplet.append([array[i],array[left],array[right]])
                left+=1
                right-=1
            elif(curr_sum<targetSum):
                left+=1
            else:
                right-=1
    return triplet
