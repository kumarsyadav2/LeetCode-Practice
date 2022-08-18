/**
 * @param {number[][]} accounts
 * @return {number}
 */
var maximumWealth = function(accounts) {
     let max = 0,sum;
        for(let i=0;i<accounts.length;i++){
            sum = 0;
            for(let j=0;j<accounts[0].length;j++){
                sum+=accounts[i][j];
            }
            if(max<sum) max=sum;
        }
        return max;
};