package main

import (
	"fmt"
)

func main() {
	var sl string
	var cm float64
	var meters float64
	var result float64
	var km float64
	var kg float64
	var ml float64
	var l float64
	var foot float64
	var miles float64
	var ounces float64
	var pounds float64
	var stone float64
	var pints float64
	fmt.Println("Type (m) to convert to metric or type (i) to convert to imperial")
	fmt.Scan(&sl)

	if sl == "m" || sl == "M" {
		fmt.Println("Type (l) for length conversion. Type (m) for mass conversion. Type (c) for capacity conversion.")
		fmt.Scan(&sl)
		if sl == "l" || sl == "L" {
			fmt.Println("Type (m) for meters convertion. Type (km) for kilometer convertion.")
			fmt.Scan(&sl)
			switch sl {
			case "m":
				fmt.Println("How many feet?")
				fmt.Scan(&foot)
				result = foot * 0.3048
				fmt.Printf("%.2f meters", result)
			case "km":
				fmt.Println("How many miles?")
				fmt.Scan(&miles)
				result = miles * 1.609344
				fmt.Printf("%.2f kilometers", result)
			}
		} else if sl == "m" || sl == "M" {
			fmt.Println("Type (g) for gram convertion. Type (k) for kg convertion. Type (t) for ton convertion.")
			fmt.Scan(&sl)
			switch sl {
			case "g":
				fmt.Println("How many ounces?")
				fmt.Scan(&ounces)
				result = ounces * 28.349523125
				fmt.Printf("%.2f grams", result)
			case "k":
				fmt.Println("How many pounds?")
				fmt.Scan(&pounds)
				result = pounds * 0.45359237
				fmt.Printf("%.2f kilograms", result)
			case "t":
				fmt.Println("How many stone?")
				fmt.Scan(&stone)
				result = stone * 0.007
				fmt.Printf("%.2f tons", result)
			}
		} else if sl == "c" || sl == "C" {
			fmt.Println("Type (l) for liter convertion.Type (dm) for decimeter convertion. Type (cl) for centiliter convertion.")
			fmt.Scan(&sl)
			switch sl {
			case "l":
				fmt.Println("How many pints?")
				fmt.Scan(&pints)
				result = pints * 0.473176473
				fmt.Printf("%.2f liters", result)
			case "cl":
				fmt.Println("How many ounces?")
				fmt.Scan(&ounces)
				result = ounces * 2.95735296
				fmt.Printf("%.2f centiliters", result)
			case "dm":
				fmt.Println("How many ounces?")
				fmt.Scan(&ounces)
				result = ounces * 0.295735296
				fmt.Printf("%.2f decimeters", result)
			}
		}
	}
	if sl == "i" || sl == "I" {
		fmt.Println("Type (l) for length conversion. Type (m) for mass conversion. Type (c) for capacity conversion.")
		fmt.Scan(&sl)
		if sl == "l" || sl == "L" {
			fmt.Println("Type (i) for inches. Type (f) for foot. Type (y) for yard. Type (m) mile.")
			fmt.Scan(&sl)
			switch sl {
			case "i":
				fmt.Println("How many cm?")
				fmt.Scan(&cm)
				result = cm / 2.54
				fmt.Printf("%.2f inches", result)
				fmt.Scanln()
			case "f":
				fmt.Println("How many cm?")
				fmt.Scan(&cm)
				result = 1 / 2.54 / 12
				fmt.Printf("%.2f feet", result)
				fmt.Scanln()
			case "y":
				fmt.Println("How many meters?")
				fmt.Scan(&meters)
				result = meters / 0.9144
				fmt.Printf("%.2f yards", result)
				fmt.Scanln()
			case "m":
				fmt.Println("How many km?")
				fmt.Scan(&km)
				result = km / 1.609344
				fmt.Printf("%.2f miles", result)
				fmt.Scanln()
			default:
				fmt.Println("You did something wrong try again")
			}
		} else if sl == "m" || sl == "M" {
			fmt.Println("Type (p) for pounds. Type (s) for stone")
			fmt.Scan(&sl)
			switch sl {
			case "p":
				fmt.Println("How many kg?")
				fmt.Scan(&kg)
				result = kg / 0.45359237
				fmt.Printf("%.2f pounds", result)
				fmt.Scanln()
			case "s":
				fmt.Println("How many kg?")
				fmt.Scan(&kg)
				result = kg * 0.1575
				fmt.Printf("%.2f stone", result)
				fmt.Scanln()
			default:
				fmt.Println("You did something wrong try again")
			}
		} else if sl == "c" || sl == "C" {
			fmt.Println("Type (floz) for fluid ounces. Type (p) for pints. Type (g) for gallons.")
			fmt.Scan(&sl)
			switch sl {
			case "floz":
				fmt.Println("How many mL?")
				fmt.Scan(&ml)
				result = ml * 0.033814
				fmt.Printf("%.2f fluid ounces", result)
				fmt.Scanln()
			case "p":
				fmt.Println("How many L?")
				fmt.Scan(&l)
				result = l * 2.113376
				fmt.Printf("%.2f pints", result)
				fmt.Scanln()
			case "g":
				fmt.Println("How many L?")
				fmt.Scan(&l)
				result = l * 0.264172
				fmt.Printf("%.2f gallons", result)
				fmt.Scanln()
			default:
				fmt.Println("You did something wrong try again")
			}
		}
	}

	fmt.Println("\nPress Enter to exit...")
	fmt.Scanln()
}
