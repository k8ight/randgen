function tokenJS(length) {
	var chars='0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz';
    var dg1 = ''; var dg2 = ''; var dg3 = '';
    for (var i = length; i > 0; --i) dg1 += chars[Math.round(Math.random() * (chars.length - 1))];
	for (var i = length; i > 0; --i) dg2 += chars[Math.round(Math.random() * (chars.length - 1))];
	for (var i = length; i > 0; --i) dg3 += chars[Math.round(Math.random() * (chars.length - 1))];
    return dg1 +"-" + dg2 +"-"+dg3;
}
