__Z15PKStoreAuthInfoP5NSURLP15NSURLCredential
void __fastcall PKStoreAuthInfo(NSURL *a1, NSURLCredential *a2)
{
  NSURL *v3; // x19
  NSURLCredential *v4; // x0
  NSURLCredential *v5; // x20
  NSString *v6; // x21
  const char *v7; // x22
  NSString *v8; // x23
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = objc_retain(a1);
  v4 = objc_retain(a2);
  v5 = v4;
  if ( v4 )
  {
    v6 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(-[NSURLCredential user](v4, "user")));
    v7 = -[NSString UTF8String](v6, "UTF8String");
    v8 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(-[NSURLCredential password](v5, "password")));
    sub_10004441C(v3, v7, -[NSString UTF8String](v8, "UTF8String"));
    objc_release(v8);
    objc_release(v6);
  }
  else
  {
    sub_10004441C(v3, 0LL, 0LL);
  }
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}