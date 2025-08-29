-[PAMediaConversionServiceResourceURLReference isEqual:]
bool __cdecl -[PAMediaConversionServiceResourceURLReference isEqual:](
        PAMediaConversionServiceResourceURLReference *self,
        SEL a2,
        id a3)
{
  void *v4; // x20
  void *v5; // x21
  NSString *v6; // x19
  unsigned __int8 v7; // w22

  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(a3, "url"));
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "path"));
  v6 = objc_retainAutoreleasedReturnValue(-[NSURL path](self->_url, "path"));
  v7 = (unsigned __int8)objc_msgSend(v5, "isEqual:", v6);
  objc_release(v6);
  objc_release(v5);
  objc_release(v4);
  return v7;
}