/**
 * @param {Function} fn
 * @return {Function}
 */
var curry = function(fn) {
  let result = [];
  return function curried(...args) {
    result.push(...args);
    if (result.length < fn.length) return curried;
    return fn(...result);
  };
};

/**
 * function sum(a, b) { return a + b; }
 * const csum = curry(sum);
 * csum(1)(2) // 3
 */
