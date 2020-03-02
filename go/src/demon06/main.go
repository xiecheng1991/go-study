package main

import( "fmt" )

func main(){
	var a = -65535;
	b := byte(a)
	fmt.Println( b )
	/*
	val, ok := interface{}(b).(int)
	if ok {
	   fmt.Println( val )
	} else {
	   fmt.Println( "is not int" )
	}
	*/	
}
