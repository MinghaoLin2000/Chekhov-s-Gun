-[ipp_t _addAttrToAppropriateGroup:]
void __cdecl -[ipp_t _addAttrToAppropriateGroup:](ipp_t *self, SEL a2, id a3)
{
  id v4; // x19
  char *v5; // x21
  unsigned int v6; // w0
  unsigned int v7; // w23
  char *v8; // x24
  unsigned __int64 v9; // x22
  void *v10; // x25
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = (char *)-[NSMutableArray count](self->_attrs, "count");
  v6 = (unsigned int)objc_msgSend(v4, "group_tag");
  if ( !v5 )
    goto LABEL_13;
  v7 = v6;
  v8 = 0LL;
  v9 = -1LL;
  while ( 1 )
  {
    v10 = objc_retainAutoreleasedReturnValue(-[NSMutableArray objectAtIndexedSubscript:](self->_attrs, "objectAtIndexedSubscript:", v8));
    if ( (unsigned int)objc_msgSend(v10, "group_tag") != v7 )
      break;
    v9 = (unsigned __int64)++v8;
LABEL_7:
    objc_release(v10);
    if ( v8 == v5 )
      goto LABEL_10;
  }
  if ( v9 == -1LL )
  {
    ++v8;
    goto LABEL_7;
  }
  objc_release(v10);
LABEL_10:
  if ( v9 != -1LL && v9 < (unsigned __int64)v5 )
  {
    -[NSMutableArray insertObject:atIndex:](self->_attrs, "insertObject:atIndex:", v4, v9);
    goto LABEL_14;
  }
LABEL_13:
  -[NSMutableArray addObject:](self->_attrs, "addObject:", v4);
LABEL_14:
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}