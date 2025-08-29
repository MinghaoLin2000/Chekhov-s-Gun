-[NSDictionary tsu_boolValueForKey:]
bool __cdecl -[NSDictionary tsu_boolValueForKey:](NSDictionary *self, SEL a2, id a3)
{
  id v3; // x19
  unsigned __int8 v4; // w20

  v3 = objc_retainAutoreleasedReturnValue(-[NSDictionary objectForKeyedSubscript:](self, "objectForKeyedSubscript:", a3));
  if ( (objc_opt_respondsToSelector() & 1) != 0 )
    v4 = (unsigned __int8)objc_msgSend(v3, "boolValue");
  else
    v4 = 0;
  objc_release(v3);
  return v4;
}