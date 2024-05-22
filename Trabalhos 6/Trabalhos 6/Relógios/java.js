function updateClock() {
    var newYorkTime = new Date().toLocaleString('en-US', { timeZone: 'America/New_York', hour: 'numeric', minute: 'numeric', second: 'numeric', hour12: false });
    document.getElementById('new-york').getElementsByClassName('time')[0].textContent = 'Hora atual: ' + newYorkTime;

    var tokyoTime = new Date().toLocaleString('en-US', { timeZone: 'Asia/Tokyo', hour: 'numeric', minute: 'numeric', second: 'numeric', hour12: false });
    document.getElementById('tokyo').getElementsByClassName('time')[0].textContent = 'Hora atual: ' + tokyoTime;

    var londonTime = new Date().toLocaleString('en-US', { timeZone: 'Europe/London', hour: 'numeric', minute: 'numeric', second: 'numeric', hour12: false });
    document.getElementById('london').getElementsByClassName('time')[0].textContent = 'Hora atual: ' + londonTime;
}

updateClock();
setInterval(updateClock, 1000);
