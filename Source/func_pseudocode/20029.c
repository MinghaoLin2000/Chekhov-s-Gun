-[BonjourBrowse_Entity isEqual:]
bool __cdecl -[BonjourBrowse_Entity isEqual:](BonjourBrowse_Entity *self, SEL a2, id a3)
{
  id v4; // x19
  __int64 v5; // x1
  __int64 v6; // x0
  id v7; // x20
  id v8; // x21
  void *v9; // x23
  unsigned __int8 v10; // w22

  v4 = objc_retain(a3);
  v6 = objc_opt_class(self, v5);
  if ( (objc_opt_isKindOfClass(v4, v6) & 1) != 0 )
  {
    v7 = objc_retain(v4);
    v8 = objc_retainAutoreleasedReturnValue(-[BonjourBrowse_Entity bonjourName](self, "bonjourName"));
    v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "bonjourName"));
    v10 = (unsigned __int8)objc_msgSend(v8, "isEqual:", v9);
    objc_release(v9);
    objc_release(v8);
    objc_release(v7);
  }
  else
  {
    v10 = 0;
  }
  objc_release(v4);
  return v10;
}