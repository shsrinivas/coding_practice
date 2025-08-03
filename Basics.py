import string


class Basics:
    def isStrPal(self):
        str1 = "ama"
        print(str1[::] == str1[::-1])

    def numOfWords(self):
        str1 = "   Hi My Name Is Shreya     how Are You ?  \n Very Nice Thankyou "
        li = str1.split()
        print(li)
        newLi = []
        for word in li:
            if not word.isalnum():
                continue
            newLi.append(word)
        print(newLi)

    def swapVar(self):
        a = "Shreya"
        b = "Uma"

        print(a, b)

        temp = a
        a = b
        b = temp

        print(a, b)

    def isPanagram(self):
        alphas = string.ascii_lowercase

        a = "Shreya Bulldog 1 2 3 1".lower()
        li = list(set(a))
        panag = []
        for i in li:
            if not i.isalpha():
                continue
            panag.append(i)

        print(panag)

        return len(panag) == 26

    def largestNum(self):
        li = [1, 9, 5, 12, 7]
        maxSoFar = li[0]

        for i in range(1, len(li)):
            maxSoFar = max(maxSoFar, li[i])

        return (maxSoFar)

    def checkLeapYear(self):
        year = 2024
        return year % 4 == 0 and (year % 400 == 0 or year % 100 != 0)

    def fibSeq(self):
        a, b = 0, 1

        len = 5
        sum, next = 0, 0

        for i in range(1, len + 1):
            print(a)
            sum = a + b
            a = b
            b = sum

    def factorial_iterative(self):
        n = 5
        # fact(5) = 1 * 2 * 3 * 4 * 5
        fact = 1

        for i in range(1, n):
            fact = fact * (i + 1)

        print(fact)

    def factorial_rec(self, n):
        if n == 0 or n == 1:
            return 1
        else:
            return n * self.factorial_rec(n - 1)


class arraysDSA:

    def binary_search(self, arr, left, right, target):

        while left <= right:
            mid = (left + right) // 2

            if arr[mid] == target:
                return True

            if arr[mid] < target:
                left = mid + 1
            else:
                right = mid - 1

        return False

    def two_sum(self):
        arr = [1, -2, 1, 0, 5]
        arr = sorted(arr)
        target = 0

        for i in range(1, len(arr)):
            comp = arr[i] - target

            if self.binary_search(arr, i + 1, len(arr) - 1, comp):
                return True
            else:
                return False

    def two_sum_2P(self):
        arr = [1, -2, 1, 0, 5]
        target = 0

        arr = sorted(arr)
        # [-3, -1, 0, 1, 2]
        left, right = 0, len(arr) - 1

        while left < right:
            sum = arr[left] + arr[right]
            print(sum)

            if sum == target:
                return True

            if sum > target:
                right -= 1
            else:
                left += 1

        return False

    def bestTimeToBuyAndSellStocks(self):
        prices = [7, 10, 1, 3, 6, 9, 2]
        #Output: 8

        minSoFar = prices[0]
        maxProfitSoFar = 0

        for i in range(1, len(prices)):
            minSoFar = min(minSoFar, prices[i])

            curProfit = prices[i] - minSoFar

            maxProfitSoFar = max(curProfit, maxProfitSoFar)

        return maxProfitSoFar

    def findDups(self):
        #Neat Code
        Li = [1, 1, 2, 3, 4, 4, 4]

        D1 = dict()
        res = []

        print(D1.get(1, 0))
        print(D1.get(5, 0))

        for num in Li:
            D1[num] = D1.get(num, 0) + 1

        for key, val in D1.items():
            if val > 1:
                res.append(key)

        print(res)

    def productExceptSelf(self):
        arr = [1, 2, 3, 4]
        print(arr)
        n = len(arr)
        res = []
        #   = [1, 1, 1, 1]

        L = [1] * len(arr)
        R = [1] * len(arr)

        for i in range(1, n):
            L[i] = L[i - 1] * arr[i - 1]

        print(L)

        for i in range(n - 2, -1, -1):
            R[i] = R[i + 1] * arr[i + 1]

        print(R)

        for i in range(0, n):
            res.append(L[i] * R[i])

        print(res)

    def maxSumSubArray(self):
        arr = [2, 3, -8, 7, -1, 2, 3]
        arr = [-2, -4]
        arr = [5, 4, 1, 7, 8]

        curSum = arr[0]
        maxSum = arr[0]

        for i in range(1, len(arr)):
            if curSum < 0:
                curSum = 0
            curSum += arr[i]
            maxSum = max(curSum, maxSum)

        print(maxSum)

    def maxProductSubArray(self):
        arr = [-2, 6, -3, -10, 0, 2]

        curMin = arr[0]
        curMax = arr[0]
        maxProd = arr[0]

        for i in range(1, len(arr)):
            tempMax = max(arr[i], arr[i] * curMax, arr[i] * curMin)
            curMin = min(arr[i], arr[i] * curMax, arr[i] * curMin)

            curMax = tempMax

            maxProd = max(maxProd, curMax)

        print(maxProd)

    def minInRotatedSortedArray(self):
        """
        Basic idea is in a rotated sorted array, we will have 2 halfs, one is the sorted half and the other is the unsorted half

        Binary search is used to search the elements in logn complexity , we will be seaching in n/2 , n/4, n/8 untill we find the element
        We will be either eliminating the right half/  the left half

        In this problem first thing to do this find which half of the array is sorted the right / left half

        In sorted array all left elements will be lesser to their right elements
        So, arr[low] < arr[high]  ;; low =0 , high = len(arr) - 1

        idea is in sorted half : your min element will not be present (but still might be present)
        [6, 7, 8, 9, 3, 4, 5] -> here in the sorted half the min is not present [6, 7, 8, 9]
        [4, 5, 1, 2, 3]       -> in this case the mid element is the min and is in the sorted half

        if (arr[low] <= arr[mid]):
            res = min(res, arr[low])  # Pick up the smallest element in the sorted array
            low = mid + 1

        idea is on the unsorted half, due to the rotation, the min element will be found there.
        if (arr[low] > arr[mid]):
            res = min(res, arr[mid])  # Pick up the mid element in the unsorted array
            high = mid - 1

        :return: res

        https://www.youtube.com/watch?v=nhEMDKMB44g

        """

        arr = [6, 7, 8, 9, 3, 4, 5]
        arr = [3, 4, 5, 1, 2]

        low, high = 0, len(arr) - 1
        res = 10000

        while low <= high:

            mid = (low + high) // 2

            if (arr[low] <= arr[mid]):
                res = min(res, arr[low])  # Pick up the smallest element in the sorted array
                low = mid + 1
            else:
                res = min(res, arr[mid])  # Pick up the mid element (first element of the starting of unsorted arr) in the unsorted array
                high = mid - 1

        return (res)

    def searchInRotatedSortedArray(self):
        arr = [6, 7, 8, 9, 10, 11, 12, 3, 4, 5]
        target = 3

        low = 0
        high = len(arr) - 1

        while low <= high:

            mid = (low + high) // 2

            if arr[mid] == target:
                return mid

            #left sorted
            if arr[low] <= arr[mid]:
                if arr[low] <= target <= arr[mid]:
                    high = mid - 1
                else:
                    low = mid + 1
            #right sorted
            else:
                if arr[mid] <= target <= arr[high]:
                    low = mid + 1
                else:
                    high = mid - 1

        return -1


class stringsDSA:

    def lenOfLongestSubString(self):

        """
        Sliding windows technique : O(n) – each character is visited at most twice (once added, once removed).
        :return:
        """

        s = "geeksforgeeks"
        left = 0
        char_set = set()
        max_len = 0

        for right in range(len(s)):
            while s[right] in char_set:
                char_set.remove(s[left])
                left += 1
            char_set.add(s[right])
            max_len = max(max_len, right - left + 1)

        return max_len

    def maxConsicutiveRepeatingChar(self):
        s = "aaaabb"
        # output = d , 5

        cur_ch = s[0]
        cur_count = 1
        max_count = 1
        max_char = s[0]

        left = 0

        for i in range(1, len(s)):
            if s[i] == s[i - 1]:
                cur_count += 1  # If the current character is the same as the previous one, increment the count.

            else:
                cur_ch = s[i]  # update the current char and count
                cur_count = 1

            if cur_count > max_count:
                max_count = cur_count
                max_char = cur_ch

        print(max_char, max_count)

    def checkAnagram(self):
        s1 = "geeks"
        s2 = "eeksgp"

        D1 = {}

        for i in s1:
            D1[i] = D1.get(i, 0) + 1

        for i in s2:
            D1[i] = D1.get(i, 0) - 1

        for val in D1.values():
            if val != 0:
                return False

        return True

    def groupAnagrams(self):

        strs = ["eat", "tea", "tan", "ate", "nat", "bat"]
        D1 = {}

        for word in strs:
            count_li = [0] * 26  # Create a list from [0]*26 with count
            for ch in word:
                count_li[ord(ch) - ord('a')] += 1  # keep the count of letters for each word

            key = tuple(count_li)
            print(key)

            if key not in D1:
                D1[key] = []  # If key not present in dict, add the key with value as empty list
            D1[key].append(word)  # Then append the word to the list

        print(D1.values())

    def sentencePalindrome(self):

        s = "Too hot to hoot."

        left, right = 0, len(s) - 1

        while left <= right:
            if not s[left].isalpha():
                left += 1

            elif not s[right].isalpha():
                right += 1

            elif s[left] == s[right]:
                left += 1
                right -= 1

            else:
                return False

        return True

    def longestSubString(self):
        s = "geeksforgeeks"

        left = 0
        char_set = set()
        cur_len, max_len = 0, 0

        for right in range(len(s)):
            while s[right] in char_set:
                char_set.remove(s[left])
                left += 1
                print(1, char_set)
            char_set.add(s[right])
            print(2, char_set)
            cur_len = len(char_set)

            max_len = max(cur_len, max_len)

        print(max_len)

    def maxRepeatChar(self):
        s = "aaabbbbccdddddabc"

        cur_ch, max_ch = s[0], s[0]
        cur_len, max_len = 1, 1

        for i in range(1, len(s)):
            if s[i] == s[i - 1]:
                cur_len += 1
            else:
                cur_ch = s[i]
                cur_len = 1

            if cur_len > max_len:
                max_len = cur_len
                max_ch = cur_ch

        print(max_len, max_ch)

    def checkAnagram(self):

        s = "tan"
        b = "natt"

        D1 = dict()

        for ch in s:
            D1[ch] = D1.get(ch, 0) + 1
            print(D1)

        for ch in b:
            D1[ch] = D1.get(ch, 0) - 1
            print(D1)

        for i in D1.values():
            if D1.values() != 0:
                return False

        return True

    def grpAnagrams(self):
        strs = ["eat", "tea", "tan", "ate", "nat", "bat"]
        D1 = {}

        for word in strs:
            count_li = [0] * 26

            for ch in word:
                count_li[ord(ch) - ord('a')] += 1

            key = tuple(count_li)

            if key not in D1:
                D1[key] = []

            D1[key].append(word)

        print(D1.values())


B1 = Basics()
# B1.isStrPal()
# B1.numOfWords()
# B1.swapVar()
# print(B1.isPanagram())
# print(B1.largestNum())
# print(B1.checkLeapYear())
# print(B1.fibSeq())
# print(B1.factorial_iterative())
# print(B1.factorial_rec(5))

D1 = arraysDSA()

# print(D1.two_sum())
# print(D1.two_sum_2P())
# print(D1.bestTimeToBuyAndSellStocks())
# print(D1.findDups())
# print(D1.productExceptSelf())
# print(D1.maxSumSubArray())
# print(D1.maxProductSubArray())
# print(D1.minInRotatedSortedArray())

print(D1.searchInRotatedSortedArray())


S1 = stringsDSA()
# print(S1.lenOfLongestSubString())
# print(S1.maxConsicutiveRepeatingChar())1
# print(S1.checkAnagram())
# print(S1.groupAnagrams())
# S1.longestSubString()
# S1.maxRepeatChar()
# print(S1.checkAnagram())
# print(S1.grpAnagrams())
