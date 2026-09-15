<script>
function calculate(operator){

    const firstInput = document.getElementById("num1");
    const secondInput = document.getElementById("num2");
    const resultBox = document.getElementById("result");

    if(firstInput.value === "" || secondInput.value === ""){
        resultBox.textContent = "Enter both numbers";
        return;
    }

    const num1 = Number(firstInput.value);
    const num2 = Number(secondInput.value);

    let result;

    // Arithmetic Operators
    if(operator === "+"){
        (result = num1 + num2)
    }
    else if(operator === "-"){
        result = num1 - num2
    }
    else if(operator === "*"){
        result = num1 * num2
    }
    else if(operator === "/"){
        if(num2 === 0){
            resultBox.textContent = "Cannot divide by 0"
            return;
        }
        result = num1 / num2;
    }

    resultBox.textContent = result;
}

function clearCalculator(){
    document.getElementById("num1").value = "";
    document.getElementById("num2").value = "";
    document.getElementById("result").textContent = "0";
}
</script>