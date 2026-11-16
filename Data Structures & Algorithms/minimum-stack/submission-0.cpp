class  MinStack
 {
    	stack<int> st;
	stack<int> minstack;
public:

  MinStack() {
        
    }
    
  
    
  	void push(int x){
		
		st.push(x);
		
		if(minstack.empty()||x<=minstack.top()){
			
			minstack.push(x);
		}
		else
			minstack.push(minstack.top());
	}
    
  void pop(){
		
		if(st.empty())
			return;
		
		st.pop();
		minstack.pop();
	}
    
   int top(){
		
		if(st.empty())
			return -1;
		
		return st.top();
	}
    	int getMin(){
		
		if(minstack.empty())
			return -1;	
	
	return minstack.top();
	}	
    
    
};
