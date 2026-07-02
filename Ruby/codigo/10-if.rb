eshombre = true
esalto = true

if eshombre and esalto
  puts "Eres hombre y eres alto"
elsif eshombre and !esalto
  puts "Eres hombre y eres bajito"
elsif !eshombre and esalto
  puts "Eres mujer y eres alta"
elsif !eshombre and !esalto
  puts "Eres mujer y eres bajita"
else
  puts "Pucha no se XD"
end
