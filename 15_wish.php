<?php
$afternoon="Good Afternoon!";
$evening="Good Evening!";
$late="Working late?";
$morning="Good morning";
$friday="Get ready for the weekend!";

$current_time=date("G");

$current_day=date("l");

if ($current_time >= 12 && $current_time <= 16) {
    echo $afternoon;
}elseif ($current_time >= 17 && $current_time <= 24) {
    echo $evening;
}elseif ($current_time >= 1 && $current_time <= 5) {
    echo $late;
}elseif ($current_time >=6 && $current_time <= 11) {
    echo $morning;
}

if ($current_day == "Friday") {
    echo $friday;
}

?>