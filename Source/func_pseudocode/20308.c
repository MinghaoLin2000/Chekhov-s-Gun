__Z15ippGetIXIntegerP15ipp_attribute_ti
void *__fastcall ippGetIXInteger(ipp_attribute_t *a1, unsigned int a2)
{
  ipp_attribute_t *v3; // x0
  ipp_attribute_t *v4; // x19
  unsigned int v5; // w0
  void *v6; // x21
  __int64 v7; // x21
  NSMutableArray *v8; // x20
  void *v9; // x22

  v3 = objc_retain(a1);
  v4 = v3;
  if ( !v3 )
    goto LABEL_9;
  if ( -[ipp_attribute_t value_tag](v3, "value_tag") == 33 )
  {
    if ( (a2 & 0x80000000) != 0 )
      goto LABEL_9;
  }
  else
  {
    v5 = -[ipp_attribute_t value_tag](v4, "value_tag");
    v6 = 0LL;
    if ( (a2 & 0x80000000) != 0 || v5 != 35 )
      goto LABEL_10;
  }
  v7 = a2;
  if ( -[ipp_attribute_t num_values](v4, "num_values") <= a2 )
  {
LABEL_9:
    v6 = 0LL;
    goto LABEL_10;
  }
  v8 = objc_retainAutoreleasedReturnValue(-[ipp_attribute_t values](v4, "values"));
  v9 = objc_retainAutoreleasedReturnValue(-[NSMutableArray objectAtIndexedSubscript:](v8, "objectAtIndexedSubscript:", v7));
  v6 = objc_msgSend(v9, "integer");
  objc_release(v9);
  objc_release(v8);
LABEL_10:
  objc_release(v4);
  return v6;
}