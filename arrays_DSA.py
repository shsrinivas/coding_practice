import os
import time


class top150:
    def merge_two_arrays(self):
        nums1 = [1, 2, 3, 0, 0, 0]
        nums2 = [2, 5, 6]

        m = 3
        n = 3

        while (m > 0 and n > 0):
            p = m + n - 1
            if nums1[m - 1] > nums2[n - 1]:
                nums1[p] = nums1[m - 1]
                m -= 1
            else:
                nums1[p] = nums2[n - 1]
                n -= 1
        print(nums1)

    def rem_all_dups_of_val(self):

        """i = 0
                p = len(nums) - 1

                k = 0

                while i < p:
                    if nums[p] == val:
                        p -= 1
                        k += 1
                    else:
                        if nums[i] == val:
                            nums[i], nums[p] = nums[p], nums[i]
                            k += 1
                            i += 1
                        else:
                            i += 1

                print(nums)
                print(f"k = {k}")"""
        nums = [0, 1, 2, 2, 3, 0, 4, 2]
        # nums = [3, 2, 2, 3]
        # nums = [2, 2, 3, 3]
        val = 3

        slow = 0

        for fast in range(len(nums)):
            if nums[fast] != val:
                nums[slow] = nums[fast]
                slow += 1

        print(slow)
        print(nums[:slow])

    def minBuyStock(self):
        #prices = [7, 1, 5, 3, 6, 4]
        prices = [7, 6, 4, 3, 1]
        maxProfitSoFar = 0
        minSoFar = prices[0]
        cur_profit = 0
        for i in range(1, len(prices)):
            if prices[i] < minSoFar:
                minSoFar = prices[i]
            else:
                cur_profit = prices[i] - minSoFar

            maxProfitSoFar = max(maxProfitSoFar, cur_profit)

        print(f"Max Profit : {maxProfitSoFar}")

    def productExceptSelf(self):
        nums = [1, 2, 3, 4]
        n = len(nums) - 2

        L = [1] * 4
        R = [1] * 4

        for i in range(1, len(nums) - 1):
            L[i + 1] = L[i] * nums[i]

        for i in range(n, -1, -1):
            R[i] = R[i + 1] * nums[i + 1]

        answer = []

        for i in range(len(nums)):
            answer.append((L[i] * R[i]))

        return answer

    def binarySearch(self, arr, left, right, target):
        while left <= right:
            mid = (left + right) // 2
            if arr[mid] == target:
                return True
            if arr[mid] < target:
                left = mid + 1
            else:
                right = mid - 1
        return False

    def twoSum(self):
        arr = [1, -2, 1, 0, 5]
        arr = sorted(arr)
        target = 9
        flag = False

        for i in range(len(arr)):
            comp = target - arr[i]

            # Works but not efficient
            #if comp in arr and arr.index(comp) != i:
            #flag = True

            if self.binarySearch(arr, 0, len(arr) - 1, comp):
                flag = True

        if flag:
            print("True")
        else:
            print("False")

    def twoSumTwoPointer(self):
        arr = [1, -2, 1, 0, 5]
        target = -3
        arr = sorted(arr)

        left = 0
        right = len(arr) - 1

        while left <= right:
            sum = arr[left] + arr[right]

            if sum == target:
                return True

            if sum < target:
                left += 1
            else:
                right -= 1

        return False

    def twoSumHashTable(self):
        arr = [1, -2, 1, 0, 5]
        target = -5

        s1 = set()

        for i in range(len(arr)):
            comp = target - arr[i]

            if comp in s1:
                return True

            s1.add(arr[i])

        return False

    def removeDups(self):
        nums = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4]
        set1 = set()
        dupIdx = []

        for i in range(len(nums)):
            if nums[i] not in set1:
                set1.add(nums[i])
            else:
                dupIdx.append(i)

        for i in range(len(dupIdx) - 1, -1, -1):
            nums.pop(dupIdx[i])

        return nums

    def removeDupsTwoPointer(self):
        arr = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4, 4, 4, 8]

        j = 1

        for i in range(1, len(arr)):
            if arr[i] != arr[i - 1]:
                arr[j] = arr[i]
                j += 1

        print(j)

    def haystackNeedleStr(self):
        haystack = "dosabsabu"
        needle = "sad"

        haystack = "mississippi"
        needle = "issip"

        haystack = "leetcode"
        needle = "leeto"

        i = 0
        j = 0

        startWithFlag = False
        startWith = -2

        while j < len(needle) and i < len(haystack):
            if haystack[i] == needle[j]:
                if (haystack[i] == needle[0] and i != 0):
                    startWith = i
                    startWithFlag = True

                i += 1
                j += 1

            else:
                if j > 0:
                    j = 0
                if startWithFlag is True:
                    i = startWith - 1

                i += 1

        if j < len(needle):
            return -1
        else:
            return i - len(needle)

    def majorityElement(self):
        nums = [3, 2, 3, 3, 4, 5, 7]
        D1 = {}

        for i in nums:
            if i in D1:
                D1[i] += 1
            else:
                D1[i] = 1

        print(D1)
        print(max(D1, key=D1.get))

    def romanToInt(self):

        #Roman = "XXV"
        #Roman = "LXXXVIII"
        #Roman = "DXII"
        Roman = "XLIX"
        Roman = "CXCIX"

        D1 = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}

        Num = 0
        for i in range(len(Roman)):
            j = i + 1

            if i != 0 and Roman[i] == 'V' and Roman[i - 1] == 'I':
                continue

            elif i != 0 and Roman[i] == 'X' and Roman[i - 1] == 'I':
                continue

            elif i != 0 and Roman[i] == 'L' and Roman[i - 1] == 'X':
                continue

            elif i != 0 and Roman[i] == 'C' and Roman[i - 1] == 'X':
                continue

            elif i != 0 and Roman[i] == 'D' and Roman[i - 1] == 'C':
                continue

            elif i != 0 and Roman[i] == 'M' and Roman[i - 1] == 'C':
                continue

            elif i < (len(Roman) - 1) and Roman[i] == 'I' and Roman[j] == 'V':
                Num += 4

            elif i < (len(Roman) - 1) and Roman[i] == 'I' and Roman[j] == 'X':
                Num += 9

            elif i < (len(Roman) - 1) and Roman[i] == 'X' and Roman[j] == 'L':
                Num += 40

            elif i < (len(Roman) - 1) and Roman[i] == 'X' and Roman[j] == 'C':
                Num += 90

            elif i < (len(Roman) - 1) and Roman[i] == 'C' and Roman[j] == 'D':
                Num += 400

            elif i < (len(Roman) - 1) and Roman[i] == 'C' and Roman[j] == 'M':
                Num += 900

            else:
                Num += D1[Roman[i]]

        print(Num)

    def returnLastWordLen(self):
        str1 = "Hello    World   "
        print(len((str1.strip().split(" "))[-1]))

    def longestCommonPrefix(self):
        pass

    def isPalindrome(self):
        s = "A man, a plan, a canal: Panama"

        s = "0P"

        s_list = list(s.lower())
        res = []

        for ch in s_list:
            if ch.isalnum():
                res.append(ch)

        res = ''.join(res)

        print(res)
        print(res[::-1])

        if res == res[::-1]:
            print("Is Palindrome")
        else:
            print("Is not Palindrome")

    def isPalindrome2Pointers(self):
        s = "A man, a plan, a canal: Panama"
        s = "0P"
        s = "race a car"

        s_list = list(s.lower())
        res = []

        for ch in s_list:
            if ch.isalnum():
                res.append(ch)

        # print(res)

        i = 0
        j = len(res) - 1

        while i <= j:
            if res[i] == res[j]:
                i += 1
                j -= 1
            else:
                return False

        return True

        # res = ''.join(res)

    def isSubsequence(self):
        s = "abc"
        t = "ahbgdc"

        # s = "axc"
        # t = "ahbgdc"
        i = 0
        j = 0

        while i < len(s) and j < len(t):
            if s[i] == t[j]:
                i += 1
                j += 1
            else:
                j += 1

        if i == len(s):
            print("True")
        else:
            print("False")

    def twoSumLC(self):
        nums = [2, 7, 11, 15]
        target = 9
        i = 0
        j = len(nums) - 1

        while (i < j):
            sum = nums[i] + nums[j]
            if target == sum:
                return i, j
            if sum > target:
                j -= 1
            else:
                i += 1
        return False

    def containerWithMostWater(self):
        n = [1, 8, 6, 2, 5, 4, 8, 3, 7]
        # n = [1, 1]

        i = 0
        j = len(n) - 1

        maxVol = 0
        while (i < j):
            print(i, j)
            curVol = (j - i) * min(n[i], n[j])
            maxVol = max(curVol, maxVol)

            if n[i] < n[j]:
                i += 1
            else:
                j -= 1

        print(maxVol)

    def canConstruct(self, ran: str, mag: str) -> bool:
        # Need to check if all char in ran is in mag

        letter_count = [0] * 26
        for ch in mag:
            letter_count[ord(ch) - ord('a')] += 1

        for ch in ran:
            index = ord(ch) - ord('a')
            if letter_count[index] >= 1:
                letter_count[index] -= 1
            else:
                return False
        return True

    def maxSubStringWoRepeatingChar_inEffficeient(self):
        word = "geeksforgeeks"
        # word = "aaa"
        # word = "abcdefabcbb"
        # word = "abcabcbb"
        #word = "pwwkew"
        # word = "aab"
        set1 = set()
        i = 0
        cur_len = 0
        max_len = 0

        for ch in word:
            if ch not in set1:
                set1.add(ch)
                cur_len += 1
                max_len = max(cur_len, max_len)
            else:
                cur_len = 1
                set1 = {ch}

        print(max_len)

    def length_of_longest_substring_slidingWondow(self):
        s = "geeksforgeeks"
        if len(s) <= 2:
            return len(s)

        uniQSet = set()
        left, right, maxLen, curLen = 0, 0, 0, 0
        lenght = len(s)

        while right < lenght and left < lenght:
            if s[right] not in uniQSet:
                uniQSet.add(s[right])
                right += 1
                curLen += 1
            else:
                left = right - 1
                curLen = 0

            maxLen = max(curLen, maxLen)
        print(maxLen)
        return maxLen

    def isIsomorphic(self):
        s = "add"
        t = "egg"
        if len(s) != len(t):
            return False

        D1, D2 = {}, {}

        for i, j in zip(s, t):
            print(i, j)
            # print(D1.get(i, j), D2.get(j, i))
            if D1.get(i, j) != j or D2.get(j, i) != i:
                return False

            D1[i] = j
            D2[j] = i

        return True

    def wordPattern(self):
        # pattern = "abba"
        # s = "dog cat cat dog"
        #
        # pattern = "abba"
        # s = "dog cat cat fish"
        #
        # pattern = "aaaa"
        # s = "dog cat cat dog"

        pattern = "aaa"
        s = "aa aa aa aa"

        s_list = s.split(" ")

        D1 = {}
        D2 = {}

        if len(s_list) != len(pattern):
            return False

        for i, j in zip(pattern, s_list):
            if D1.get(i, j) != j or D2.get(j, i) != i:
                return False

            D1[i] = j
            D2[j] = i

        return True

    def validAnagram(self):
        s = "anagram"
        t = "nagarams"

        letter_count = [0] * 26

        for ch in s:
            letter_count[ord(ch) - ord('a')] += 1

        print(letter_count)

        for ch in t:
            index = ord(ch) - ord('a')

            if letter_count[index] >= 1:
                letter_count[index] -= 1
            else:
                return False

        return True

    def twoSumHashMap(self):
        arr = [0, -1, 2, -3, 1]
        target = -2

        arr = [2, 7, 11, 15]
        target = 9

        arr = [3, 2, 4]
        target = 6

        arr = [3, 3]
        target = 6

        s1 = set()

        for i in range(len(arr)):
            comp = target - arr[i]

            if comp in s1:
                print(arr.index(comp))
                print(i)
                return arr.index(comp), i

            else:
                s1.add(arr[i])

        return False

    def maxLenSubString(self):
        word = "abcabcbbdegfhjikl"
        i, j = 0, 0
        cur_len, max_len = 0, 0

        set1 = set()

        while (j < len(word)):
            while word[j] in set1:
                set1.remove(word[i])
                i += 1
                cur_len -= 1

            set1.add(word[j])
            j += 1
            cur_len += 1
            max_len = max(cur_len, max_len)

        print(max_len)

    def minSubArrayLen(self):
        target = 7
        nums = [2, 3, 1, 2, 4, 3]

        target = 4
        nums = [1, 4, 4]

        target = 11
        nums = [1, 1, 1, 1, 1, 1, 1, 1]

        target = 11
        nums = [1, 2, 3, 4, 5]

        i, j, cur_sum = 0, 0, 0
        len_found = []

        while j < len(nums):
            cur_sum += nums[j]

            while cur_sum >= target:
                len_found.append(j - i + 1)
                cur_sum -= nums[i]
                i += 1

            j += 1

        if len(len_found) == 0:
            return 0

        print(min(len_found))

    def lenOfMaxRepeatingChar(self):
        str1 = "aaanbbbbccdddddbcd"
        cur_len, max_len = 1, 0
        max_ch = str1[0]

        for i in range(1, len(str1)):
            if str1[i - 1] == str1[i]:
                cur_len += 1
            else:
                cur_len = 1

            if cur_len > max_len:
                max_len = cur_len
                max_ch = str1[i]

        print(max_len, max_ch)

    def allCharPresent(self, D1):
        for i in D1.values():
            if i <= 0:
                return False
        return True

    def minWindowNotWorking(self):

        s1 = "ADOBECODEBANC"
        t = "ABC"

        l, r = 0, 0
        t1 = {'A': 0, 'B': 0, 'C': 0}

        # print(list(t1.values()))

        # print(self.allCharPresent(t1))

        while l < len(s1) and r < len(s1):
            print(s1[r])

            if s1[r] in t1:
                t1[s1[r]] += 1
                if self.allCharPresent(t1):
                    l += 1
                    while s1[l] in t1:
                        print("hi")
                        l += 1
            r += 1

            print(l, r)

        print(t1)

    def happyNum(self):

        def sum_of_squares(num):
            sum = 0
            for digit in str(num):
                sum += int(digit) ** 2
            return sum

        s1 = set()

        num = 19
        while num != 1:
            if num in s1:
                return False
            s1.add(num)
            num = sum_of_squares(num)
        return True


A1 = top150()
# A1.merge_two_arrays()
# A1.rem_all_dups_of_val()
# A1.minBuyStock()
# A1.productExceptSelf()
# A1.twoSum()
# print(A1.twoSumTwoPointer())
# print(A1.twoSumHashTable())
# print(A1.removeDups())
# A1.removeDupsTwoPointer()
# print(A1.haystackNeedleStr())
# A1.majorityElement()
# A1.romanToInt()
# A1.returnLastWordLen()
# A1.longestCommonPrefix()
# A1.isPalindrome()
# print(A1.isPalindrome2Pointers())
# A1.isSubsequence()
# i, j = A1.twoSumLC()
# print(i, j)
# A1.containerWithMostWater()
# print(A1.canConstruct("aa","aab"))
# A1.maxSubStringWoRepeatingChar_inEffficeient()
# print(A1.length_of_longest_substring_slidingWondow())
# print(A1.isIsomorphic())
# print(A1.wordPattern())
# print(A1.validAnagram())
# print(A1.twoSumHashMap())
# print(A1.maxLenSubString())
# print(A1.minSubArrayLen())
# print(A1.lenOfMaxRepeatingChar())
# print(A1.minWindowNotWorking())

print(A1.happyNum())
