-[PAMediaConversionServiceResourceURLReference hash]
unsigned __int64 __cdecl -[PAMediaConversionServiceResourceURLReference hash](
        PAMediaConversionServiceResourceURLReference *self,
        SEL a2)
{
  NSString *v2; // x19
  NSUInteger v3; // x20

  v2 = objc_retainAutoreleasedReturnValue(-[NSURL path](self->_url, "path"));
  v3 = -[NSString hash](v2, "hash");
  objc_release(v2);
  return v3;
}