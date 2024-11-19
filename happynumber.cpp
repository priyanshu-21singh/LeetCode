class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seenb;
    
        while(n!=1&&seenb.find(n)==seenb.end()) {
            seenb.insert(n);
            n=getNext(n);
        }
        return n==1;
    }

private:
  int getNext(int n){
    int totalsum=0;
    while(n>0){
        int digit=n%10;
        totalsum+=digit*digit;
        n/=10;
    }
    return totalsum;
  }

};