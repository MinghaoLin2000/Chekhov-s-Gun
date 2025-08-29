-[job_spool_client_t PrintQuality]
int __cdecl -[job_spool_client_t PrintQuality](job_spool_client_t *self, SEL a2)
{
  void *v2; // x19
  NSDictionary *v3; // x20
  id v4; // x22
  int v5; // w21
  _QWORD v7[3]; // [xsp+8h] [xbp-58h] BYREF
  _QWORD v8[3]; // [xsp+20h] [xbp-40h] BYREF

  v2 = objc_retainAutoreleasedReturnValue(-[PKPrintSettings printQuality](self->_printSettings, "printQuality"));
  if ( v2 )
  {
    v7[0] = PKQualityHigh;
    v7[1] = PKQualityDraft;
    v8[0] = &off_1000B4870;
    v8[1] = &off_1000B4840;
    v7[2] = PKQualityNormal;
    v8[2] = &off_1000B4858;
    v3 = objc_retainAutoreleasedReturnValue(
           +[NSDictionary dictionaryWithObjects:forKeys:count:](
             &OBJC_CLASS___NSDictionary,
             "dictionaryWithObjects:forKeys:count:",
             v8,
             v7,
             3LL));
    v4 = objc_retainAutoreleasedReturnValue(-[NSDictionary objectForKeyedSubscript:](v3, "objectForKeyedSubscript:", v2));
    v5 = validate_enum<ipp_quality_e,unsigned char>((unsigned __int8)objc_msgSend(v4, "integerValue"));
    objc_release(v4);
    objc_release(v3);
  }
  else
  {
    v5 = 3;
  }
  objc_release(v2);
  return v5;
}