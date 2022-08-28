var canvasElement = document.querySelector("#myCanvas");
var ctx = canvasElement.getContext("2d");

/****************************************************************/

let scale;

scale = 1;

a = a * scale;
b = b * scale;
c = c * scale;

/****************************************************************/

let Xa, Ya, Xb, Xc, Yc;

Xa = 30;
Ya = 480;
Xb = Xa + a;

/****************************************************************/

/*Xc = (b ** 2 + Xa ** 2 - Xb ** 2) / 2 * (Xa - Xb);

let D = (Ya * -2) ** 2 - 4 * (Ya ** 2 - c ** 2 + Xc ** 2 - 2 * Xc * Xa + Xa ** 2);

Yc = (b * -1 - Math.sqrt(D)) / 2 * a;*/

let r = Xb ** 2 - 2 * Xa * Xb + Xa ** 2 + Xb ** 2 * ((Math.tan(a1) * (180 / Math.PI)) ** 2) - 2 * Xa * Xb * ((Math.tan(a1) * (180 / Math.PI)) ** 2) + Xa ** 2 * ((Math.tan(a1) * (180 / Math.PI)) ** 2);

console.log(r)

let Fa = 1 + ((Math.tan(a1) * (180 / Math.PI)) ** 2);
let Fb = Xa * -2 - 2 * Xb * ((Math.tan(a1) * (180 / Math.PI)) ** 2);
let Fc = Xa ** 2 * (1 + ((Math.tan(a1) * (180 / Math.PI)) ** 2)); // -r

console.log(Fa * Xb ** 2 + Fb * Xb + Fc)

/****************************************************************/

Xc = 0;
Yc = 100;

/****************************************************************/

function sides() {

    ctx.beginPath();

    ctx.moveTo(Xa, Ya);
    ctx.lineTo(Xb, Ya);

    ctx.lineTo(Xc, Yc);

    ctx.closePath();

    ctx.lineWidth = 3;
    ctx.strokeStyle = '#000000';
    ctx.stroke();
}

/****************************************************************/

sides();

ctx.fillStyle = "#FFCC00";
ctx.fill();

/****************************************************************/

ctx.font = "20px Arial";
ctx.fillStyle = "#FFFFFF";

if(Xb > Xc) {
    ctx.fillText("b", (Xb - Xc) / 2, (Ya - Yc) / 2 + Yc - 10)
}

if(Xb < Xc) {
    ctx.fillText("b", (Xc - Xb) / 2, (Ya - Yc) / 2 + Yc - 10)
}

if(Xa > Xc) {
    ctx.fillText("c", (Xa - Xc) / 2 - 15, (Ya - Yc) / 2 + Yc + 10)
}

if(Xa < Xc) {
    ctx.fillText("c", (Xc - Xa) / 2, (Ya - Yc) / 2 + Yc)
}

ctx.fillText("a", (Xb - Xa) / 2 - 10, Ya + 20)

/****************************************************************/

ctx.beginPath();

ctx.moveTo(Xa, Ya);
ctx.arc(Xa, Ya, 50, 0, 2 * Math.PI);

ctx.moveTo(Xb, Ya);
ctx.arc(Xb, Ya, 50, 0, 2 * Math.PI);

ctx.moveTo(Xc, Yc);
ctx.arc(Xc, Yc, 50, 0, 2 * Math.PI);

ctx.closePath();

ctx.strokeStyle = '#3d3d3d';
ctx.stroke();

/****************************************************************/

ctx.font = "25px Arial";
ctx.fillStyle = "#000000";

ctx.fillText("α", Xa + 20, Ya - 20)
ctx.fillText("β", Xb - 37, Ya - 5)
ctx.fillText("γ", Xc + 5, Yc + 40)

/****************************************************************/

let a3 = 180 - a1 - a2;

sides();

/****************************************************************/

let rodzaj = document.getElementById("rodzaj");

if (t == 0) {
    rodzaj.textContent = "Trójkąt równoramienny";
}

if (t == 1) {
    rodzaj.textContent = "Trójkąt równoboczny";
}

if (t == 2) {
    rodzaj.textContent = "Trójkąt różnoboczny";
}

if (t == 3) {
    rodzaj.textContent = "Trójkąt prostokątny";
}

/****************************************************************/

let A1 = document.getElementById("a");
let b1 = document.getElementById("b");
let c1 = document.getElementById("c");
let h1 = document.getElementById("h");
let p1 = document.getElementById("area");
let cir1 = document.getElementById("cir");
let K1 = document.getElementById("a1");
let K2 = document.getElementById("a2");
let K3 = document.getElementById("a3");
let czas = document.getElementById("time");

/****************************************************************/

A1.textContent = "Długość boku a: " + a;
b1.textContent = "Długość boku b: " + b;
c1.textContent = "Długość boku c: " + c;
h1.textContent = "Wysokość: " + h;
p1.textContent = "Pole: " + area;
cir1.textContent = "Circuit: " + cir;
K1.textContent = "Miara kąta α: " + a1 + "°";
K2.textContent = "Miara kąta β: " + a2 + "°";
K3.textContent = "Miara kąta γ: " + a3 + "°";
czas.textContent = "Czas generowania: " + (Date.now() - start) + " milisekund";

/****************************************************************/

console.log(Xa, Ya);
console.log(Xb, Ya);
console.log(Xc, Yc);

