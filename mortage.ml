let () = print_string "Principle/initial loan: " in
let loan = read_double();;

let () = print_string "Interest Rate?" in
let intrest_year = read_double();;
let monthly_interest = intrest_year / 12;;

let () = print_string "Year" in
let time = read_double();;
let month = time*12

let monthly_payment = loan * (monthly_interest(1 + monthly_interest)^month)/(monthly_interest(1 + monthly_interest)^month - 1);;

print_string "Month payment";;
print_int monthly_payment;;