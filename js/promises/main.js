/*
	Promises Cheat sheet

	Usefule e.g when downloading image in the backend, 
	letting other things go on instead of waiting for it to complete
*/

let p = new Promise((resolve, reject) => {
	let a = 2;
	if(a == 2){
		resolve("Success");
	} else {
		reject("Failed");
	}
});

/*
	.then and .catch obviously take in a function	
	Depending on how many parementers are passed into .resolve
*/
p.then(message =>{
	console.log(`we have gotten resolved with message: ${message}`);
}).catch( message => {
	console.log(`we have gotten rejected with message: ${message}`);
})


/*---------------------------------*/
/*Promises are made to replace callbacks, 
so we have a call back illustration below*/

const userLeft