
## **算法及其设计技术 (Do algorithms for fun)**

### **1. 概述**


包括但不限于以下内容：

* [**Min-heap/Max-heap**](#heap)
* [**Union Find**](#uf)
* [**Stack**](#st)
* [**Queue**](#q)
* [**Map/Set**](#ms)
* [**Trees**](#t) 
* [**Trie**](#trie)
* [**sort**](#s)
* [**Two Pointers**](#tp)
* [**Prefix Sum**](#psum)
* [**Bit Manipulation**](#bm)
* [**细节题**](#xijie)
	* [**Big Integer**](#bi)
	* [KMP](#kmp)
* [**Graph Algorithms**](#ggg)
* [**经典算法应用**](#jingdian)
    * [Permutation](#jingdianp)
	* [Cycle Detection](#jingdianCD)
* [**Binary Search**](#bs)
* [**Dynamic Programming**](#dp)
* [**Greedy Algorithms**](#gd)
* [**Recursive**](#rec)
* [**Brute Force Search**](#bf)
	* [**DFS + Backtrack**](#dfs)
	* [**BFS + Branch-and-Bound**](#bfs)
* [**Analisys of time and space complexity**](#ats)
* Machine Learning Algorithms for Databases
	* Reinforce Learning for Optimization

**算法题目来源： [LeetCode](https://leetcode.com/) [POJ](http://poj.org/problemlist)  [HDUOJ](http://acm.hdu.edu.cn/listproblem.php?vol=1)  LeetCode数据比较弱，OJ的数据相对强一些，[UVa](https://onlinejudge.org/)数据很强。一般算法竞赛数组大小数量级在1e6，这对于Java的同学不是很友好，所以LeetCode一维情况下数据长度在1e5数量级级别，二维情况下，一般在1e3，因为两维超过1e6级别。如果要预先开一个数组，按照前面的数量级设置就能通过所有test case。**

### **2. 算法列表**

* <span id=xijie>细节题</span>
	* [LeetCode27.java Remove Element AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode27.java)
	* [LeetCode7.java reverse AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode7.java)
	* [LeetCode9.cpp isPalindrome  AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode9.cpp)
	* [LeetCode13.cpp romanToInt  AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/RomanToInteger.cpp)
	* [LeetCode204.cpp Count Primes AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode204.cpp)
	* [LeetCode1351.cpp Count Negative Numbers in a Sorted Matrix AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode1351.cpp)
	* [LeetCode8.cpp String to Integer (atoi) AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode8.cpp)
	* [**LeetCode240.cpp Search a 2D Matrix II**  采用二分检索存在TLE，存在一个O(r+c)的线性时间算法](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode240.cpp)
	* [LeetCode509.cpp Fibonacci Number AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode509.cpp)
	* [LeetCode26.cpp Remove Duplicates from Sorted Array AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode26.cpp)
		* [LeetCode80.cpp Remove Duplicates from Sorted Array II AC LeetCode26 follow-up](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode80.cpp)
		* [LeetCode83.cpp Remove Duplicates from Sorted List AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode83.cpp)
		* [LeetCode82.cpp Remove Duplicates from Sorted List II AC]()
	* <span id=bi>Big Integer</span>
	    * [LeetCode415.cpp Add to Array-Form of Integer AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode415.cpp)
		* [LeetCode989.cpp Add to Array-Form of Integer AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode989.cpp)
		* [LeetCode67.cpp Add Binary AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode67.cpp)
		* [LeetCode43.cpp Multiply Strings AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode43.cpp)
	* <span id=kmp>KMP</span>
	    * [kmp.cpp brute search](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/kmp.cpp)
		* [LeetCode28.cpp Implement strStr() AC KMP](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode28.cpp)
		* [LeetCode459.cpp Repeated Substring Pattern AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode459.cpp)
		* [LeetCode214.cpp Shortest Palindrome AC KMP](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode214.cpp)
* <span id=jingdian>经典算法应用</span>
	* <span id=jingdianp>Permutation</span>  **本题是一个Generation in lexicographic order，具体见链接 https://en.wikipedia.org/wiki/Permutation#Generation_in_lexicographic_order**
		* [LeetCode31.cpp Next Permutation  AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode31.cpp)
		* [LeetCode46.cpp Permutations AC  **调用了LeetCode31.cpp的Next Permutation函数**](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode46.cpp)
		* [LeetCode47.cpp Permutations II AC  **和LeetCode46.cpp代码完全一样**](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode47.cpp)
		* [LeetCode60.cpp Permutation Sequence  AC  **LeetCode31.cpp变形题**](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode60.cpp)
	* <span id=jingdianCD>Cycle Detection Algorithms</span> **本题考查环检测算法，具体见链接 https://en.wikipedia.org/wiki/Cycle_detection**
		* [**LeetCode141.cpp Linked List Cycle AC**](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode141.cpp)
		* [**LeetCode142.cpp Linked List Cycle II AC**](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode142.cpp)
		* [**LeetCode287.cpp Find the Duplicate Number AC** **数组其实也是一个链表，如果能带着这个观点，这道题目完全和142相同**](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode287.cpp)
		* [**LeetCode876.cpp Middle of the Linked List AC**](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode876.cpp)
* <span id=bm>Bit Manipulation</span>
    * [LeetCode78.cpp Subsets AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode78.cpp)
	* [LeetCod191.cpp Number of 1 Bits AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode191.cpp)
* <span id=tp>Two pointers</span>
    * 双指针问题包括（前向型指针(滑动窗口（将O(n^2)算法做成O(n)的算法）和快慢指针两类)、相向型指针（O(n)）、两个数组（典型题目为mergesort中的merge过程）三种大类）
	* [LeetCode167.cpp Two Sum II - Input array is sorted  相向型指针 AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode167.cpp)
	* [LeetCode88.cpp Merge Sorted Array AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode88.cpp)
	* [LeetCode1.cpp Two Sum AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode1.cpp)
	* [LeetCode15.cpp 3Sum  two pointer   AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode15.cpp)
	* [LeetCode16.cpp 3Sum Closest AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode16.cpp)
	* [LeetCode18.cpp 4Sum two pointer AC  相向型指针](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode18.cpp)
	* [LeetCode713.cpp Subarray Product Less Than K AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode713.cpp)
	* [Leetcode3.cpp  Longest Substring Without Repeating Characters O(n) "slide window search"   AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode3.cpp)
	* [Leetcode209.cpp  Minimum Size Subarray Sum "slide window search"  AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode209.cpp)
	* [LeetCode76.cpp Minimum Window Substring   O(256n)  AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode76.cpp)
	* [LeetCode628.cpp Maximum Product of Three Numbers AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode628.cpp)
	* [LeetCode22.java merge Two Lists AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode22.cpp)
	* [LeetCode4.cpp find Median Sorted Arrays AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode4.cpp)
	* [LeetCode493.cpp Reverse Pairs  AC 相向型指针](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode493.cpp)
* <span id=psum>**prefix sum**</span>
	* **one dimemsion prefix sum**
		* [LeetCode560.cpp Subarray Sum Equals K AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode560.cpp)
		* [LeetCode523.cpp Continuous Subarray Sum AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode523.cpp)
		* [LeetCode974.cpp Subarray Sums Divisible by K TLE](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode974.cpp)
		* [Leet303.cpp Range Sum Query - Immutable AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode303.cpp)
		* [LeetCode307.cpp Range Sum Query - Mutable AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode307.cpp)
		* [POJ3468.cpp Range Sum](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/POJ3468.cpp)
	* **two dimension prefix sum**
		* [LeetCode304.cpp Range Sum Query 2D - Immutable AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode304.cpp)
* <span id=s>sort</span>
    * [LeetCode912.cpp Sort an Array AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode912.cpp)
	    * implement quicksort (最快，最省空间)
		* implement merge sort
			* [LeetCode493.cpp Reverse Pairs  AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode493.cpp) 
		* implement heap sort
	* Cyclic Sort
		* [LeetCode268.cpp Missing Number AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode268.cpp)
		* [LeetCode287.cpp Find the Duplicate Number AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode287.cpp)
		* [LeetCode448.cpp Find All Numbers Disappeared in an Array AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode448.cpp)
		* [LeetCode442.cpp Find All Duplicates in an Array AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode442.cpp)
	* Counting Sort & Radix Sort
		* [LeetCode287.cpp Find the Duplicate Number AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode287.cpp)
		* [LeetCode75.cpp Sort Colors AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode75.cpp)
		* [LeetCode49.cpp Group Anagrams AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode49.cpp)
	* Intervals
		* [LeetCode56.cpp Merge Intervals AC sort+greedy](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode56.cpp)
		* [LeetCode57.cpp Insert Interval  AC   sort+greedy给出了两种方法，都能AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode57.cpp)
		* [LeetCode986.cpp Interval List Intersections  AC  merge的部分实际上和mergesort中的merge有异曲同工之处](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode986.cpp)
		* [LeetCode435.cpp Non-overlapping Intervals  AC   sort+greedy method](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode435.cpp)
		* [LeetCode452.cpp Minimum Number of Arrows to Burst Balloons  AC sort+greedy求相邻区间的交集](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode452.cpp)
		* [LeetCode1288.cpp Remove Covered Intervals  AC sort+greedy](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode1288.cpp)
		* [LeetCode218.cpp The Skyline Problem](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode218.cpp)
	* Line Sweep
		* [LeetCode436.cpp Find Right Interval  AC 解法是利用map，line sweep重点步骤是按照key排序，这里使用map本身的排序特性代替](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode436.cpp)
	* [LeetCode324.cpp Wiggle Sort II AC O(nlogn)](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode324.cpp)
* Data Structure
    * <span id=ms>map and set</span>
        * [LeetCode981.cpp Time Based Key-Value Store  unordered_multimap is time limited, but map is accepted](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode981.cpp)
		* [LeetCode287.cpp Find the Duplicate Number AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode287.cpp)
		* [LeetCode414.cpp Third Maximum Number unordered_map + priority_queue  O(n)  AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode414.cpp)
		* [LeetCode1089.cpp Duplicate Zeros AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode1089.cpp)
		* [LeetCode239.cpp Sliding Window Maximum  AC  multiset](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode239.cpp)
		* [LeetCode480.cpp Sliding Window Median  AC multiset](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode480.cpp)
		* [LeetCode540.cpp Single Element in a Sorted Array AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode540.cpp)
		* [LeetCode350.cpp Intersection of Two Arrays II  Hashtable  O(n)  AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode350.cpp)
		* [LeetCode217.cpp Contains Duplicate AC hash table 去重](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode217.cpp)
		* **priority_queue and map/set can exchange at the solving min/max problem.**
	* <span  id=trie>Trie</span>
	    * [LeetCode208.cpp  Implement Trie (Prefix Tree) AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode208.cpp)
        * [LeetCode211.cpp Add and Search Word - Data structure design AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode211.cpp)
	* <span id=heap>priority_queue</span>
	    * [LeetCode658.cpp Find K Closest Elements AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode658.cpp)
		* [LeetCode703.cpp Kth Largest Element in a Stream AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode703.cpp)
        * [LeetCode973.cpp K Closest Points to Origin AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode973.cpp)
		* [LeetCode692.cpp Top K Frequent Words  AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode692.cpp)
		* [LeetCode347.cpp Top K Frequent Elements AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode347.cpp)
		* [LeetCode451.cpp Sort Characters By Frequency AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode451.cpp)
		* [LeetCode215.cpp Kth Largest Element in an Array O(n+k*logn)   AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode215.cpp)
		* [LeetCode414.cpp Third Maximum Number unordered_map + priority_queue  O(n)  AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode414.cpp)
		* [LeetCode378.cpp Kth Smallest Element in a Sorted Matrix   AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode378.cpp)
		* [LeetCode136.cpp Single Number AC hash table](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode136.cpp)
		* [LeetCode260.cpp Single Number III AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode260.cpp)
		* [LeetCode387.cpp First Unique Character in a String AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode387.cpp)
		* [**LeetCode23.cpp Merge k Sorted Lists O(nlogk)   AC**](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode23.cpp)
		* [LeetCode1046.cpp Last Stone Weight AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode1046.cpp)
	* <span id=q>queue</span>
		* [SimulateQueue.cpp](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/SimulateQueue.cpp)
		* [LeetCode102.cpp Binary Tree Level Order Traversal  AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode102.cpp)
		* [LeetCode107.cpp Binary Tree Level Order Traversal II AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode107.cpp)
		* [LeetCode637.cpp Average of Levels in Binary Tree AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode637.cpp)
		* [LeetCode429.cpp N-ary Tree Level Order Traversal AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode429.cpp)
		* **monotonous stack**
			* [LeetCode239.cpp Sliding Window Maximum  AC  monotonous stack](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode239.cpp)
		* all solutions **level order traversal of tree + queue** 
		* deque
	* linked list
	    * [SimulateLinkedList.cpp AC  UVa Data Structure](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/SimulateLinkedList.cpp)
			* [SimulateDoubleLinkedList.cpp AC  UVa Data Structure](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/SimulateDoubleLinkedList.cpp)
		* [LeetCode66.cpp  Plus One AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode66.cpp)
		* [LeetCode148.cpp sort list AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode148.cpp)
		* [LeetCode206.cpp Reverse Linked List AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode206.cpp)
		* [LeetCode92.cpp Reverse Linked List II AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode92.cpp)
		* [LeetCode203.cpp Remove Linked List Elements AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode203.cpp)
		* [LeetCode19.cpp Remove Nth Node From End of List O(2n) two pass algorithms   AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode19.cpp)
		* [LeetCode147.cpp Insertion Sort List AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode147.cpp)
		* [LeetCode445.cpp Add Two Numbers II AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode445.cpp)
		* [LeetCode83.cpp Remove Duplicates from Sorted List AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode83.cpp)
		    * [LeetCode82.cpp Remove Duplicates from Sorted List II AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode82.cpp)
	* stack
		* [SimulateStack.cpp](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/SimulateStack.cpp)
		* <span id=st>monotonous stack</span>
			* [LeetCode496.cpp Next Greater Element I  AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode496.cpp)
			* [LeetCode503.cpp Next Greater Element II  AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode503.cpp)
			* [LeetCode739.cpp Daily Temperatures AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode739.cpp)
	* <span id=uf>union find</span>
		* [LeetCode128.cpp Longest Consecutive Sequence  AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode128.cpp)
		* [LeetCodeUnionFind.cpp  LeetCode并查集模板，带路径压缩](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCodeUnionFind.cpp)
* <span id=bs>Binary Search</span>
    * [**LeetCode704.cpp Binary Search AC** ](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode704.cpp)
	* [**LeetCode33.cpp Search in Rotated Sorted Array AC(binary search)** 这四道题目其实延伸出很多题目，比如如何在Rotated Sorted Array中找到最小元素的下标并返回？**这里我向社区贡献了一道题目，供参考https://leetcode.com/contribute/18958**](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode33.cpp)
		* [**LeetCode81.cpp Search in Rotated Sorted Array II AC(binary search)**](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode81.cpp)
		* [**LeetCode153.cpp Find Minimum in Rotated Sorted Array AC (binary search)**](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode153.cpp)
		* [**LeetCode154.cpp Find Minimum in Rotated Sorted Array II AC(binary search)** (33 81 153 154解法完全一样)](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode154.cpp)
	* [LeetCode69.cpp Sqrt(x) AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode69.cpp)
	* [LeetCode367.cpp Valid Perfect Square  AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode367.cpp)
	* [LeetCode278.cpp First Bad Version AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode278.cpp)
	* [LeetCode34.cpp Find First and Last Position of Element in Sorted Array AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode34.cpp)
	* [LeetCode374.cpp Guess Number Higher or Lower AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode374.cpp)
	* [**LeetCode162.cpp Find Peak Element AC**](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode162.cpp)
	* [LeetCode852.cpp Peak Index in a Mountain Array AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode852.cpp)
	* [**LeetCode287.cpp Find the Duplicate Number Binary Search AC  interesting problem**](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode287.cpp)
	* [LeetCode35.cpp Search Insert Position AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode35.cpp)
	* [LeetCode744.cpp Find Smallest Letter Greater Than Target AC(binary search)](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode744.cpp)
	* [acwing67.cpp 数字在排序数组中出现的次数 AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/acwing67.cpp)
	* [**LeetCode215.cpp Kth Largest Element in an Array binary search** O(n)时间复杂度 O(1)空间复杂度，比heap更省空间](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode215.cpp)
	* [**LeetCode378.cpp Kth Smallest Element in a Sorted Matrix   AC binary search 思路同LeetCode215.cpp**](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode378.cpp)
	* [LeetCode167.cpp Two Sum II - Input array is sorted binary search](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode167.cpp)
	* [LeetCode540.cpp Single Element in a Sorted Array  AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode540.cpp)
	* [LeetCode349.cpp Intersection of Two Arrays O(n)  AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode349.cpp)
	* [LeetCode74.cpp Search a 2D Matrix  AC nlogn](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode74.cpp)
	* [**LeetCode653.cpp Two Sum IV - Input is a BST AC  binary search** 树形结构二分](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode653.cpp)
	* [LeetCode108.cpp Convert Sorted Array to Binary Search Tree  AC  树形结构二分](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode108.cpp)
		* [LeetCode109.cpp Convert Sorted List to Binary Search Tree AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode109.cpp)
	* [**LeetCode230.cpp Kth Smallest Element in a BST AC (binary search & in-order traversal)**](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode230.cpp)
	* [**LeetCode719.cpp Find K-th Smallest Pair Distance   (单纯的使用binary search 或者 heap均 TLE Hard)，其中binary search的方法和leetcode 215思路一致** ](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode719.cpp)
	* [**LeetCode786.cpp K-th Smallest Prime Fraction (单纯的使用binary search 或者 heap均 TLE Hard)**](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode786.cpp)
	* [LeetCode658.cpp Find K Closest Elements AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode658.cpp)
	* [LeetCode1200.cpp Minimum Absolute Difference AC  Binary search](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode1200.cpp)
	* [LeetCode275.cpp H-Index II AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode275.cpp)
* <span id=t>BFS and DFS of Tree，including Binary Search Tree, Binary Tree and N-ary Tree</span>
    * [LeetCode701.cpp Insert into a Binary Search Tree  AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode701.cpp)
    * [LeetCode102.cpp Binary Tree Level Order Traversal  AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode102.cpp)
    * [LeetCode107.cpp Binary Tree Level Order Traversal II AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode107.cpp)
    * [LeetCode637.cpp Average of Levels in Binary Tree AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode637.cpp)
    * [LeetCode429.cpp N-ary Tree Level Order Traversal AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode429.cpp)
    * [LeetCode1305.cpp All Elements in Two Binary Search Trees AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode1305.cpp)
    * [LeetCode1302.cpp Deepest Leaves Sum AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode1302.cpp)
	* [LeetCode100.cpp Same Tree AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode100.cpp)
	* [LeetCode230.cpp Kth Smallest Element in a BST AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode230.cpp)
	* [LeetCode222.cpp Count Complete Tree Nodes AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode222.cpp)
	* [LeetCode104.cpp Maximum Depth of Binary Tree AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode104.cpp)
    * [LeetCode559.cpp Maximum Depth of N-ary Tree AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode559.cpp)
	* [LeetCode257.cpp Binary Tree Paths AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode257.cpp)
	* [LeetCode111.cpp Minimum Depth of Binary Tree AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode111.cpp)
	* [LeetCode112.cpp Path Sum AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode112.cpp)
	* [LeetCode113.cpp Path Sum II AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode113.cpp)
	* [LeetCode1161.cpp Maximum Level Sum of a Binary Tree AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode1161.cpp)
	* [LeetCode965.cpp Univalued Binary Tree AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode965.cpp)
	* [LeetCode653.cpp Two Sum IV - Input is a BST AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode653.cpp)
	* [LeetCode513.cpp Find Bottom Left Tree Value AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode513.cpp)
	* [LeetCode515.cpp Find Largest Value in Each Tree Row AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode515.cpp)
	* [LeetCode129.cpp Sum Root to Leaf Numbers AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode129.cpp)
	* [leetCode103.cpp Binary Tree Zigzag Level Order Traversal AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode103.cpp)
	* [LeetCode938.cpp Range Sum of BST AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode938.cpp)
	* [LeetCode144.cpp Binary Tree Preorder Traversal AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode144.cpp)
	* [LeetCode145.cpp Binary Tree Postorder Traversal AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode145.cpp)
	* [LeetCode94.cpp Binary Tree Inorder Traversal AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode94.cpp)
	* [LeetCode173.cpp Binary Search Tree Iterator AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode173.cpp)
	* [LeetCode590.cpp N-ary Tree Postorder Traversal AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode590.cpp)
	* [LeetCode589.cpp N-ary Tree Preorder Traversal AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode589.cpp)
	* [LeetCode700.cpp Search in a Binary Search Tree AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode700.cpp)
	* [LeetCode110.cpp Balanced Binary Tree  AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode110.cpp)
	* Construction Tree
		* [LeetCode108.cpp Convert Sorted Array to Binary Search Tree  AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode108.cpp)
			* [LeetCode109.cpp Convert Sorted List to Binary Search Tree AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode109.cpp)
		* [LeetCode1008.cpp Construct Binary Search Tree from Preorder Traversal AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode1008.cpp)
	* [LeetCode17.cpp Letter Combinations of a Phone Number  AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode17.cpp)
	* [LeetCode1022.cpp Sum of Root To Leaf Binary Numbers](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode1022.cpp)
	* [LeetCode127.cpp Word Ladder 双向BFS]()
	* [LeetCode988.cpp Smallest String Starting From Leaf]()
	* [LeetCode1376.cpp Time Needed to Inform All Employees]()
	* [LeetCode124. Binary Tree Maximum Path Sum   LevelOrder + 最大连续子数组和  Hard]()
* <span id=ggg>Graph Algorithms</span>
    * [LeetCodeGraphTraversalTemplate.cpp  图的DFS和BFS模板，保存图时采用了邻接列表的方式，不用邻接矩阵(浪费空间和时间)](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCodeGraphTraversalTemplate.cpp)
	* Topological Sort
* 其它
	* insertSort(int[] arr);  插入排序
	* insertSortRecurtion(int[] arr,int length); 插入排序
	* selectionSort(int[] arr);  选择排序
	* bubbleSort(int[] arr); 冒泡排序
	* findMaximumSubarray(int[] arr,int start, int end);  寻找最大子数组问题，采用递归解法，时间复杂度为O(nlogn)
	* priorityqueue(int arr[],int length); priority queue is implenented by using maximum heap
	* countingsort(int arr[], int length); counting sort. The time complexity of is linear time. It is not based on the comparsion.
	* enhancingMethod(int arr[],int length);  find the maximum and minmum for enhancing method.The number of comparision decreases.
	* HDOJ1000; AC
	* HDOJ1001; AC
	* HDOJ1002; AC
	* HDOJ1003; AC
	* HDOJ1004; AC
	* HDOJ1005; AC
	* HDOJ1006; AC
	* HDOJ1066; AC
	* HDU2001-HDU2017; Practise the C++ language properties in HDUOJ page 11. AC

### **3. 算法设计技术**


* <span id=dp>Dynamic Programming</span>
	* 坐标型
		* [LeetCode322.cpp Coin Change  AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode322.cpp)
		* [LeetCode62.cpp Unique Paths AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode62.cpp)
	* 位操作型
	* 序列型
		* [LeetCode152.cpp Maximum Product Subarray AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode152.cpp)
	* 划分型
	* 博弈型
		* [LeetCode55.cpp Jump Game DP(TLE) 存在一个greedy的解](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode55.cpp)
	* 背包型
	* 区间型
	* 双序列型

* <span id=gd>Greedy Algorithms</span>
	* [LeetCode55.cpp Jump Game 存在一个greedy的解  AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode55.cpp)
	* [LeetCode56.cpp Merge Intervals AC sort+greedy](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode56.cpp)
	* [LeetCode57.cpp Insert Interval  AC   sort+greedy给出了两种方法，都能AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode57.cpp)
	* [LeetCode986.cpp Interval List Intersections  AC  merge的部分实际上和mergesort中的merge有异曲同工之处](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode986.cpp)
	* [LeetCode435.cpp Non-overlapping Intervals  AC   sort+greedy method](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode435.cpp)
	* [LeetCode452.cpp Minimum Number of Arrows to Burst Balloons  AC sort+greedy求相邻区间的交集](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode452.cpp)
	* [LeetCode1288.cpp Remove Covered Intervals  AC sort+greedy](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode1288.cpp)
	
* <span id=bf>Brute Force Search</span>
	* <span id=dfs>**DFS + Backtrack**</span>
		* [LeetCode17.cpp Letter Combinations of a Phone Number  AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode17.cpp)
		* [LeetCode39.cpp Combination Sum AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode39.cpp)
		* [LeetCode40. Combination Sum II AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode40.cpp)
		* [LeetCode216. Combination Sum III AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode216.cpp)
		* [LeetCode46.cpp Permutations  AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode46.cpp)
		* [LeetCode47.cpp Permutations II  AC 先排序去重](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode47.cpp)
		* [LeetCode78.cpp Subsets AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode78.cpp)
		* [LeetCode90.cpp Subsets II AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode90.cpp)
		* [LeetCode77. Combinations  AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode77.cpp)
		* [LeetCode79.cpp Word Search AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode79.cpp)
		* [LeetCode60.cpp Permutation Sequence AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode60.cpp)
		* [LeetCode1286.cpp Iterator for Combination  AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode1286.cpp)
	    * [LeetCode52.cpp N-Queens II AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode52.cpp)
	* <span id=bfs>BFS + Branch-and-Bound</span>
		* [LeetCode17.cpp Letter Combinations of a Phone Number  AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode17.cpp)
	
* <span id=rec>Recursive</span>
	* [LeetCode493.cpp Reverse Pairs  AC](https://github.com/JunpengCode/Algorithms/blob/master/Traditional-Algorithms/LeetCode493.cpp) 

### <span id=ats>**4. 时空复杂度分析**</span>


#### **4.1 理论**


写完算法后，通常情况下，我们需要对算法进行时空复杂度分析对比性能。有一种对比方法是将对比的算法放在同一台机器上运行统计时间，我们把这种方法称为“事后统计法“。但是这种方法存在明显的缺陷，当数据规模发生变化，或者运行在不同的处理器上时，算法的性能可能会存在较大的差异。因此，对于不同的算法，合理地给出算法运行的上下界很有必要。**在一个算法种，通常可以只分析算法种的循环、递归等部分。**空间复杂度分析相对于时间复杂度分析就要简单的多，只需要关注代码中最浪费存储的部分就可以了。

```C
 int cal(int n) {
   int sum = 0;
   int i = 1;
   for (; i <= n; ++i) {
     sum = sum + i;
   }
   return sum;
 }
```

如上述代码，在上述代码中，只有for循环中的`sum+=i`被执行了n次，其它代码的执行均与n无关。本例中，我们将算法的时间复杂度表示为O(n)，表示算法的执行时间与n成线性比例。在算法分析中，用大O表示时间复杂度，大O不是算法的真正执行时间，而是表示代码的执行时间随数据规模增长的变化趋势，所有我们也称为渐进时间复杂度。常见的时间复杂度包括：

$O(1) < O(lgn) < O(n) < O(nlogn) < O(n^2) < O(2^n) < O(n!)$ 其中，$O(2^n) < O(n!)$ 被称为$NP$难问题。<font color="red">为使得公式能够真长显示，请在chrome的扩展程序中，打开chrome网上应用店，然后搜索MathJax Plugin for Github，下载该插件，并且启用，就可以让上述公式正常显示。</font>

在时空复杂度分析中，有下面三个法则：

* 只关注循环执行次数最多的一段代码
* 加法法则：总复杂度等于量级最大的那段代码的复杂度，该法则适用于多段平行代码段，总的时间复杂度为最大
* 乘法法则：嵌套代码的复杂度等于嵌套内外代码复杂度的乘积

#### 4.2 最好，最坏、平均、时间复杂度分析


3.1节讲了基本的时间复杂度表示方法，本节将重点讲述最好、最坏、平均、均摊时间复杂度分析，这样便有了完整的时间复杂度分析方法。

```C
// n 表示数组 array 的长度
int find(int[] array, int n, int x) {
  int i = 0;
  int pos = -1;
  for (; i < n; ++i) {
    if (array[i] == x) pos = i;
  }
  return pos;
}
```

上述代码的时间复杂度为O(n)，代码性能较差，修改为下面部分：

```C
// n 表示数组 array 的长度
int find(int[] array, int n, int x) {
  int i = 0;
  int pos = -1;
  for (; i < n; ++i) {
    if (array[i] == x) {
       pos = i;
       break;
    }
  }
  return pos;
}
```

如上代码，在**最好情况下：数组的首元素的值与x相等，此时时间复杂度为O(1)，在最坏情况下：遍历整个数组，但是仍然没有找到对应的元素，此时的时间复杂度为O(n)。**至于平均时间复杂度的分析稍微复杂一些，**平均之间复杂度又称为期望时间复杂度或加权时间复杂度。**在本例中，有n个元素，每个元素都有$1/n$的可能性被选中，并且被选中的元素有$1/2$的可能性等于x，因此：

$1 * 1/(2n) + 2 * 1/(2n) + ... + n * 1/(2n) + n * 1/2= (3n+1)/4$ 

上述值就是每个位置可能出现等于x的情况的加权平均值，也叫做期望值，所以平均时间复杂度的全称应该叫做加权平均时间复杂度或者期望时间复杂度。上述值用大O表示为O(n)。另外一种分析方法是，总共有n+1种情况，n种情况下找到该元素，1种情况下元素不在数组中，如下：

$(1+2+...+n+n)/(n+1) = n(n+3)/(2(n+1))$

这种分析方法没有考虑每种情况出现的概率，不可取。

#### **4.3 均摊时间复杂度分析**


上述两节之后我们已经初步掌握了时间复杂度的分析方法，本节介绍均摊时间复杂度，均摊时间复杂度对应于算法中的摊还分析(或者叫平摊分析)。相比最好、最差、平均时间复杂度，均摊时间复杂度的使用场景更加特殊、更加有限。

```C
 // array 表示一个长度为 n 的数组
 // 代码中的 array.length 就等于 n
 int[] array = new int[n];
 int count = 0;
 
 void insert(int val) {
    if (count == array.length) {
       int sum = 0;
       for (int i = 0; i < array.length; ++i) {
          sum = sum + array[i];
       }
       array[0] = sum;
       count = 1;
    }

    array[count] = val;
    ++count;
 }
```

这段代码实现了往数组中插入数据的功能。当数组满了之后，也就是代码中 count==array.length时，通过for循环遍历数组求和，并清空数组，将求和之后的sum值放到数组的第一个位置，然后再将心得数据插入。当数组一开始有空闲位置时，则直接将数据插入数组。

**最好情况下时间复杂度**：O(1)，此时数组未满，并且由于count会自动执行加1操作，因此不用遍历找寻空位。

**最坏情况下时间复杂度**：O(n)，此时数组装满，首先需要遍历数组的全部元素执行累加操作，接着将累加后的和放入到数组的0位置上，然后count执行加1操作指向下一个位置，后续操作与最好情况下时间复杂度吻戏类似。

**平均时间复杂度**：假设数组的长度为n，根据插入的位置不同，可以将其分为n中情况，每种情况的时间复杂度都为O(1)，除此之外，还有一种当数组没有空闲位置时的情况，此时的时间复杂度为O(n)，而且这n+1中情况发生的概率一样，都是$1/(n+1)$，所以根据加权平均的计算方法，平均时间复杂度为：

$1 * 1/(n+1) + 1 * 1/(n+1)  ... + n * 1/(n+1)  = O(1)$

到目前位置，最好情况下时间复杂度、最坏情况下时间复杂度、平均情况下时间复杂度的计算，理解起来都没有任何问题。但是这个例子的平均复杂度分析其实并不需要上述那样复杂，不需要引入概率论的知识。这是为什么呢？其实将本例的insert()和前面的find()进行对比，可以知道，find()函数在极端情况下复杂度才为O(1)，但是insert在大部分情况下，时间复杂度都为O(1)，只有当数组没有空闲位置时，采薇O(n)。其次对于insert()，O(1)时间复杂度的插入和O(n)时间复杂度的插入，出现的频率是非常有规律的，而且有一定的前后时序关系，一般都是一个O(n)插入只有，紧跟着$n-1$个O(1)的插入操作，循环往复。所以针对这种特殊的场景，我们引入了一种更加简单的分析方法：摊还分析法，通过摊还分析得到的时间复杂度，本文给其命名为均摊时间复杂度。**那究竟如何使用摊还分析法来分析算法的均摊时间复杂度呢？**

我们还是继续看在数组中插入数据的例子。每一次O(n)的插入操作，都会跟着n-1次O(1)的插入操作，所以把时间耗时多的那次操作均摊到接下来的n-1次耗时少的操作上，均摊下来，这一组连续的操作的均摊时间复杂度就是O(1)，这就是均摊分析的大致思路。均摊时间复杂度和弹摊还分析的应用场景比较复杂，所以我们并不会经常用到。为了方便理解和记忆，本文总结了一下它们的应用场景。如果你以后遇到了，知道是怎么回事就行了。

对一个数据结构进行的操作中，大部分情况下时间复杂度都很低，只有个别情况下时间复杂度比较高，而且这些操作之间存在前后连贯的时序关系，这个时候，我们就可以将这一组操作放在一块儿分析，看是否能够将较高时间复杂度的那次操作的耗时平摊到其它时间复杂度较低的操作上。而且，在能够应用平摊时间复杂度的分析场景中，一般均摊时间复杂度就等于最好情况下的时间复杂度。

尽管许多数据结构和算法书籍都花了很大的力气来区分平均时间复杂度和均摊时间复杂度，但是其实我认为，均摊时间复杂度就是一种特殊的平均时间复杂度，我们没必要花太多的精力去区分它们。我们应该花时间去掌握它的分析方法，摊还分析法。至于分析出来的结果叫平均还是均摊，并不重要。



#### **4.4 总结**

之所以引入最好时间复杂度、最坏时间复杂度、平均时间复杂度、均摊时间复杂度这些概念，是因为很多算法，在不同的输入情况下，算法的时间复杂度不一样。在引入这些概念以后，我们能够更加全面的表示算法的时间复杂度。



```C
// 全局变量，大小为 10 的数组 array，长度 len，下标 i。
int array[] = new int[10]; 
int len = 10;
int i = 0;

// 往数组中添加一个元素
void add(int element) {
   if (i >= len) { // 数组空间不够了
     // 重新申请一个 2 倍大小的数组空间
     int new_array[] = new int[len*2];
     // 把原来 array 数组中的数据依次 copy 到 new_array
     for (int j = 0; j < len; ++j) {
       new_array[j] = array[j];
     }
     // new_array 复制给 array，array 现在大小就是 2 倍 len 了
     array = new_array;
     len = 2 * len;
   }
   // 将 element 放到下标为 i 的位置，下标 i 加一
   array[i] = element;
   ++i;
}
/*答案：
最好时间复杂度O(1)，最坏时间复杂度O(n)，平均时间复杂度O(1)，均摊时间复杂度为O(1)
假设数组的长度为n，当数组未满时，每次往数组中添加元素的时间复杂度都为O(1)，当数组满时，需要O(n)的操作进行复制，并且这两个操作具有严格的时序关系，因此可以将复制的操作摊还给前面n-1次操作中，最终得到的时间复杂度仍然为O(1)
平均时间复杂度计算：
1 * 1/(n+1) + 1 * 1/(n+1)  ... + n * 1/(n+1)  = O(1)
*/
```

### **参考文献**


* http://www.cs.cmu.edu/~anupamg/advalgos15/
* http://speech.ee.ntu.edu.tw/~tlkagk/courses_ML20.html
* http://erikdemaine.org/classes/

## 作者

Junpeng Zhu, jpzhu.gm@gmail.com

## 协议

<img src='https://www.gnu.org/graphics/gplv3-127x51.png' width='127' height='51'/>

更多信息参见[协议文件](/LICENSE)。

<img src='https://raw.githubusercontent.com/EyreFree/EFArticles/master/res/cc-by-nc-nd.png' width='145.77' height='51'/>

[署名-非商业性使用-禁止演绎](http://creativecommons.org/licenses/by-nc-nd/3.0/cn/)。
