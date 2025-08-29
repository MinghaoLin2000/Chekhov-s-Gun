-[NSProgress tsu_stopObservingTSUProgress]
void __cdecl -[NSProgress tsu_stopObservingTSUProgress](NSProgress *self, SEL a2)
{
  __int64 v3; // x20
  NSDictionary *v4; // x19
  id v5; // x21
  id v6; // x20
  void *v7; // x19
  void *v8; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_opt_class(&OBJC_CLASS___TSUProgressUserInfoObject);
  v4 = objc_retainAutoreleasedReturnValue(-[NSProgress userInfo](self, "userInfo"));
  v5 = objc_retainAutoreleasedReturnValue(-[NSDictionary objectForKeyedSubscript:](v4, "objectForKeyedSubscript:", CFSTR("TSUProgressUserInfoKey")));
  v6 = objc_retainAutoreleasedReturnValue((id)TSUDynamicCast(v3, v5));
  objc_release(v5);
  objc_release(v4);
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "progress"));
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "progressObserver"));
  objc_msgSend(v7, "removeProgressObserver:", v8);
  objc_release(v8);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}