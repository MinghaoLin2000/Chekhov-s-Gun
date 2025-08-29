-[NSError tsu_errorPreservingAlertTitle]
id __cdecl -[NSError tsu_errorPreservingAlertTitle](NSError *self, SEL a2)
{
  NSDictionary *v3; // x19
  id v4; // x20
  id v5; // x0
  void *v6; // x22
  NSError *v7; // x21
  void *v8; // x24
  void *v9; // x23
  NSString *v10; // x25
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[NSError userInfo](self, "userInfo"));
  v4 = objc_retainAutoreleasedReturnValue(-[NSDictionary objectForKeyedSubscript:](v3, "objectForKeyedSubscript:", NSLocalizedDescriptionKey));
  if ( !v4 )
    goto LABEL_5;
  v5 = objc_retainAutoreleasedReturnValue(-[NSDictionary objectForKeyedSubscript:](v3, "objectForKeyedSubscript:", CFSTR("TSULocalizedErrorAlertTitle")));
  v6 = v5;
  if ( !v5 || (unsigned int)objc_msgSend(v5, "isEqualToString:", v4) )
  {
    objc_release(v6);
LABEL_5:
    v7 = objc_retain(self);
    goto LABEL_7;
  }
  v8 = -[NSDictionary mutableCopy](v3, "mutableCopy");
  objc_msgSend(v8, "setObject:forKeyedSubscript:", v6, NSLocalizedDescriptionKey);
  v9 = (void *)objc_opt_class(self);
  v10 = objc_retainAutoreleasedReturnValue(-[NSError domain](self, "domain"));
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "errorWithDomain:code:userInfo:", v10, -[NSError code](self, "code"), v8));
  objc_release(v10);
  objc_release(v8);
  objc_release(v6);
LABEL_7:
  objc_release(v4);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}