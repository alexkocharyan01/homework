function reverse(arr){
    let arr2 = " ";

    for(let i = arr.length - 1; i>= 0;  i--){
     	arr2 += arr[i];
    }
    
    return arr2;
}

console.log(reverse("Alex KOcharyan"));
