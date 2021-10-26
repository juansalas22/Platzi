//var personas = []

const API_URL = 'https://swapi.dev/api/'

const PEOPLE_URL = 'people/:id'

//const lukeUrl = `${API_URL}${PEOPLE_URL.replace(':id', 1)}`

const opts = { crossDomain: true }


 
function obtenerPersonaje(id) {
    return new Promise((resolve, reject) => {
        const url = `${API_URL}${PEOPLE_URL.replace(':id', id)}`
        $
        .get(url, opts, function (data) {
            resolve(data)
        })
        .fail(() => reject(id))
    })
    
/*Arrow functions
      //.fail(() => {
        console.log(`Sucedio un error. no se pudo obtener el personaje ${id}`)
      })*/
        
    /*$.get(url, opts, function (persona) {
        console.log(`Hola, yo soy ${persona.name}`)

        if (callBack) {
            callBack()
        }
    } )*/
}

function onError(id) {
    console.log(`Sucedio un error al obtener el pernaje${id}`)
}

 async function obtenerPersonajes() {
    var ids = [1, 2, 3, 4, 5, 6, 7,]
/*var promesas = ids.map(function (id) {
    return obtenerPersonaje(id)
})*/

    var promesas = ids.map(id => obtenerPersonaje(id))
    try {
    var personajes = await Promise.all(promesas)
    console.log(personajes)
    } catch (id) {
    onError(id)
    }
}

obtenerPersonajes()


/*obtenerPersonaje(10)
    .then(personaje10 => {
        console.log(`Hola, yo soy ${personaje10.name}`)
        return obtenerPersonaje(1)
    })
    .then(personaje1 => {
        console.log(`Hola, yo soy ${personaje1.name}`)
        return obtenerPersonaje(2)
    })
    .then(personaje2 => {
        console.log(`Hola, yo soy ${personaje2.name}`)
    })
    .catch(onError)*/



