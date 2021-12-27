function AreaProtetta(){
var pass=document.getElementById('testo').value;
console.log(pass)
if(pass=="rizzolo"){   //password
    window.open("l_c.html") //file
}
else{
    alert("password errata");
}
}
