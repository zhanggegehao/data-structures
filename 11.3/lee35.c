#include<stdio.h>
int searchInsert(int* nums, int numsSize, int target) {
    int i =0;
    for(;i<numsSize;i++)
    {
      if(nums[i] < target)
      {
        continue;
      }
      if(nums[i] == target)
     {
        return i;
     }
     if(nums[i] > target)
     {
    
         return i;
     }
     
    }
    // 当target大于数组中所有元素时，返回数组末尾的下一个位置

    return i;
}//通过了，但应该使用二分法来进行查询的下面通过二分法来写一个

//二分查找
int searchInsert2(int* nums, int numsSize, int target) {
 int start = 0;
 int last = numsSize - 1;
 int median = (start + last)/2;
while( start != last ){
  if (target != nums[ median ]){
    printf("start %d\n",start);
    printf("last %d\n",last);
    printf("median %d\n",median);
  

   if( target >nums[median]) start = median;
    if( target < nums[median]) last = median ;
    median = (start + last )/2;
  

 }else{
  return median ;
 } 
}
 
}

//学习过后的标准二分查找
int searchInsert3(int* nums, int numsSize, int target) {
  int right = 0;
  int left = numsSize - 1 ;
  while(right <= left)
  {
    int mid = (left - right)/2 + right;
    if(nums[mid] < target) right = mid + 1;
    else left = mid - 1;
    if(nums[mid] == target)return mid;
  }
  return -1;
}//非常巧妙啊，right返回刚好是那个位置无论什么情况都是

int main(void)
{
    int nums[]={1,3,5,6};
    int target  = 77;
    int numsSize =sizeof(nums)/sizeof(nums[0]);
 printf("%d\n",searchInsert3(nums,numsSize,target));
 

    return 0;
}