/**
 * @return {Function}
 */
var createHelloWorld = function() {
    
    return function(...args) {
         const ans = "Hello World";
         return ans;
    }
};

/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */