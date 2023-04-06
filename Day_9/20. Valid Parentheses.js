/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function(s) {
    let stack = [];
    for(let i=0; i<s.length; i++){
        if(s[i] === '(' || s[i] === '{' || s[i] === '[')
            stack.push(s[i]);
        else if(stack.length===0)
            return false;
        else if(s[i]===')' && s[-1]==='(' || s[i]==='}' && s[-1]==='{' || s[i]===']' && s[-1]==='[' )
            s.pop();
        else
            return false;
    }
    if(stack.length===0) return true;
    else return false;
};
