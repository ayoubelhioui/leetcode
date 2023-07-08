/**
 * @param {string} s
 * @return {string}
 */
var frequencySort = function(s) {
    let map = new Map();
    for (let c of s)
        map.set(c, (map.get(c) || 0) + 1);
    const arr = [...map];
    arr.sort((a, b)=> b[1] - a[1]);
    const str = arr.map(([c, f])=>{
        return (c.repeat(f));
    }).join('');
    return (str);
};