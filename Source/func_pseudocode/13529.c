-[NSString tsu_isEqualToString:]
bool __cdecl -[NSString tsu_isEqualToString:](NSString *self, SEL a2, id a3)
{
  if ( a3 )
    return -[NSString isEqualToString:](self, "isEqualToString:");
  else
    return 0;
}