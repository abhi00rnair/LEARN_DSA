/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    var rett=[];
    for(var i=0;i<arr.length;i++){
        rett.push(fn(arr[i],i));
    }
    return rett;
};