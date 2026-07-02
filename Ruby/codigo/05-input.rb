puts "Pon tu nombre: "
nombre = gets.chomp
puts "Pon tu edad: "
edad = gets.chomp.to_i
año = 2026 - edad
puts "Hola #{nombre}! Tiene #{edad} y naciste en #{año}"
