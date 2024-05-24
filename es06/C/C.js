const text = document.getElementById("myInput");

text.addEventListener("focus", () => {
    text.style.backgroundColor = "red";
});

text.addEventListener("blur", () => {
      text.style.backgroundColor = "white";
});