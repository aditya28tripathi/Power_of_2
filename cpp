 public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        
        // Your code here
        if(n==1)
        return true;
        
        
        if(n%2!=0||n==0)
            return false;
            
            
        isPowerofTwo(n/2);
        
  
   
    
     
    
   
    }
    
