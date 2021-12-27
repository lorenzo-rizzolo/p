function AreaProtetta(){
var pass=document.getElementById('testo').value;
console.log(pass)
if(pass=="1234"){   //password
    window.open("html") //cartella
    window.open("fattura.html") //file
}
else{
    alert("password errata");
}
}