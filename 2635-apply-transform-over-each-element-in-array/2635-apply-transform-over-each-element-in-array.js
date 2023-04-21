/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    var returnedArray = new Array();
    for(var i=0;i<arr.length;i++)
    returnedArray[i] = fn(arr[i], i);
    
    return returnedArray;
};