function AreaProtetta(){
var pass=document.getElementById('testo').value;
console.log(pass)
if(pass=="rizzolo"){   //password
    window.open("2_pag/l_c.html") //file
}
else{
    alert("password errata");
}
}
