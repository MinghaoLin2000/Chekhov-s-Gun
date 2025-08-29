-[TSUExtendedAttributeCollection isEqual:]
bool __cdecl -[TSUExtendedAttributeCollection isEqual:](TSUExtendedAttributeCollection *self, SEL a2, id a3)
{
  id v4; // x21
  __int64 v5; // x0
  _QWORD *v6; // x19
  NSMutableDictionary *attributes; // x0
  unsigned __int8 v8; // w20

  v4 = objc_retain(a3);
  v5 = objc_opt_class(&OBJC_CLASS___TSUExtendedAttributeCollection);
  v6 = objc_retainAutoreleasedReturnValue((id)TSUDynamicCast(v5, v4));
  objc_release(v4);
  if ( v6 )
  {
    attributes = self->_attributes;
    if ( (unsigned __int64)attributes | v6[1] )
      v8 = (unsigned __int8)-[NSMutableDictionary isEqual:](attributes, "isEqual:");
    else
      v8 = 1;
  }
  else
  {
    v8 = 0;
  }
  objc_release(v6);
  return v8;
}