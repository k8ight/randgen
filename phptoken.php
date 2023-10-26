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
