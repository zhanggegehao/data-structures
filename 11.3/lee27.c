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


}//这个是我原本的写法就是再加一个数组来存储相异元素，最后再复制回原数组
int removeElement2(int* nums,int numsSize, int val) {
    if(numsSize == 0){
        return 0;
    }//如果数组长度为0则没有相异元素
    int i = 0;
    for(int j = 0;j<numsSize;j++){
        if(nums[j] != val){
            nums[i] = nums[j];
            i++;
        }//因为有个判断j的肯定会大于等于i,这样就可以遍历整个数组了
    }
    return i;
}//这个是优化后的写法，直接在原数组上操作，不需要额外的数组来存储相异元素

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