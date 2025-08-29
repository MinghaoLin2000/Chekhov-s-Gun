-[NSString tsu_stringWithNormalizedQuotationMarks]
id __cdecl -[NSString tsu_stringWithNormalizedQuotationMarks](NSString *self, SEL a2)
{
  __int64 v3; // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( qword_1001F8050 != -1 )
    dispatch_once(&qword_1001F8050, &stru_1001DF548);
  v3 = qword_1001F8058;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return -[NSString tsu_stringByReplacingInstancesOfCharactersInSet:withString:](
           self,
           "tsu_stringByReplacingInstancesOfCharactersInSet:withString:",
           v3,
           CFSTR("'"));
}