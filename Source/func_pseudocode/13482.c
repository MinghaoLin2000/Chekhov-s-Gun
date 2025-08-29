-[NSString tsu_stringByUniquingPathInsideDirectory:]
id __cdecl -[NSString tsu_stringByUniquingPathInsideDirectory:](NSString *self, SEL a2, id a3)
{
  return -[NSString tsu_stringByUniquingPathInsideDirectory:withFormat:](
           self,
           "tsu_stringByUniquingPathInsideDirectory:withFormat:",
           a3,
           CFSTR("%@-%d%@"));
}