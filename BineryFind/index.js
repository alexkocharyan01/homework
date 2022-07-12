let array  = [12, 34, -3, 43, 32, 32, 0, 1, 2, -43, 5];

function findIndex(arr, arg){
    let res
    for(let i = 0; i < arr.length; ++i){
        if(arr[i] === arg){
            res = arg
        } 
    }
    if(res) {
        return true
    } else {
        return false
    }
}

console.log(findIndex([34, 2, 54, 5, 65, -43, 0, 6, -10, 4, 11], -10))
