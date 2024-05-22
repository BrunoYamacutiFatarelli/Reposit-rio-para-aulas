function conversaoTemp() {
    var celsius = parseFloat(document.getElementById('celsius').value);
    var fahrenheit = (celsius * 9/5) + 32;
    document.getElementById('fahrenheit').textContent = 'Fahrenheit: ' + fahrenheit.toFixed(2);
}

function conversaoDist() {
    var metros = parseFloat(document.getElementById('metros').value);
    var feet = metros * 3.28084;
    document.getElementById('feet').textContent = 'Pés: ' + feet.toFixed(2);
}

function conversaoPeso() {
    var kg = parseFloat(document.getElementById('kg').value);
    var libras = kg * 2.20462;
    document.getElementById('libras').textContent = 'Libras: ' + libras.toFixed(2);
}
