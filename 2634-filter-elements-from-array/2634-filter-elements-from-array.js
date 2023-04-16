/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    var res = new Array;
    n=arr.length;
    arr.forEach((x,i)=>{
        if(fn(x,i)){
            res.push(x);
        }
    });
    return res;
};