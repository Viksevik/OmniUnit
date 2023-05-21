package main

import (
	"fmt"
)

func main() {
	var ttype string
	var min, result, hours, days, weeks, months, years float64
	fmt.Println("Type (s), (m), (h), (d), (w), (M), (y) for second, minute, hour, day, week, month and year convertion.")
	fmt.Scan(&ttype)

	switch ttype {
	case "s":
		fmt.Println("How many minutes?")
		fmt.Scan(&min)
		result = min * 60
		fmt.Printf("%.2f seconds", result)
	case "m":
		fmt.Println("How many hours?")
		fmt.Scan(&hours)
		result = hours * 60
		fmt.Printf("%.2f minutes", result)
	case "h":
		fmt.Println("How many days?")
		fmt.Scan(&days)
		result = days * 24
		fmt.Printf("%.2f hours", result)
	case "d":
		fmt.Println("How many weeks?")
		fmt.Scan(&weeks)
		result = weeks * 7
		fmt.Printf("%.2f days", result)
	case "w":
		fmt.Println("How many months?")
		fmt.Scan(&months)
		result = months * 4.34812141
		fmt.Printf("%.2f weeks", result)
	case "M":
		fmt.Println("How many years?")
		fmt.Scan(&years)
		result = years * 12.25
		fmt.Printf("%.2f months", result)
	case "y":
		fmt.Println("How many hours?")
		fmt.Scan(&hours)
		result = hours / 8766
		fmt.Printf("%f years", result)
	}
}
