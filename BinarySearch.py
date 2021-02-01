#Binary Search using python

def Binary_Search(Test_list, item):

	first = 0
	last = len(Test_list)-1
	found = False

	while first <= last and not found:
		mid = (first+last)//2
		if Test_list[mid] == item:
			found = True
		else:
			if Test_list[mid] > item:
				last = mid-1
			else:
				first = mid+1
	return found




Test_list = [1,5,6,7,8,9,10,11,24,26]
Search_item = 26

print(Binary_Search(Test_list, Search_item))



