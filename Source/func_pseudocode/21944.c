-[PAUbiquityController initWithPassAtPath:ubiquitousFilename:]
PAUbiquityController *__cdecl -[PAUbiquityController initWithPassAtPath:ubiquitousFilename:](
        PAUbiquityController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x22
  PAUbiquityController *v8; // x20
  NSURL *v9; // x0
  NSURL *localURL; // x8
  PAUbiquityController *v11; // x0

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = -[PAUbiquityController init](self, "init");
  if ( v8 )
  {
    v9 = objc_retainAutoreleasedReturnValue(+[NSURL fileURLWithPath:](&OBJC_CLASS___NSURL, "fileURLWithPath:", v6));
    localURL = v8->_localURL;
    v8->_localURL = v9;
    objc_release(localURL);
    objc_storeStrong((id *)&v8->_ubiquitousFilename, a4);
    v11 = objc_retain(v8);
  }
  objc_release(v7);
  objc_release(v6);
  objc_release(v8);
  return v8;
}