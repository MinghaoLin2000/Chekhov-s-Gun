-[NSMutableDictionary tsu_setNonNilObject:forKey:]
void __cdecl -[NSMutableDictionary tsu_setNonNilObject:forKey:](NSMutableDictionary *self, SEL a2, id a3, id a4)
{
  if ( a3 )
    -[NSMutableDictionary setObject:forKeyedSubscript:](self, "setObject:forKeyedSubscript:", a3, a4);
}