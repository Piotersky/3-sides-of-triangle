const { ipcRenderer } = require("electron");

function sleep(ms) {
    return new Promise(resolve => setTimeout(resolve, ms));
}

async function cooldown() {
    for (let i = 0; i < 1; i++) {
        await sleep(i * 1000);
    }
    ipcRenderer.send('mainFile');
}

cooldown()

