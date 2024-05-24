const button = document.getElementById("myButton");

button.addEventListener('mouseover', function(){
    button.style.backgroundColor = "red";
});

button.addEventListener('mouseout', function(){
    button.style.backgroundColor = "white";
});