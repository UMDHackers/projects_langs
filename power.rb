#BASED ON https://en.wikipedia.org/wiki/Exponentiation_by_squaring
def power(x, n)
	if n < 0 then
		return power(1/x -n)
	elsif n == 0 then
		return 1
	elsif n == 1 then 
		return x
	elsif n%2 == 0 then 
		return power(x*x, n/2)
	elsif n%2 == 1 then
		return x*power(x*x, n/2)
	end
end
#main
puts "Enter number: "
aa = gets
puts "Enter power: "
bb = gets
pow = power(aa.to_i, bb.to_i)

puts "Final answer: #{pow.to_s}"