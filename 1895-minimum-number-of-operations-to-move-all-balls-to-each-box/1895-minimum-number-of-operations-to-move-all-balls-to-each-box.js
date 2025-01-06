/**
 * @param {string} boxes
 * @return {number[]}
 */
var minOperations = function(boxes) {
    const len=boxes.length;
    const opera=new Array(len).fill(0);
    for(let i=1,c=0;i<len;i++)
    {
        if(boxes[i-1]=='1')
        {
            ++c;
        }
        opera[i]=opera[i-1]+c;
    }

    for (let i = len - 2, c = 0, sum = 0; i >= 0; --i) {
        if (boxes[i + 1] === '1') {
            ++c;
        }
        sum += c;
        opera[i] += sum;
    }

    return opera;
};