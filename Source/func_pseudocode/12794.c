-[NSError tsu_localizedAlertTitle]
id __cdecl -[NSError tsu_localizedAlertTitle](NSError *self, SEL a2)
{
  NSDictionary *v2; // x19
  id v3; // x0
  void *v4; // x20
  id v5; // x0
  void *v6; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(-[NSError userInfo](self, "userInfo"));
  v3 = objc_retainAutoreleasedReturnValue(-[NSDictionary objectForKeyedSubscript:](v2, "objectForKeyedSubscript:", CFSTR("TSULocalizedErrorAlertTitle")));
  v4 = v3;
  if ( v3 )
    v5 = objc_retain(v3);
  else
    v5 = objc_retainAutoreleasedReturnValue(-[NSDictionary objectForKeyedSubscript:](v2, "objectForKeyedSubscript:", NSLocalizedDescriptionKey));
  v6 = v5;
  objc_release(v4);
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}