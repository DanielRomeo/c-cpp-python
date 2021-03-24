/*
	Call back chat sheet
*/

const simpleFunction = (anotherFunction) => {
	console.log(`Simple function executed`);
	anotherFunction();
}

const anotherFunction = async () =>{
	// lets call an API
	let mydata = await fetch('https://serve.macbase.co.za/getstudents')
		.then(response => response.json())
		.then(data => console.log(data))

	console.log(`Another function has executed`);
}

const romeoFunction = () => {
	console.log("RomeoFuntion executed");
}

// simpleFunction(anotherFunction);
// romeoFunction();


/* my other example*/

const func1 = (afunc) =>{
	console.log("func1 exec");
	console.log("Some other processing");
	afunc();
}
const func2 = () =>{
	console.log("func2 exec");
}

func1( ()=>{
	console.log({
		"data": "Proccessed"
	});
});

/* Final example */
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
} );