__Z14p_sortFunction8_NSRangeS_
bool __fastcall p_sortFunction(_NSRange a1, _NSRange a2)
{
  if ( a1.location == a2.location )
    return a2.location + a2.length < a1.location + a1.length;
  else
    return a1.location < a2.location;
}