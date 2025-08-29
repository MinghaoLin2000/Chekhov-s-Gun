-[NSString tsu_isDynamic]
bool __cdecl -[NSString tsu_isDynamic](NSString *self, SEL a2)
{
  return UTTypeIsDynamic((CFStringRef)self) != 0;
}