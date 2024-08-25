let btn = document.querySelector(".btn");
let text = document.querySelector("#randomNumber");

btn.addEventListener("click", () => {
    let min = parseInt(document.querySelector("#minNumber").value);
    let max = parseInt(document.querySelector("#maxNumber").value);

    
        let random = Math.floor(Math.random() * (max - min + 1)) + min;
        text.textContent = `Random Number: ${random}`;
    
});
