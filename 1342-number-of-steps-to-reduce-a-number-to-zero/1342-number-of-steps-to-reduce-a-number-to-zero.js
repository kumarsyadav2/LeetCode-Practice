/**
 * @param {number} num
 * @return {number}
 */
var numberOfSteps = function(num) {
     let a = 0;
        while(num!=0){
            if(num%2==0){
                a++;
                num/=2;
            }
            if(num%2!=0){
                num--;
                a++;
            }
        }
        return a;
};