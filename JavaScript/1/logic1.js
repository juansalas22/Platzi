var juan = {
    nombre: 'juan',
    apellido: 'salas',
    edad: 28,
    peso: 65
}

console.log(`Al inicio del año ${juan.nombre} pesa ${juan.peso}kg`)

/*function aumentarDePeso(persona) {
    return persona.peso += 200
}
*/

// esta esta la arrow functions
const INCREMENTO_PESO = 0.2

const aumentarDePeso = (persona) => persona.peso += INCREMENTO_PESO

const adelgazar = (persona) => persona.peso -= INCREMENTO_PESO

for (var i = 1; i <= 365; i++) {
    var random = Math.random()
    
    if (random < 0.25) {
        // aumenta de peso
        aumentarDePeso(juan)
    } else if (random < 0.5) {
        // adelgaza
        adelgazar(juan)
    }
}

console.log(`Al final del año ${juan.nombre} pesa ${juan.peso.toFixed(2)}kg`)
