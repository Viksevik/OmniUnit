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
	fmt.Println("Type (m) to convert to mertric or type (i) to convert to imperial")
	fmt.Scan(&sl)
	if sl == "i" || sl == "I" {
		fmt.Println("Type (l) for length convertion. Type (m) for mass convertion. Type (c) for capacity convertion.")
		fmt.Scan(&sl)
		if sl == "l" || sl == "L" {
			fmt.Println("Type (i) for inches. Type (f) for foot. Type (y) for yard. type (m) mile.")
			fmt.Scan(&sl)
			switch sl{
			case "i":
				fmt.Println("How many cm?")
				fmt.Scan(&cm)
				result = cm/2.54
				fmt.Printf("%.2f", result)
			case "f":
				fmt.Println("How many cm?")
				fmt.Scan(&cm)
				result = 1/2.54/12
				fmt.Printf("%.2f feet", result)
			case "y":
				fmt.Println("How many meters?")
				fmt.Scan(&meters)
				result = meters/0.9144
				fmt.Printf("%.2f yards", result)
			case "m":
				fmt.Println("How many km?")
				fmt.Scan(&km)
				result = km/1.609344
				fmt.Printf("%.2f miles", result)
	}
}else if sl == "m" || sl == "M" {
		fmt.Println("Type (p) for pounds. Type (s) for stone")
		fmt.Scan(&sl)
		switch sl {
		case "p":
			fmt.Println("How many kg?")
			fmt.Scan(&kg)
			result = kg/0.45359237
			fmt.Printf("%.2f pounds", result)
		case "s":
			fmt.Println("How many kg?")
			fmt.Scan(&kg)
			result = kg*0.1575
			fmt.Printf("%.2f stone", result)
		}
}else if sl == "c" || sl == "C"{
		fmt.Println("Type (floz) for fluid ounces. Type (p) for pints. Type (g) for gallons.")
		fmt.Scan(&sl)
		switch sl {
		case "floz":
			fmt.Println("How many mL?")
			fmt.Scan(&ml)
			result = ml* 0.033814
			fmt.Printf("%.2f fluid ounces", result)
		case "p":
			fmt.Println("How many L?")
			fmt.Scan(&l)
			result = l*2.113376
			fmt.Printf("%.2f pints", result)
		case "g":
			fmt.Println("How many L?")
			fmt.Scan(l)
			result = l*0.264172
			fmt.Printf("%.2f gallons", result)
		}
	}
	}
}
