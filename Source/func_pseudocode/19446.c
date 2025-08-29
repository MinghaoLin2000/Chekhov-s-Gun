-[MDRemoteServiceSupport allowedToStartService:]
bool __cdecl -[MDRemoteServiceSupport allowedToStartService:](MDRemoteServiceSupport *self, SEL a2, id a3)
{
  id v3; // x19
  unsigned __int8 v4; // w20

  v3 = objc_retain(a3);
  if ( ((unsigned int)objc_msgSend(v3, "isEqual:", CFSTR("com.apple.mobile.lockdown.remote.trusted")) & 1) != 0
    || ((unsigned int)objc_msgSend(v3, "isEqual:", CFSTR("com.apple.mobile.lockdown.remote.untrusted")) & 1) != 0 )
  {
    v4 = 1;
  }
  else
  {
    v4 = (unsigned __int8)objc_msgSend(v3, "hasSuffix:", CFSTR(".shim.remote"));
  }
  objc_release(v3);
  return v4;
}