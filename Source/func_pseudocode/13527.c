-[NSString tsu_stringWithoutAttachmentCharacters]
id __cdecl -[NSString tsu_stringWithoutAttachmentCharacters](NSString *self, SEL a2)
{
  __int64 v3; // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( qword_1001F8038 != -1 )
    dispatch_once(&qword_1001F8038, &stru_1001DF508);
  v3 = qword_1001F8030;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return -[NSString stringByReplacingOccurrencesOfString:withString:](
           self,
           "stringByReplacingOccurrencesOfString:withString:",
           v3,
           &stru_1001DFAA0);
}