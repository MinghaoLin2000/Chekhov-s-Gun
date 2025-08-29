_$sSp13EyeCandySwiftE4withyqd__Si_qd__SpyxGXEtlFZ
void __fastcall static UnsafeMutablePointer.with<A>(_:_:)(__int64 a1, void (*a2)(void), __int64 a3, __int64 a4)
{
  __int64 vars8; // [xsp+38h] [xbp+8h]

  sub_10001CDE0(a1, a4);
  a2();
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  UnsafeMutablePointer.deallocate()();
}