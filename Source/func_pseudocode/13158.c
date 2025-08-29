-[TSUWarning setAffectedObjects:]
void __cdecl -[TSUWarning setAffectedObjects:](TSUWarning *self, SEL a2, id a3)
{
  NSDictionary *userInfo; // x21
  id v6; // x0
  void *v7; // x0
  void *v8; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  userInfo = self->_userInfo;
  v6 = objc_retain(a3);
  if ( userInfo )
    v7 = -[NSDictionary mutableCopy](userInfo, "mutableCopy");
  else
    v7 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  v8 = v7;
  objc_msgSend(v7, "setObject:forKeyedSubscript:", a3, CFSTR("TSUWarningUserInfoAffectedObjectsKey"));
  objc_release(a3);
  -[TSUWarning setUserInfo:](self, "setUserInfo:", v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v8);
}