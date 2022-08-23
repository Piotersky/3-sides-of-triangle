const { ipcRenderer } = require("electron");



/*let a1 = fs.readFileSync('./data/a.txt');
let { b1 } = fs.readFileSync('./data/b.txt');
let { c1 } = fs.readFileSync('./data/c.txt');
let { h1 } = fs.readFileSync('./data/h.txt');
let { o1 } = fs.readFileSync('./data/o.txt');
let { p1 } = fs.readFileSync('./data/p.txt');
let { prze1 } = fs.readFileSync('./data/prze.txt');
let { t1 } = fs.readFileSync('./data/t.txt');

const a = toString(a1);

console.log(a1)
console.log(a);

async function content(path) {
    return readFile(path, 'utf8')
}

const text = Fs.content('./data/a.txt');*/

/*let text = '';

function syncReadFile(filename) {
    const contents = readFileSync(filename, 'utf-8');

    const arr = contents.split(/\r?\n/);

    console.log(arr)

    return arr;
}

syncReadFile('./data/a.txt');

console.log(text)*/

/*let data = {
    a: a,
    b: b1.toString(),
    c: c1.toString(),
    h: h1.toString(),
    o: o1.toString(),
    p: p1.toString(),
    prze: prze1.toString(),
    t: t1.toString()
}*/

/*let data = {
    a: a,
    b: b,
    c: c,
    h: h,
    o: o,
    p: p,
    t: t
}*/

function sleep(ms) {
    return new Promise(resolve => setTimeout(resolve, ms));
}

async function colldown() {
    for (let i = 0; i < 1; i++) {
        await sleep(i * 1000);
    }
    ipcRenderer.send('mainFile');
}

colldown()

