<?php

echo "-----using var_dump() on Hello world-----<br>";
$a = "Hello world!";
echo var_dump($a) . "<br><br>";

echo "-----Sub String of Hello world-----<br>";
echo substr("Hello world",1,8)."<br><br>";

echo "-----Comparing Hello and World-----<br>";
$b="Hello";
$c="World";
if (strcmp($b,$c) == 0) {
    echo "The two strings are equal<br><br>";
}elseif (strcmp($b,$c) < 0) {
    echo "sring1 is less than string2<br><br>";
}elseif (strcmp($b,$c) > 0) {
    echo "string1 is greater than string2<br><br>";
}

echo "-----Position of php in I Love Php-----<br>";
echo strpos("I love php","php");
?>