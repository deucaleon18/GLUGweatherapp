
const api={
key:"1d6e9746415ddc25cafa56de0e60ff1e",
baseurl:"https://api.openweathermap.org/data/2.5/"
}
const searchbar = document.querySelector('.searchbar');
  searchbar.addEventListener('keypress', setQuery);
  
  function setQuery(evt) {
    if (evt.keyCode == 13) {
      getResults(searchbar.value);
      console.log(searchbar.value);
    }
  }
  function getResults (query){

    fetch(`${api.baseurl}weather?q=${query}&units=metric&APPID=${api.key}`)
    .then(weather=>
        {
            return weather.json();
        }).then(displayResults);

  }
  function displayResults(weather){
   
    let city=document.getElementById('city');
    city.innerHTML=`<div>${weather.name}</div>`; 


  let temp=document.getElementById('temperature');
    temp.innerHTML= `<div>${Math.round(weather.main.temp)}<span>°c</span></div>`;

  let hum=document.getElementById('humidity');
  hum.innerHTML=`${weather.main.humidity}`;
  

  let weather_el = document.querySelector('.current .weather');
  weather_el.innerText = weather.weather[0].main;

  let hilow = document.querySelector('.hilo');
  hilow.innerText = `${Math.round(weather.main.temp_min)}°c / ${Math.round(weather.main.temp_max)}°c`;
  console.log(weather);

  let date=document.getElementById('date');
  let todayDate=new Date();
  date.innerText= dateManage(todayDate);
  }
  
function dateManage(dateArg){
  let days=["Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"];
  let months=["January","February","March","April","May","June","July","August","September","October","November",
  "December"];

  let year=dateArg.getFullYear();
  let month=months[dateArg.getMonth()];
  let date= dateArg.getDate();
  let day=days[dateArg.getDay()];

  return `${day},${date} ${month},${year}`;
}



    
  
  
  










 
 
 
 
