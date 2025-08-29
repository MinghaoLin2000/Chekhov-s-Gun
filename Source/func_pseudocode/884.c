+[AMPCapacityBarView categoryColor:]
id __cdecl +[AMPCapacityBarView categoryColor:](id a1, SEL a2, id a3)
{
  id v3; // x19
  void *v4; // x0
  void *v5; // x20
  NSColor *v6; // x0
  NSColor *v7; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retain(objc_retain(a3));
  if ( qword_1000DA990 != -1 )
    dispatch_once(&qword_1000DA990, &stru_1000B9100);
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend((id)qword_1000DA988, "objectForKeyedSubscript:", v3));
  v5 = v4;
  if ( v4 )
    v6 = objc_retain(v4);
  else
    v6 = objc_retainAutoreleasedReturnValue(+[NSColor systemMintColor](&OBJC_CLASS___NSColor, "systemMintColor"));
  v7 = v6;
  objc_release(v5);
  objc_release(v3);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}