-[Browse_Bonjour isOKToAdd:]
bool __cdecl -[Browse_Bonjour isOKToAdd:](Browse_Bonjour *self, SEL a2, id a3)
{
  nw_txt_record *v3; // x19
  void *v4; // x0
  void *v5; // x20
  bool v6; // w21
  _QWORD access_value[4]; // [xsp+8h] [xbp-48h] BYREF
  id v9; // [xsp+28h] [xbp-28h]

  v3 = nw_browse_result_copy_txt_record_object((nw_browse_result_t)a3);
  if ( v3
    && (((unsigned int)+[PKDefaults urfIsOptional](&OBJC_CLASS___PKDefaults, "urfIsOptional") & 1) != 0
     || nw_txt_record_find_key(v3, "URF")) )
  {
    v4 = objc_retainAutoreleasedReturnValue(+[PKDefaults requiredPDL](&OBJC_CLASS___PKDefaults, "requiredPDL"));
    v5 = v4;
    if ( v4 )
    {
      access_value[0] = _NSConcreteStackBlock;
      access_value[1] = 3254779904LL;
      access_value[2] = sub_10002ED64;
      access_value[3] = &unk_10009E2F8;
      v9 = objc_retain(v4);
      v6 = nw_txt_record_access_key(v3, "pdl", access_value);
      objc_release(v9);
    }
    else
    {
      v6 = 1;
    }
    objc_release(v5);
  }
  else
  {
    v6 = 0;
  }
  objc_release(v3);
  return v6;
}