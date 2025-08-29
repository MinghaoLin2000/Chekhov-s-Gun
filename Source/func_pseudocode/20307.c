__Z15ippAddSeparatorP5ipp_t
void __fastcall ippAddSeparator(ipp_t *a1)
{
  ipp_t *v1; // x0
  ipp_t *v2; // x19
  id v3; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v1 = objc_retain(a1);
  v2 = v1;
  if ( v1 )
    v3 = objc_unsafeClaimAutoreleasedReturnValue(
           -[ipp_t addNewEmptyAttribute:groupTag:valueTag:](
             v1,
             "addNewEmptyAttribute:groupTag:valueTag:",
             0LL,
             0LL,
             0LL));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v2);
}