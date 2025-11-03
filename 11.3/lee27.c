#include<stdio.h>
int removeElement(int* nums,int numsSize, int val) {
    if(numsSize == 0){
        return 0;
    }//如果数组长度为0则没有相异元素
    int numcopy[numsSize];
    int i = 0;
    for(int j = 0;j<numsSize;j++){
        if(nums[j] != val){
            numcopy[i] = nums[j];
            i++;
        }
    }
    for(int j = 0;j<i;j++){
        nums[j] = numcopy[j];
    }
    return i;


}
int main(void){
    int nums[] ={3,2,2,3}; // 输入数组
int val =2;  // 要移除的值
    int numsSize =sizeof(nums)/sizeof(nums[0]);
int k = removeElement(nums, numsSize,val); // 调用你的实现
printf("%d\n",k);
for(int i = 0;i<k;i++){
    printf("%d\n",nums[i]);
}



}