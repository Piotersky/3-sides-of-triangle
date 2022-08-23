const {
    app,
    BrowserWindow,
    ipcMain,  
    ipcRenderer} = require("electron");
const path = require("path");
  
  // Keep a global reference of the window object, if you don't, the window will
  // be closed automatically when the JavaScript object is garbage collected.
  let win; 

function createWindow() {

    win = new BrowserWindow({
        width: 900,
        height: 900,
        title: 'Wizualizacja trójkąta',
        webPreferences: {
            nodeIntegration: true, // is default value after Electron v5
            contextIsolation: false, // protect against prototype pollution
            enableRemoteModule: false, // turn off remote
            devTools: true,
        }
    });

    // Load app
    win.loadFile(path.join(__dirname, "preload.html"));
  // rest of code..
}

app.on('ready', createWindow)

ipcMain.on('mainFile', (data) => {
    win.loadFile(path.join(__dirname, "index.html"));
});

app.on('window-all-closed', () => {
    if (process.platform !== 'darwin') {
        app.quit()
    }
})