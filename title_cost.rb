puts "What is the height?"
height = gets

puts "What is the width?"
width = gets

puts "What is the height of a title?"
height_title = gets

puts "What is the width of a title"
width_title = gets
 
puts "what's the price of a title?"
price = gets

titles_needed = (height.to_f *  width.to_f)/(height_title.to_f * width_title.to_f)
total_cost = titles_needed.to_f * price.to_f

puts "Total titles needed: #{titles_needed.to_s}"
puts "Total cost: $#{total_cost.to_s}"
