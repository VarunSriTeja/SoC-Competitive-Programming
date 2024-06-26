class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> asteroid;
        for(int a : asteroids){
            if(a>0){
                asteroid.push(a);
            }
            else{
                while(!asteroid.empty() && asteroid.top()>0 && asteroid.top()<-a){
                    asteroid.pop();
                }
                if(asteroid.empty()||asteroid.top()<0){
                    asteroid.push(a);
                }
                if(!asteroid.empty() && asteroid.top()==-a){
                    asteroid.pop();
                }
            }
        }
        vector<int> final(asteroid.size());
        for(int i=asteroid.size()-1;i>=0;i--){
            final[i]=asteroid.top();
            asteroid.pop();
        }
        return final;
    }
};
