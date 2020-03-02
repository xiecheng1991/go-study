package main

import( "fmt" )

func main(){
	
	var a = -65535;
	b := byte(a)
	fmt.Println( b )
	type mystring string
	var str1 mystring = "hello"
	var str2 string = str1
	fmt.Println( str2 )
	val, ok := interface{}(str1).(string)
	if ok {
		fmt.Println( "mystring is equal string" )
		fmt.Println( val )
	} else {
		fmt.Println( "mystring is not equil string" )
		fmt.Println( val )
	}
	var s1 []mystring
	var s2 []string
	s2 = s1
	v, ok := interface{}(s2).([]string)
	fmt.Println( v )
	if ok {
		fmt.Println( "[]string == []mystring" )
	} else {
		fmt.Println( "[]string != []mystring" )
	}
}
