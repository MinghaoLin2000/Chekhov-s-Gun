-[NSString tsu_isTaggedPointer]
bool __cdecl -[NSString tsu_isTaggedPointer](NSString *self, SEL a2)
{
  if ( qword_1001F8028 != -1 )
    dispatch_once(&qword_1001F8028, &stru_1001DF418);
  return objc_opt_class(self) == qword_1001F8020;
}