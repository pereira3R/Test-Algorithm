var twoSum = function(nums, target) {
    var posI;
    var posJ;
    for(let i = 0; i < nums.length; i++){
        for(let j = 0; j < nums.length; j++){
            if((nums[i] + nums[j]) === target){
                posI = i;
                posJ = j; 
                break; 
            }
        }
    }
    return [posI, posJ]; 
};

var tam = prompt("Digite um vetor: "); 
var vetInt = [];
for(let k = 0; k < tam.length; k++){
    
}