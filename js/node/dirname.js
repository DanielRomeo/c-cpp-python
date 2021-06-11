const fs = require('fs');

// should probably add a bunch of stuff and also functions that will make my life easier: 
//console.log(__dirname);
//console.log('filename', __filename)

// console.log(process.cwd());

// fuction to get the current folder
const funToGetCurrentDir = () => { __dirname.split('/').pop() }

// fuction to get the contents of a directory, returns an array
const getContentsInDir = () =>{
	let files = []
	files = fs.readdirSync(__dirname)
	return files;
}

console.log(process.argv)


console.log(getContentsInDir())