-[AMLoaderServiceAction _supportsPauseResume]
bool __cdecl -[AMLoaderServiceAction _supportsPauseResume](AMLoaderServiceAction *self, SEL a2)
{
  AMAction *v3; // x19
  AMAction *v4; // x21
  unsigned __int8 v5; // w20

  v3 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceAction _amAction](self, "_amAction"));
  if ( (unsigned int)-[AMAction am_hasOverrideForSelector:](v3, "am_hasOverrideForSelector:", "pause") )
  {
    v4 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceAction _amAction](self, "_amAction"));
    v5 = (unsigned __int8)-[AMAction am_hasOverrideForSelector:](v4, "am_hasOverrideForSelector:", "resume");
    objc_release(v4);
  }
  else
  {
    v5 = 0;
  }
  objc_release(v3);
  return v5;
}