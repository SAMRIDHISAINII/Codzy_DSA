/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(x) {
    let a = x.toString().split('')
    
    let num;
    
    if(a[0] == '-') 
    {
        let c = a.shift()
        num = parseInt(c +a.reverse().join(''))
    } 
    else 
//          first argument to a string, parses that string, then returns an integer 
    {
       num = parseInt(a.reverse().join(''))
    }
    
    if(Math.abs(num) > Math.pow(2, 31)) {
        num = 0;
    }
    
    return num
};
