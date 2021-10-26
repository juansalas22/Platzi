var signo = prompt('¿cual es tu signo?')

switch (signo) {
    case 'acuario':
        console.log('Amorosas, cariñosas y muy sensibles suelen ser las personas nacidas bajo este signo. Les gustan las causas nobles y el dar sin esperar algo a cambio.')
        break;
    case 'capricornio':
        console.log('Prácticas, con una habilidad nata para encontrarle solución a las cosas, aunque parezcan casos perdidos. Son amantes del orden, la estabilidad y de que todo camine conforme lo han planeado.')
        break;
    default:
        console.log('No es un signo del horoscopo')
        break;
}