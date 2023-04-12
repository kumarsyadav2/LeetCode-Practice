/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    var res = 0;
    var n = nums.length;
    if(n==0) return init;
    for(var i =0;i<n;i++){
        res = fn(init, nums[i]);
        init = res;
    }
    return res;
};