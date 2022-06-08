int maxProfit(vector<int>& price) {
        
    int i,maxprofit=0,minprice=price[0],curprice,profit;
    
    for(i=1;i<price.size();i++)
    {
        curprice = price[i];
        profit = curprice - minprice;
        maxprofit = max(maxprofit,profit);
        minprice = min(minprice, curprice);
    }
        return maxprofit;
    }
