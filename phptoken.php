function getToken($length)
{
    $str_result = '0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ';
    return substr(str_shuffle($str_result),0, $length);
}
function getToken2($length)
{
    $str_result = '0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ';
    return substr(str_shuffle($str_result),0, $length).'-'.substr(str_shuffle($str_result),0, $length).'-'.substr(str_shuffle($str_result),0, $length);
}
function getToken3($length,$count)
{
	$out ="";
	$sp=((!empty($count))? $count : 0);
    $str_result = '0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ';
	for($i=1;$i<=$sp;$i++){
		$out .=(($i > 1)? "-": "");
		$out .=substr(str_shuffle($str_result),0, $length);
		
	}
    return $out;
}
