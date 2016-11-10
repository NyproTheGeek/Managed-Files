// 07/11/16
static public boolean tchalla(int num){
    return Arrays
        .stream(String.valueOf(num).split(""))
        .noneMatch(s -> Integer.parseInt(s)==0 || num % Integer.parseInt(s)!=0);
}
static public boolean karajorel(int num){
	for(String s : String.valueOf(num).split(""))
		if(Integer.parseInt(s)==0 || num % Integer.parseInt(s)!=0)
			return false;
	return true;
}

# Bang0.0.83 # 07/11/16
func tchalla(num = Int):
	toStr(num)
		.split()
		.noneMatch(:toInt([1]) == 0 || num % toInt([1]) != 0)
..
