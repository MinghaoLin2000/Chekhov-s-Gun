-[NSString tsu_conformsToUTI:]
bool __cdecl -[NSString tsu_conformsToUTI:](NSString *self, SEL a2, id a3)
{
  return a3 && UTTypeConformsTo((CFStringRef)self, (CFStringRef)a3) != 0;
}