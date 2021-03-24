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


/*
const userStoppedWatching = true;
const userWatchingOtherVideo = true;
const watchVideo = (callback, errorCallback) => {
	if(userStoppedWatching){
		obj = {
			title: 'user stopped watching'
		}
		errorCallback(obj);
	}else if(userWatchingOtherVideo){
		obj = {
			title: 'user is watching other videos'
		}
		errorCallback(obj);
	}else{
		obj = {
			title: 'user is still wacthing your video'
		}
		callback(obj);
	}
}
watchVideo( (obj)=>{
	let newObj = {
		...obj,
		success: true
	}
	console.log(newObj);
}, (obj)=>{
	let newObj = {
		...obj,
		success: false
	}
	console.log(newObj);
} );*/

/* The promises solution */
const userStoppedWatching = true;
const userWatchingOtherVideo = true;

const watchVideoPromise = () => {
	return new Promise(( resolve, reject )=>{
		if(userStoppedWatching){
			obj = {
				title: 'user stopped watching'
			}
			reject(obj);
		}else if(userWatchingOtherVideo){
			obj = {
				title: 'user is watching other videos'
			}
			reject(obj);
		}else{
			obj = {
				title: 'user is still wacthing your video'
			}
			resolve(obj);
		}
	}); // end of promise
} // end of watchVideoPromise function


watchVideoPromise()
	.then( obj => {
		let newObj = {
			...obj,
			success: true
		}
		console.log(newObj);
	})
	.catch( obj => {
		let newObj = {
			...obj,
			success: false
		}
		console.log(newObj);
	});
