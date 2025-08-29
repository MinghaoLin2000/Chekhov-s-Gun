_$sSo12CGSEventTypeV16EyeCandyGraphicsE9maskValueAC15SystemEventMaskVvg
__int64 __fastcall CGSEventType.maskValue.getter(unsigned int a1)
{
  if ( a1 >= 0x20 )
    return 0LL;
  else
    return (unsigned int)(1 << a1);
}