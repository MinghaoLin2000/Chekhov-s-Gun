-[TSUDescription addField:value:]
void __cdecl -[TSUDescription addField:value:](TSUDescription *self, SEL a2, id a3, id a4)
{
  id v6; // x20
  __CFString *v7; // x21
  NSMutableDictionary *v8; // x0
  NSMutableDictionary *fields; // x8
  NSMutableArray *v10; // x0
  NSMutableArray *fieldOrder; // x8
  NSString *v12; // x0
  NSString *v13; // x22
  NSUInteger v14; // x0
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v6 = objc_retain(a3);
  v7 = (__CFString *)objc_retain(a4);
  if ( !self->_fields )
  {
    v8 = (NSMutableDictionary *)objc_alloc_init((Class)&OBJC_CLASS___NSMutableDictionary);
    fields = self->_fields;
    self->_fields = v8;
    objc_release(fields);
    v10 = (NSMutableArray *)objc_alloc_init((Class)&OBJC_CLASS___NSMutableArray);
    fieldOrder = self->_fieldOrder;
    self->_fieldOrder = v10;
    objc_release(fieldOrder);
  }
  if ( !v7 )
    v7 = CFSTR("nil");
  if ( v6 && objc_msgSend(v6, "length") )
    v12 = +[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("%@: "), v6);
  else
    v12 = +[NSString stringWithFormat:](
            &OBJC_CLASS___NSString,
            "stringWithFormat:",
            CFSTR("$$$%lu"),
            -[NSMutableDictionary count](self->_fields, "count"));
  v13 = objc_retainAutoreleasedReturnValue(v12);
  objc_release(v6);
  -[NSMutableArray addObject:](self->_fieldOrder, "addObject:", v13);
  -[NSMutableDictionary setObject:forKey:](self->_fields, "setObject:forKey:", v7, v13);
  if ( !-[NSString hasPrefix:](v13, "hasPrefix:", CFSTR("$$$")) )
  {
    v14 = -[NSString length](v13, "length");
    if ( v14 > self->_fieldNameWidth )
      self->_fieldNameWidth = v14;
  }
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v13);
}