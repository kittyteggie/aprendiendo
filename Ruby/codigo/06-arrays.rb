personas = Array["Kevin","Karen","Oscar"]
puts personas
puts personas[0]
puts personas[0,2]
personas[0] = "Dwight"
puts personas

personas = Array.new
personas[0] = "Michael"
personas[2] = "Holly"
puts personas
puts personas.length
puts personas.include? "Michael"
puts personas.reverse
puts personas.sort
