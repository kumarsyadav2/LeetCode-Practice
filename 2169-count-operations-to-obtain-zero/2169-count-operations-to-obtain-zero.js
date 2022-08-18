/**
 * @param {number} num1
 * @param {number} num2
 * @return {number}
 */
var countOperations = function(num1, num2) {
    let op = 0;
    while(num1 != 0 && num2!=0){
        if(num1>=num2){
            num1-=num2;
            op++;
        }
        else{
            num2-=num1;
            op++;
        }
    }
    return op;
};