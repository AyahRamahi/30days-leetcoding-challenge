class StockSpanner {
public:
    stack <int> prices;
    stack<int> freqs;

    StockSpanner() {

    }

    int next(int price) {
        int result=1;
        if(!prices.empty() && price<prices.top()){
            prices.push(price);
            freqs.push(1);
        }
        else{
            while(!prices.empty() && price>=prices.top()){
                result += freqs.top();
                freqs.pop();
                prices.pop();
            }
            prices.push(price);
            freqs.push(result);
        }
        return result;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
