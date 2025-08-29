-[NSString tsu_containsSubstring:]
bool __cdecl -[NSString tsu_containsSubstring:](NSString *self, SEL a2, id a3)
{
  return -[NSString rangeOfString:](self, "rangeOfString:", a3) != (void *)0x7FFFFFFFFFFFFFFFLL;
}