function AreaProtetta(){
var pass=document.getElementById('testo').value;
var utente=document.getElementById('utente').value;

console.log(pass)
if(pass=="1209" && utente=="lorenzo"){   //password
    window.open("2_pag/l_c.html") //file
}
else{
    alert("password errata");
}
if(pass=="alberto123" && utente=="alberto"){   //password
    window.open("2_pag/l_c.html") //file
}
else{
    alert("password errata");
}
}
