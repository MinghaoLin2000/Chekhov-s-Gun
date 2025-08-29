-[NSURL tsu_prettyStringFromTelephoneURL]
id __cdecl -[NSURL tsu_prettyStringFromTelephoneURL](NSURL *self, SEL a2)
{
  NSString *v2; // x19
  __CFString *v3; // x20
  __CFString *v4; // x0
  __CFString *v5; // x19

  v2 = objc_retainAutoreleasedReturnValue(-[NSURL resourceSpecifier](self, "resourceSpecifier"));
  v3 = objc_retainAutoreleasedReturnValue(-[NSString stringByRemovingPercentEncoding](v2, "stringByRemovingPercentEncoding"));
  objc_release(v2);
  if ( v3 )
    v4 = v3;
  else
    v4 = &stru_1001DFAA0;
  v5 = objc_retainAutoreleaseReturnValue(v4);
  objc_release(v3);
  return v5;
}