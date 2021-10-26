class Main {
    public static void main(String[] args) {
        System.out.println("Hola mundo");
        UberX uberX = new UberX("AMQ123", new Account("Andres Herrera", "AND123"), "chevrolet", "Sonic");
        uberX.setPassenger(4);
        uberX.printDataCar();

        /*Car car2 = new Car("OOP456", new Account("Lorena Herrera", "ANDA876"));
        car2.passegenger = 5;
        car2.printDataCar();*/
    }
}