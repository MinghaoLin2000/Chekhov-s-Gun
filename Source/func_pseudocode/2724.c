-[NSString comparePlaylistString:]
signed __int64 __cdecl -[NSString comparePlaylistString:](NSString *self, SEL a2, id a3)
{
  id v4; // x20
  id v5; // x19
  void *v6; // x21
  void *v7; // x20

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[NSString stringByTrimmingLeadingSpaces](self, "stringByTrimmingLeadingSpaces"));
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "stringByTrimmingLeadingSpaces"));
  objc_release(v4);
  v7 = objc_msgSend(v5, "compare:options:", v6, 193LL);
  objc_release(v6);
  objc_release(v5);
  return (signed __int64)v7;
}