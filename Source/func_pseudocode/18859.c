+[SiriNCService _nameForActionType:]
id __cdecl +[SiriNCService _nameForActionType:](id a1, SEL a2, signed __int64 a3)
{
  void *v4; // x20
  NSNumber *v5; // x19
  void *v6; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( qword_1000292F8 != -1 )
    dispatch_once(&qword_1000292F8, &stru_100020720);
  v4 = (void *)qword_1000292F0;
  v5 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithInteger:](&OBJC_CLASS___NSNumber, "numberWithInteger:", a3));
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", v5));
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}