_connect_timeout_for_device
__int64 __fastcall connect_timeout_for_device(void *a1)
{
  id v1; // x19
  const char *v2; // x0
  char *v3; // x20
  __int64 v4; // x21

  v1 = objc_retain(a1);
  if ( (unsigned int)sub_100004FC0(1LL, 10LL, 13LL, 0LL) )
  {
    v2 = (const char *)remote_device_copy_product_type(v1);
    v3 = (char *)v2;
    if ( v2 && !strcmp(v2, "iFPGA") )
    {
      v4 = 120LL;
    }
    else if ( (unsigned int)remote_device_get_type(v1) == 10 )
    {
      v4 = 10LL;
    }
    else
    {
      v4 = 5LL;
    }
  }
  else
  {
    v3 = 0LL;
    v4 = 5LL;
  }
  free(v3);
  objc_release(v1);
  return v4;
}