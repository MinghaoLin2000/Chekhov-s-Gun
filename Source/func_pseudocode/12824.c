+[TSUSystemInfo deviceName]
id __cdecl +[TSUSystemInfo deviceName](id a1, SEL a2)
{
  id result; // x0
  id v3; // x19

  result = objc_autorelease((id)SCDynamicStoreCopyComputerName(0LL, 0LL));
  if ( result )
  {
    v3 = result;
    if ( objc_msgSend(result, "length") )
      return v3;
    else
      return 0LL;
  }
  return result;
}