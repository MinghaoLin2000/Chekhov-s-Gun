__Z14ippGetIXStringP15ipp_attribute_ti
id __fastcall ippGetIXString(ipp_attribute_t *a1, unsigned int a2)
{
  ipp_attribute_t *v3; // x0
  ipp_attribute_t *v4; // x19
  void *v5; // x21
  __int64 v6; // x21
  unsigned int v7; // w0
  NSMutableArray *v8; // x20
  void *v9; // x22
  void *v10; // x0
  void *v11; // x1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retain(a1);
  v4 = v3;
  v5 = 0LL;
  if ( v3 && (a2 & 0x80000000) == 0 )
  {
    v6 = a2;
    if ( -[ipp_attribute_t num_values](v3, "num_values") > a2
      && ((v7 = -[ipp_attribute_t value_tag](v4, "value_tag"), v7 - 55 > 0xFFFFFFFD) || v7 - 74 >= 0xFFFFFFF7) )
    {
      v8 = objc_retainAutoreleasedReturnValue(-[ipp_attribute_t values](v4, "values"));
      v9 = objc_retainAutoreleasedReturnValue(-[NSMutableArray objectAtIndexedSubscript:](v8, "objectAtIndexedSubscript:", v6));
      v10 = objc_msgSend(v9, "string");
      v5 = v11;
      objc_release(v10);
      objc_release(v9);
      objc_release(v8);
    }
    else
    {
      v5 = 0LL;
    }
  }
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}