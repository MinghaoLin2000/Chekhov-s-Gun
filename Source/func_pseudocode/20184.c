-[NANBrowse_Entity isEqual:]
bool __cdecl -[NANBrowse_Entity isEqual:](NANBrowse_Entity *self, SEL a2, id a3)
{
  id v4; // x19
  __int64 v5; // x1
  __int64 v6; // x0
  _QWORD *v7; // x21
  bool v8; // w20

  v4 = objc_retain(a3);
  v6 = objc_opt_class(self, v5);
  if ( (objc_opt_isKindOfClass(v4, v6) & 1) != 0 )
  {
    v7 = objc_retain(v4);
    if ( (unsigned int)-[PKPrinterBonjourEndpoint isEqual:](self->_bonjourName, "isEqual:", v7[1]) )
      v8 = -[NSDictionary isEqualToDictionary:](self->_txt, "isEqualToDictionary:", v7[2]);
    else
      v8 = 0;
    objc_release(v7);
  }
  else
  {
    v8 = 0;
  }
  objc_release(v4);
  return v8;
}