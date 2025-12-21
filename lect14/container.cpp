#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//brute force approach
int mostWater(int height[9],int size){
    int maxWater=0,h,w;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            int width=j-i;
            int hei=min(height[i],height[j]);
            int ans=hei*width;
            if(ans>maxWater){
                maxWater=ans;
            }
        }
    }
    
    return maxWater;
}

//more optimised way
int maxWater(int height[9],int size){
    int lp=0,rp=size-1,maxWater=0;
    while(lp < rp){
        int w=rp - lp;
        int h=min(height[rp],height[lp]);
        int currWater=w*h;
        maxWater=max(currWater,maxWater);
        if(height[lp]<height[rp]){
            lp++;
        }
        else{
            rp--;
        }
    }
    return maxWater;
}

int main(){
    int height[9]={1,8,6,2,5,4,8,3,7};
    int size=9;
    // cout<< mostWater(height,size);
    cout<< maxWater(height,size);

}