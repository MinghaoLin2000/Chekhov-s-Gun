-[TSUExtendedAttribute isEqual:]
bool __cdecl -[TSUExtendedAttribute isEqual:](TSUExtendedAttribute *self, SEL a2, id a3)
{
  id v4; // x20
  __int64 v5; // x0
  id v6; // x19
  NSString *name; // x22
  unsigned __int64 v8; // x20
  NSData *value; // x21
  unsigned __int64 v10; // x22
  unsigned __int8 v11; // w21

  v4 = objc_retain(a3);
  v5 = objc_opt_class(&OBJC_CLASS___TSUExtendedAttribute);
  v6 = objc_retainAutoreleasedReturnValue((id)TSUDynamicCast(v5, v4));
  objc_release(v4);
  if ( v6 )
  {
    name = self->_name;
    v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "name"));
    if ( (unsigned __int64)name | v8 && !(unsigned int)-[NSString isEqual:](name, "isEqual:", v8) )
    {
      v11 = 0;
    }
    else
    {
      value = self->_value;
      v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "value"));
      if ( (unsigned __int64)value | v10 )
        v11 = (unsigned __int8)-[NSData isEqual:](value, "isEqual:", v10);
      else
        v11 = 1;
      objc_release((id)v10);
    }
    objc_release((id)v8);
  }
  else
  {
    v11 = 0;
  }
  objc_release(v6);
  return v11;
}