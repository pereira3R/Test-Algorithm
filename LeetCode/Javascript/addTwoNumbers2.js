function ListNode(val){
    this.val = val;
    this.next = null; 
}

var addTwoNumbers = function(l1, l2) {
    let auxL1 = l1;
    let auxL2 = l2;
    let l3 = null; 
    let auxL3 = null; 
    let value  = 0; 
    let sum = 0; 

    while(auxL1 !== null || auxL2 !== null){
        
        if(auxL1 !== null){
            sum += auxL1.val; 
            auxL1 = auxL1.next; 
        }
        if(auxL2 !== null){
            sum += auxL2.val;
            auxL2 = auxL2.next;
        }

        value = sum % 10; 
        sum = Math.floor(sum / 10);
        let newNode = new ListNode(value); 

        if(l3 === null){
            l3 = newNode; 
        }else{
            auxL3 = l3; 
            while(auxL3.next !== null){
                auxL3 = auxL3.next;
            }
            auxL3.next = newNode; 
        }
        if((sum > 0) && auxL1 === null && auxL2 === null){
            let newNode = new ListNode(sum); 
            auxL3 = l3; 
            while(auxL3.next !== null){
                auxL3 = auxL3.next;
            }
            auxL3.next = newNode; 
        }
    }

    return l3; 
}