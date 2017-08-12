// Source : https://leetcode.com/problems/array-partition-i/description/
// Author : universes
// Date   : 2017-08-13

/**********************************************************************
 * Discription:
 *
 * Given an array of 2n integers, your task is to group these integers into n pairs of integer, say (a1, b1), (a2, b2), ..., (an, bn) which makes sum of min(ai, bi) for all i from 1 to n as large as possible.
 * 
 * Example 1:
 * 
 * Input: [1,4,3,2]
 * 
 * Output: 4
 * Explanation: n is 2, and the maximum sum of pairs is 4 = min(1, 2) + min(3, 4).
 * 
 * Note:
 * 
 *     a).n is a positive integer, which is in the range of [1, 10000].
 *     b).All the integers in the array will be in the range of [-10000, 10000].
 *
 * Thinking:
 *    First, sort the array( using insertion sort algorithm);
 *    Second, each two adjacent elements for a group;
 *    Third, choose the left element of each group, then add them together;
 *    Finally, congratulations!
 *
 ***********************************************************************/
 
//function declaration

void insertionSort(int* array, int numsSize);

//function definition

int arrayPairSum(int* nums, int numsSize) {
    insertionSort(nums,numsSize);
    int midCut = (numsSize+1) / 2;
    int i, sum=0;
    for(i=0; i<numsSize; i+=2){
        sum += nums[i];
    }
    
    return sum;
}

void insertionSort(int* array, int numsSize){
    int i, j, temp;
    for(i=1; i<numsSize; i++){
        temp = array[i];
        for(j=i; j>0 && array[j-1]>temp; j--){//*
            array[j] = array[j-1];
        }
        array[j] = temp;
    }
}
