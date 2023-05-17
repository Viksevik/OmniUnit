package main

import (
	"fmt"
)

func miconverter() {
	var sl string
	fmt.Println("Type (m) to convert to mertric or type (i) to convert to imperial")
	fmt.Scan(&sl)
	if sl == "i" {
		fmt.Println("Type (l) for length convertion. Type (m) for mass convertion. Type (c) for capacity convertion.")
		fmt.Scan(&sl)
	}
	if sl == "m" {

	}
}
