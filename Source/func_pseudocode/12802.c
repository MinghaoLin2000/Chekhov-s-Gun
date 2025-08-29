-[NSError tsu_enumerateErrorUsingBlock:]
void __cdecl -[NSError tsu_enumerateErrorUsingBlock:](NSError *self, SEL a2, id a3)
{
  void (__fastcall **v4)(id, void *, void *, void *, _BYTE *); // x19
  NSError *v5; // x0
  NSError *v6; // x20
  NSDictionary *v7; // x22
  NSString *v8; // x23
  NSError *v9; // x0
  NSError *v10; // x23
  NSError *v11; // x24
  char v12; // [xsp+Fh] [xbp-41h] BYREF

  v4 = (void (__fastcall **)(id, void *, void *, void *, _BYTE *))objc_retain(a3);
  if ( v4 )
  {
    v5 = objc_retain(self);
    v12 = 0;
    if ( v5 )
    {
      v6 = v5;
      do
      {
        v7 = objc_retainAutoreleasedReturnValue(-[NSError userInfo](v6, "userInfo"));
        v8 = objc_retainAutoreleasedReturnValue(-[NSError domain](v6, "domain"));
        v4[2](v4, v8, (void *)-[NSError code](v6, "code"), v7, &v12);
        objc_release(v8);
        v9 = (NSError *)objc_retainAutoreleasedReturnValue(-[NSDictionary objectForKeyedSubscript:](v7, "objectForKeyedSubscript:", NSUnderlyingErrorKey));
        v10 = v9;
        if ( v9 != v6 )
        {
          v11 = objc_retain(v9);
          objc_release(v6);
          v6 = v11;
        }
        objc_release(v10);
        objc_release(v7);
      }
      while ( v6 && !v12 );
      objc_release(v6);
    }
  }
  objc_release(v4);
}