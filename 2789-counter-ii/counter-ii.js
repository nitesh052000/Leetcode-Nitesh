/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
      let currentcount = init;

      function increment(){
        return ++currentcount;
      }

      function decrement(){
        return --currentcount;
      }

      function reset(){
        return (currentcount=init);
      }

      return {increment,decrement,reset};
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */