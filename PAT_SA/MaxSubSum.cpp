/*
Given a sequence of K integers { N​1​​ , N​2​​ , …, N​K​​ }. A continuous subsequence is defined to be { N​i​​ , N​i+1​​ , …, N​j​​ } 
where 1≤i≤j≤K. The Maximum Subsequence is the continuous subsequence which has the largest sum of its elements. For example, given 
sequence { -2, 11, -4, 13, -5, -2 }, its maximum subsequence is { 11, -4, 13 } with the largest sum being 20.
Now you are supposed to find the largest sum, together with the first and the last numbers of the maximum subsequence.
给定有K个整数的序列{N 1，N 2，…，N K}。连续子序列被定义为{N i，N i + 1，…，N j}，其中1≤i≤j≤K。最大子序列是连续子序列，其子元素的总和最大。例如，
给定序列{-2,11，-4,13，-5，-2}，其最大子序列是{11，-4,13}，最大和为20。
现在你应该找到最大的总和，以及最大子序列的第一个和最后一个数字。
输入：
Each input file contains one test case. Each case occupies two lines. The first line contains a positive integer K (≤10000). The 
second line contains K numbers, separated by a space.
每个输入文件包含一个测试用例。每个案例占两行。第一行包含正整数K（≤10000）。第二行包含K个数字，用空格分隔。
输出：
For each test case, output in one line the largest sum, together with the first and the last numbers of the maximum subsequence. 
The numbers must be separated by one space, but there must be no extra space at the end of a line. In case that the maximum subsequence
is not unique, output the one with the smallest indices i and j (as shown by the sample case). If all the K numbers are negative, then 
its maximum sum is defined to be 0, and you are supposed to output the first and the last numbers of the whole sequence.
对于每个测试用例，在一行中输出最大总和，以及最大子序列的第一个和最后一个数字。数字必须用一个空格分隔，但在一行的末尾必须没有多余的空格。在最大子序列
不唯一的情况下，输出具有最小索引i和j的那个（如示例情况所示）。如果所有K个数都是负数，则其最大总和定义为0，并且您应该输出整个序列的第一个和最后一个数
字。
样本示例：
输入：
10
-10 1 2 3 4 -5 -23 3 7 -21
输出：
10 1 4
*/

#include<iostream>
using namespace std;
#define MAX 100000

int main(){
  int K;
  cin>>K;
  int a[MAX]={0};
  for(int i=0;i<K;i++){
    cin>>a[i];
  }
  //计算最大子列和 
  int maxsum=-1,sum=0;
  int first=0,last=K-1; 
  int b=0;
  for(int j=0;j<K;j++){
    sum=sum+a[j];
    if(sum>=0){
    	if(sum>maxsum){
      		maxsum=sum;
      		if(first!=b){
      			first=b;
	  		}
	  		last=j;
		}
	}
    else{
      sum=0;
      b=j+1;
    }
}
    if(maxsum<0){
    	maxsum=0;
	}
  cout<<maxsum<<" "<<a[first]<<" "<<a[last];
  return 0;
}
