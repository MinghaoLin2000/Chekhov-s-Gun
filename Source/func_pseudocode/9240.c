-[TSPTemporaryObjectContextDelegate context:canPerformUserActionUsingBlock:]
void __cdecl -[TSPTemporaryObjectContextDelegate context:canPerformUserActionUsingBlock:](
        TSPTemporaryObjectContextDelegate *self,
        SEL a2,
        id a3,
        id a4)
{
  id v4; // x0
  void *v5; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retain(a4);
  v5 = v4;
  if ( v4 )
    (*((void (__fastcall **)(id, __int64))v4 + 2))(v4, 1LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}