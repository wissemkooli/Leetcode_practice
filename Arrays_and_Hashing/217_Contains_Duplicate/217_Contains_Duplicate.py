def ContainsDuplicate(nums):
    """
    Given an integer array nums, return true if any value appears at least twice in the array,
    and return false if every element is distinct.

    :param nums: List[int] - List of integers
    :return: bool - True if any value appears at least twice, False otherwise
    """
    s=set(nums)
    return len(s)!=len(nums)






print(ContainsDuplicate([5,3,2]))
print(ContainsDuplicate([2,3,2]))